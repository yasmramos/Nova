/**
 * @file CodeGenContext.cpp
 * @brief Implementación del contexto de generación de código LLVM
 */

#include "CodeGenContext.h"
#include "Node.h"
#include <sstream>
#include <iostream>

#if LLVM_VERSION_MAJOR >= 14
#include <llvm/Support/FileSystem.h>
#else
#include <llvm/Support/Path.h>
#endif

#if LLVM_VERSION_MAJOR >= 17
#include <llvm/Target/TargetMachine.h>
#else
#include <llvm/Target/TargetMachine.h>
#endif

namespace nova {

// ============================================
// CONSTRUCTOR Y DESTRUCTOR
// ============================================

CodeGenContext::CodeGenContext(std::string moduleName)
    : builder_(nullptr), typeContext_() {
    createModule(std::move(moduleName));
}

CodeGenContext::~CodeGenContext() {
    shutdown();
}

// ============================================
// INICIALIZACIÓN
// ============================================

void CodeGenContext::initialize() {
    // El LLVMContext ya se crea en createModule
    // Solo verificamos que todo esté listo
    if (!llvmContext_) {
        llvmContext_ = std::make_unique<llvm::LLVMContext>();
        builder_.SetInsertPoint(llvm::BasicBlock::Create(*llvmContext_, "entry"));
    }
}

void CodeGenContext::shutdown() {
    valueScopes_.clear();
    currentFunction_ = nullptr;
    targetMachine_ = nullptr;
    module_.reset();
    llvmContext_.reset();
}

void CodeGenContext::createModule(const std::string& name) {
    // Crear contexto LLVM si no existe
    if (!llvmContext_) {
        llvmContext_ = std::make_unique<llvm::LLVMContext>();
    }
    
    // Crear el módulo
    module_ = std::make_unique<llvm::Module>(name, *llvmContext_);
    
    // Resetear el builder
    builder_.SetInsertPoint(nullptr);
    
    // Inicializar el primer scope de valores
    valueScopes_.clear();
    enterScope();
}

void CodeGenContext::setTargetMachine(llvm::TargetMachine* target) {
    targetMachine_ = target;
}

// ============================================
// GESTIÓN DE SCOPES DE VALORES
// ============================================

void CodeGenContext::enterScope() {
    valueScopes_.emplace_back();
}

void CodeGenContext::exitScope() {
    if (valueScopes_.size() > 1) {
        valueScopes_.pop_back();
    }
}

void CodeGenContext::setValue(const std::string& name, llvm::Value* value) {
    if (!valueScopes_.empty()) {
        valueScopes_.back()[name] = value;
    }
}

llvm::Value* CodeGenContext::getValue(const std::string& name) {
    // Buscar desde el scope más interno hacia el más externo
    for (auto it = valueScopes_.rbegin(); it != valueScopes_.rend(); ++it) {
        auto valueIt = it->find(name);
        if (valueIt != it->end()) {
            return valueIt->second;
        }
    }
    return nullptr;
}

void CodeGenContext::removeValue(const std::string& name) {
    if (!valueScopes_.empty()) {
        valueScopes_.back().erase(name);
    }
}

void CodeGenContext::clearCurrentScope() {
    if (!valueScopes_.empty()) {
        valueScopes_.back().clear();
    }
}

// ============================================
// GENERACIÓN DE CÓDIGO
// ============================================

llvm::AllocaInst* CodeGenContext::createEntryBlockAlloca(
    llvm::Function* func, 
    const std::string& name, 
    llvm::Type* type
) {
    // Crear un IRBuilder posicionado al inicio del bloque de entrada
    llvm::IRBuilder<> tmpBuilder(&func->getEntryBlock(), func->getEntryBlock().begin());
    
    // Crear la asignación (alloca)
    return tmpBuilder.CreateAlloca(type, nullptr, name);
}

llvm::Type* CodeGenContext::convertType(Type* type) {
    if (!type) {
        return llvm::Type::getVoidTy(*llvmContext_);
    }
    
    switch (type->getKind()) {
        case TypeKind::Void:
            return llvm::Type::getVoidTy(*llvmContext_);
            
        case TypeKind::Bool:
            return llvm::Type::getInt1Ty(*llvmContext_);
            
        case TypeKind::Char:
            return llvm::Type::getInt8Ty(*llvmContext_);
            
        case TypeKind::Int8:
            return llvm::Type::getInt8Ty(*llvmContext_);
        case TypeKind::Int16:
            return llvm::Type::getInt16Ty(*llvmContext_);
        case TypeKind::Int32:
            return llvm::Type::getInt32Ty(*llvmContext_);
        case TypeKind::Int64:
            return llvm::Type::getInt64Ty(*llvmContext_);
        case TypeKind::IntSize:
            return llvm::Type::getIntPtrTy(*llvmContext_);
            
        case TypeKind::UInt8:
            return llvm::Type::getInt8Ty(*llvmContext_);
        case TypeKind::UInt16:
            return llvm::Type::getInt16Ty(*llvmContext_);
        case TypeKind::UInt32:
            return llvm::Type::getInt32Ty(*llvmContext_);
        case TypeKind::UInt64:
            return llvm::Type::getInt64Ty(*llvmContext_);
        case TypeKind::UIntSize:
            return llvm::Type::getIntPtrTy(*llvmContext_);
            
        case TypeKind::Float32:
            return llvm::Type::getFloatTy(*llvmContext_);
        case TypeKind::Float64:
            return llvm::Type::getDoubleTy(*llvmContext_);
            
        case TypeKind::String:
            // String se representa como puntero a char (i8*)
            return llvm::Type::getInt8PtrTy(*llvmContext_);
            
        case TypeKind::Type:
            // Metatipo - usar i8* por ahora
            return llvm::Type::getInt8PtrTy(*llvmContext_);
            
        case TypeKind::Tuple: {
            auto* tupleType = static_cast<TupleType*>(type);
            std::vector<llvm::Type*> elements;
            for (auto* elem : tupleType->getElements()) {
                elements.push_back(convertType(elem));
            }
            return llvm::StructType::create(*llvmContext_, elements);
        }
        
        case TypeKind::Array: {
            auto* arrayType = static_cast<ArrayType*>(type);
            llvm::Type* elemType = convertType(arrayType->getElementType());
            return llvm::ArrayType::get(elemType, arrayType->getSize());
        }
        
        case TypeKind::Function: {
            auto* funcType = static_cast<FunctionType*>(type);
            return convertFunctionType(funcType);
        }
        
        case TypeKind::Reference:
        case TypeKind::Pointer: {
            auto* refType = static_cast<ReferenceType*>(type);
            llvm::Type* elemType = convertType(refType->getReferencedType());
            return llvm::PointerType::get(elemType, 0);
        }
        
        case TypeKind::Struct: {
            auto* structType = static_cast<StructType*>(type);
            std::vector<llvm::Type*> fields;
            for (const auto& field : structType->getFields()) {
                fields.push_back(convertType(field.type));
            }
            return llvm::StructType::create(*llvmContext_, fields, structType->getName());
        }
        
        case TypeKind::Enum: {
            // Enums se representan como enteros
            return llvm::Type::getInt32Ty(*llvmContext_);
        }
        
        case TypeKind::Option:
        case TypeKind::Result: {
            // Por ahora, representar como puntero
            return llvm::Type::getInt8PtrTy(*llvmContext_);
        }
        
        case TypeKind::Never:
            return llvm::Type::getVoidTy(*llvmContext_);
            
        case TypeKind::Generic:
        case TypeKind::Unresolved:
        case TypeKind::Error:
        default:
            // Tipo desconocido o error, usar i8*
            return llvm::Type::getInt8PtrTy(*llvmContext_);
    }
}

llvm::Type* CodeGenContext::convertPrimitiveType(PrimitiveType* type) {
    return convertType(type);
}

llvm::FunctionType* CodeGenContext::convertFunctionType(FunctionType* type) {
    std::vector<llvm::Type*> paramTypes;
    for (auto* param : type->getParamTypes()) {
        paramTypes.push_back(convertType(param));
    }
    
    llvm::Type* returnType = convertType(type->getReturnType());
    
    return llvm::FunctionType::get(returnType, paramTypes, type->isVarArg());
}

// ============================================
// VERIFICACIÓN Y SALIDA
// ============================================

bool CodeGenContext::verifyModule() {
    if (!module_) {
        lastError_ = "No module to verify";
        return false;
    }
    
    std::string errorStr;
    llvm::raw_string_ostream errorStream(errorStr);
    
    bool hasError = llvm::verifyModule(*module_, &errorStream);
    
    if (hasError) {
        lastError_ = errorStream.str();
        hasErrors_ = true;
    }
    
    return !hasError;
}

void CodeGenContext::printModule(std::ostream& os) {
    if (module_) {
        module_->print(os, nullptr);
    }
}

bool CodeGenContext::emitObjectFile(const std::string& filename) {
#if LLVM_VERSION_MAJOR >= 14
    std::error_code EC;
    llvm::raw_fd_ostream dest(filename, EC, llvm::sys::fs::OF_None);
    
    if (EC) {
        lastError_ = "Could not open file: " + EC.message();
        return false;
    }
    
    if (targetMachine_) {
        llvm::CodeGenFileType fileType = llvm::CGFT_ObjectFile;
        return !targetMachine_->addPassesToEmitFile(
            builder_.GetInsertBlock()->getParent()->getParent()->getPassManager(),
            dest, nullptr, fileType, nullptr
        ).took();
    }
#endif
    lastError_ = "No target machine configured";
    return false;
}

bool CodeGenContext::emitAssemblyFile(const std::string& filename) {
#if LLVM_VERSION_MAJOR >= 14
    std::error_code EC;
    llvm::raw_fd_ostream dest(filename, EC, llvm::sys::fs::OF_None);
    
    if (EC) {
        lastError_ = "Could not open file: " + EC.message();
        return false;
    }
    
    if (targetMachine_) {
        llvm::CodeGenFileType fileType = llvm::CGFT_AssemblyFile;
        return !targetMachine_->addPassesToEmitFile(
            builder_.GetInsertBlock()->getParent()->getParent()->getPassManager(),
            dest, nullptr, fileType, nullptr
        ).took();
    }
#endif
    lastError_ = "No target machine configured";
    return false;
}

bool CodeGenContext::emitBitcodeFile(const std::string& filename) {
#if LLVM_VERSION_MAJOR >= 14
    std::error_code EC;
    llvm::raw_fd_ostream dest(filename, EC, llvm::sys::fs::OF_None);
    
    if (EC) {
        lastError_ = "Could not open file: " + EC.message();
        return false;
    }
    
    llvm::WriteBitcodeToFile(*module_, dest);
    return true;
#else
    lastError_ = "Bitcode emission not supported in this LLVM version";
    return false;
#endif
}

// ============================================
// MANEJO DE ERRORES
// ============================================

void CodeGenContext::reportError(const std::string& message) {
    hasErrors_ = true;
    lastError_ = message;
    std::cerr << "[CodeGen Error] " << message << std::endl;
}

// ============================================
// UTILIDADES
// ============================================

std::string CodeGenContext::generateLabel(const std::string& prefix) {
    return prefix + std::to_string(labelCounter_++);
}

std::string CodeGenContext::generateTemp(const std::string& prefix) {
    return prefix + std::to_string(tempCounter_++);
}

CodeGenContext::ModuleStats CodeGenContext::getStats() const {
    ModuleStats stats = {};
    
    if (!module_) {
        return stats;
    }
    
    stats.functionCount = module_->getFunctionList().size();
    
    for (const auto& func : module_->getFunctionList()) {
        for (const auto& block : func) {
            stats.basicBlockCount++;
            stats.instructionCount += block.size();
        }
    }
    
    return stats;
}

} // namespace nova
