/**
 * @file CodeGenContext.h
 * @brief Contexto global para la generación de código LLVM
 * 
 * Este archivo define el contexto que mantiene el estado de LLVM
 * durante la generación de código, incluyendo el módulo, builder,
 * y tablas de símbolos para valores LLVM.
 */

#ifndef NOVA_CODEGEN_CONTEXT_H
#define NOVA_CODEGEN_CONTEXT_H

#include <memory>
#include <string>
#include <unordered_map>
#include <vector>
#include <functional>
#include <optional>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Verifier.h>
#include <llvm/IR/DIBuilder.h>
#include <llvm/Target/TargetMachine.h>
#include "Types.h"
#include "SymbolTable.h"

namespace llvm {
class Function;
class BasicBlock;
class Value;
class Type;
class AllocaInst;
}

// Forward declarations
struct Symbol;

namespace nova {

/**
 * @class CodeGenContext
 * @brief Gestiona el estado global de LLVM durante la compilación
 * 
 * Mantiene:
 * - LLVMContext: El contexto global de LLVM
 * - Module: El módulo LLVM que se está generando
 * - IRBuilder: El constructor de instrucciones
 * - SymbolMaps: Tablas de símbolos para valores LLVM
 * - Debug Info: Metadatos de depuración (opcional)
 */
class CodeGenContext {
public:
    /**
     * @brief Constructor
     * @param moduleName Nombre del módulo LLVM
     */
    explicit CodeGenContext(std::string moduleName = "NovaModule");
    
    /**
     * @brief Destructor
     */
    ~CodeGenContext();
    
    // === Inicialización ===
    
    /**
     * @brief Inicializa el contexto LLVM
     */
    void initialize();
    
    /**
     * @brief Finaliza y libera recursos
     */
    void shutdown();
    
    /**
     * @brief Crea un nuevo módulo
     */
    void createModule(const std::string& name);
    
    /**
     * @brief Configura la arquitectura objetivo
     */
    void setTargetMachine(llvm::TargetMachine* target);
    
    // === Getters ===
    
    llvm::LLVMContext& getLLVMContext() { return *llvmContext_; }
    llvm::Module* getModule() { return module_.get(); }
    llvm::IRBuilder<>& getBuilder() { return builder_; }
    TypeContext& getTypeContext() { return typeContext_; }
    llvm::TargetMachine* getTargetMachine() { return targetMachine_; }
    
    // === Gestión de scopes para valores ===
    
    /**
     * @brief Entra a un nuevo scope de valores
     */
    void enterScope();
    
    /**
     * @brief Sale del scope actual
     */
    void exitScope();
    
    /**
     * @brief Registra un valor LLVM
     */
    void setValue(const std::string& name, llvm::Value* value);
    
    /**
     * @brief Obtiene un valor LLVM por nombre
     */
    llvm::Value* getValue(const std::string& name);
    
    /**
     * @brief Elimina un valor del scope actual
     */
    void removeValue(const std::string& name);
    
    /**
     * @brief Limpia todos los valores del scope actual
     */
    void clearCurrentScope();
    
    // === Gestión de funciones ===
    
    /**
     * @brief Obtiene la función actual
     */
    llvm::Function* getCurrentFunction() const { return currentFunction_; }
    
    /**
     * @brief Establece la función actual
     */
    void setCurrentFunction(llvm::Function* func) { currentFunction_ = func; }
    
    // === Gestión de bloques básicos ===
    
    /**
     * @brief Obtiene el bloque básico actual
     */
    llvm::BasicBlock* getCurrentBlock() const { return builder_.GetInsertBlock(); }
    
    /**
     * @brief Establece el bloque básico actual
     */
    void setCurrentBlock(llvm::BasicBlock* block) { builder_.SetInsertPoint(block); }
    
    // === Generación de código ===
    
    /**
     * @brief Crea una asignación (alloca + store)
     */
    llvm::AllocaInst* createEntryBlockAlloca(
        llvm::Function* func, 
        const std::string& name, 
        llvm::Type* type
    );
    
    /**
     * @brief Convierte un tipo de Nova a tipo de LLVM
     */
    llvm::Type* convertType(Type* novaType);
    
    /**
     * @brief Convierte un tipo primitivo de Nova a LLVM
     */
    llvm::Type* convertPrimitiveType(PrimitiveType* type);
    
    /**
     * @brief Convierte un tipo función de Nova a LLVM
     */
    llvm::FunctionType* convertFunctionType(FunctionType* type);
    
    // === Verificación y salida ===
    
    /**
     * @brief Verifica que el módulo es válido
     * @return true si el módulo pasa la verificación
     */
    bool verifyModule();
    
    /**
     * @brief Imprime el módulo en formato IR textual
     */
    void printModule(std::ostream& os);
    
    /**
     * @brief Genera el código objeto
     */
    bool emitObjectFile(const std::string& filename);
    
    /**
     * @brief Genera código ensamblador
     */
    bool emitAssemblyFile(const std::string& filename);
    
    /**
     * @brief Genera bitcode LLVM
     */
    bool emitBitcodeFile(const std::string& filename);
    
    // === Manejo de errores ===
    
    /**
     * @brief Verifica si hay errores de generación
     */
    bool hasErrors() const { return hasErrors_; }
    
    /**
     * @brief Registra un error de generación
     */
    void reportError(const std::string& message);
    
    /**
     * @brief Obtiene el último mensaje de error
     */
    const std::string& getLastError() const { return lastError_; }
    
    // === Utilidades ===
    
    /**
     * @brief Genera un nombre único para labels
     */
    std::string generateLabel(const std::string& prefix = "label");
    
    /**
     * @brief Genera un nombre único para temporales
     */
    std::string generateTemp(const std::string& prefix = "tmp");
    
    /**
     * @brief Obtiene estadísticas del módulo
     */
    struct ModuleStats {
        size_t functionCount;
        size_t basicBlockCount;
        size_t instructionCount;
    };
    
    ModuleStats getStats() const;

private:
    // Estado de LLVM
    std::unique_ptr<llvm::LLVMContext> llvmContext_;
    std::unique_ptr<llvm::Module> module_;
    llvm::IRBuilder<> builder_;
    llvm::TargetMachine* targetMachine_ = nullptr;
    
    // Contexto de tipos
    TypeContext typeContext_;
    
    // Pila de scopes para valores
    std::vector<std::unordered_map<std::string, llvm::Value*>> valueScopes_;
    
    // Función y bloque actual
    llvm::Function* currentFunction_ = nullptr;
    
    // Contadores para generación de nombres
    int labelCounter_ = 0;
    int tempCounter_ = 0;
    
    // Manejo de errores
    bool hasErrors_ = false;
    std::string lastError_;
    
    // Metadatos de depuración
    std::unique_ptr<llvm::DIBuilder> dib_;
    llvm::DICompileUnit* diCompileUnit_ = nullptr;
    llvm::DIFile* diFile_ = nullptr;
};

/**
 * @class CodegenResult
 * @brief Resultado de la generación de código
 */
struct CodegenResult {
    bool success;
    std::string errorMessage;
    std::unique_ptr<llvm::Module> module;
    
    CodegenResult() : success(false), module(nullptr) {}
    
    static CodegenResult success(std::unique_ptr<llvm::Module> mod) {
        CodegenResult result;
        result.success = true;
        result.module = std::move(mod);
        return result;
    }
    
    static CodegenResult failure(const std::string& error) {
        CodegenResult result;
        result.success = false;
        result.errorMessage = error;
        return result;
    }
};

/**
 * @class CodegenError
 * @brief Excepción para errores de generación de código
 */
class CodegenError : public std::runtime_error {
public:
    CodegenError(const std::string& msg) : std::runtime_error(msg) {}
    CodegenError(const std::string& msg, const std::string& loc)
        : std::runtime_error(msg + " at " + loc) {}
};

} // namespace nova

#endif // NOVA_CODEGEN_CONTEXT_H
