/**
 * @file Types.cpp
 * @brief Implementación del sistema de tipos
 */

#include "Types.h"
#include <cassert>
#include <algorithm>

namespace aether {

// ============================================
// TYPE BASE METHODS
// ============================================

std::string Type::getQualifiedName() const {
    return getName();
}

bool Type::isPrimitive() const {
    return kind_ >= TypeKind::Void && kind_ <= TypeKind::Type;
}

bool Type::isNumeric() const {
    return isInteger() || isFloat();
}

bool Type::isInteger() const {
    return kind_ >= TypeKind::Int8 && kind_ <= TypeKind::UIntSize;
}

bool Type::isFloat() const {
    return kind_ == TypeKind::Float32 || kind_ == TypeKind::Float64;
}

bool Type::isBoolean() const {
    return kind_ == TypeKind::Bool;
}

bool Type::isCompound() const {
    return kind_ >= TypeKind::Tuple && kind_ <= TypeKind::Alias;
}

bool Type::isScalar() const {
    return isPrimitive() && kind_ != TypeKind::Void && kind_ != TypeKind::String;
}

bool Type::isReference() const {
    return kind_ == TypeKind::Reference;
}

bool Type::isPointer() const {
    return kind_ == TypeKind::Pointer;
}

bool Type::isFunction() const {
    return kind_ == TypeKind::Function;
}

bool Type::isAggregate() const {
    return kind_ == TypeKind::Struct || kind_ == TypeKind::Enum || kind_ == TypeKind::Union;
}

bool Type::isCollection() const {
    return kind_ == TypeKind::Tuple || kind_ == TypeKind::Array;
}

bool Type::isOption() const {
    return kind_ == TypeKind::Option;
}

bool Type::isResult() const {
    return kind_ == TypeKind::Result;
}

bool Type::isNever() const {
    return kind_ == TypeKind::Never;
}

bool Type::isEqual(const Type* other) const {
    return kind_ == other->kind_;
}

bool Type::isSubtypeOf(const Type* other) const {
    // Por defecto, solo los tipos idénticos son subtipos
    return isEqual(other);
}

Type* Type::getCommonType(Type* other) const {
    if (isEqual(other)) {
        return const_cast<Type*>(this);
    }
    return nullptr;
}

ConversionKind Type::getConversionTo(Type* target) const {
    if (isEqual(target)) {
        return ConversionKind::Identity;
    }
    return ConversionKind::None;
}

void Type::dump(std::ostream& os, int indent) const {
    std::string pad(indent * 2, ' ');
    os << pad << getName() << " (size=" << size_ << ", align=" << alignment_ << ")";
}

std::string Type::getKindName(TypeKind kind) {
    switch (kind) {
        case TypeKind::Void: return "Void";
        case TypeKind::Bool: return "Bool";
        case TypeKind::Char: return "Char";
        case TypeKind::Int8: return "Int8";
        case TypeKind::Int16: return "Int16";
        case TypeKind::Int32: return "Int32";
        case TypeKind::Int64: return "Int64";
        case TypeKind::IntSize: return "IntSize";
        case TypeKind::UInt8: return "UInt8";
        case TypeKind::UInt16: return "UInt16";
        case TypeKind::UInt32: return "UInt32";
        case TypeKind::UInt64: return "UInt64";
        case TypeKind::UIntSize: return "UIntSize";
        case TypeKind::Float32: return "Float32";
        case TypeKind::Float64: return "Float64";
        case TypeKind::String: return "String";
        case TypeKind::Type: return "Type";
        case TypeKind::Tuple: return "Tuple";
        case TypeKind::Array: return "Array";
        case TypeKind::Function: return "Function";
        case TypeKind::Struct: return "Struct";
        case TypeKind::Enum: return "Enum";
        case TypeKind::Union: return "Union";
        case TypeKind::Reference: return "Reference";
        case TypeKind::Pointer: return "Pointer";
        case TypeKind::Option: return "Option";
        case TypeKind::Result: return "Result";
        case TypeKind::Never: return "Never";
        case TypeKind::Generic: return "Generic";
        case TypeKind::Alias: return "Alias";
        case TypeKind::Unresolved: return "Unresolved";
        case TypeKind::Error: return "Error";
        default: return "Unknown";
    }
}

// ============================================
// PRIMITIVE TYPE
// ============================================

void PrimitiveType::calculateSizeAndAlignment() {
    switch (kind_) {
        case TypeKind::Void:
            setSize(0);
            setAlignment(1);
            break;
        case TypeKind::Bool:
            setSize(1);
            setAlignment(1);
            break;
        case TypeKind::Char:
            setSize(1);
            setAlignment(1);
            break;
        case TypeKind::Int8:
        case TypeKind::UInt8:
            setSize(1);
            setAlignment(1);
            break;
        case TypeKind::Int16:
        case TypeKind::UInt16:
            setSize(2);
            setAlignment(2);
            break;
        case TypeKind::Int32:
        case TypeKind::UInt32:
        case TypeKind::Float32:
            setSize(4);
            setAlignment(4);
            break;
        case TypeKind::Int64:
        case TypeKind::UInt64:
        case TypeKind::Float64:
            setSize(8);
            setAlignment(8);
            break;
        case TypeKind::IntSize:
        case TypeKind::UIntSize:
            setSize(sizeof(void*));
            setAlignment(sizeof(void*));
            break;
        case TypeKind::String:
            setSize(sizeof(void*));
            setAlignment(sizeof(void*));
            break;
        case TypeKind::Type:
            setSize(sizeof(void*));
            setAlignment(sizeof(void*));
            break;
        default:
            setSize(-1);
            setAlignment(-1);
    }
}

std::string PrimitiveType::getName() const {
    return getKindName(kind_);
}

bool PrimitiveType::isEqual(const Type* other) const {
    if (!Type::isEqual(other)) return false;
    // Todos los tipos primitivos del mismo tipo son iguales
    return true;
}

// ============================================
// TUPLE TYPE
// ============================================

std::string TupleType::getName() const {
    if (elements_.empty()) {
        return "()";
    }
    
    std::ostringstream oss;
    oss << "(";
    for (size_t i = 0; i < elements_.size(); ++i) {
        if (i > 0) oss << ", ";
        oss << elements_[i]->getName();
    }
    oss << ")";
    return oss.str();
}

bool TupleType::isEqual(const Type* other) const {
    if (!Type::isEqual(other)) return false;
    
    auto* otherTuple = static_cast<const TupleType*>(other);
    if (elements_.size() != otherTuple->elements_.size()) return false;
    
    for (size_t i = 0; i < elements_.size(); ++i) {
        if (!elements_[i]->isEqual(otherTuple->elements_[i])) return false;
    }
    
    return true;
}

// ============================================
// ARRAY TYPE
// ============================================

std::string ArrayType::getName() const {
    std::ostringstream oss;
    oss << "[" << elementType_->getName() << "; " << size_ << "]";
    return oss.str();
}

bool ArrayType::isEqual(const Type* other) const {
    if (!Type::isEqual(other)) return false;
    
    auto* otherArray = static_cast<const ArrayType*>(other);
    return size_ == otherArray->size_ && elementType_->isEqual(otherArray->elementType_);
}

// ============================================
// FUNCTION TYPE
// ============================================

std::string FunctionType::getName() const {
    std::ostringstream oss;
    oss << "fn(";
    for (size_t i = 0; i < paramTypes_.size(); ++i) {
        if (i > 0) oss << ", ";
        oss << paramTypes_[i]->getName();
    }
    if (isVarArg_) {
        if (!paramTypes_.empty()) oss << ", ";
        oss << "...";
    }
    oss << ") -> " << returnType_->getName();
    return oss.str();
}

bool FunctionType::isEqual(const Type* other) const {
    if (!Type::isEqual(other)) return false;
    
    auto* otherFunc = static_cast<const FunctionType*>(other);
    if (isVarArg_ != otherFunc->isVarArg_) return false;
    if (paramTypes_.size() != otherFunc->paramTypes_.size()) return false;
    if (!returnType_->isEqual(otherFunc->returnType_)) return false;
    
    for (size_t i = 0; i < paramTypes_.size(); ++i) {
        if (!paramTypes_[i]->isEqual(otherFunc->paramTypes_[i])) return false;
    }
    
    return true;
}

// ============================================
// STRUCT TYPE
// ============================================

StructField* StructType::getField(const std::string& name) {
    for (auto& field : fields_) {
        if (field.name == name) return &field;
    }
    return nullptr;
}

size_t StructType::getFieldIndex(const std::string& name) const {
    for (size_t i = 0; i < fields_.size(); ++i) {
        if (fields_[i].name == name) return i;
    }
    return static_cast<size_t>(-1);
}

void StructType::updateLayout() {
    int64_t offset = 0;
    int64_t maxAlign = 1;
    
    for (auto& field : fields_) {
        int64_t align = field.type->getAlignment() > 0 ? field.type->getAlignment() : 1;
        maxAlign = std::max(maxAlign, align);
        
        // Calcular padding para alineación
        if (offset % align != 0) {
            offset += align - (offset % align);
        }
        
        field.offset = offset;
        offset += field.type->getSize() > 0 ? field.type->getSize() : 1;
    }
    
    setSize(offset);
    setAlignment(maxAlign);
}

std::string StructType::getName() const {
    return name_;
}

bool StructType::isEqual(const Type* other) const {
    if (!Type::isEqual(other)) return false;
    
    auto* otherStruct = static_cast<const StructType*>(other);
    return name_ == otherStruct->name_;
}

// ============================================
// ENUM TYPE
// ============================================

EnumVariant* EnumType::getVariant(const std::string& name) {
    for (auto& variant : variants_) {
        if (variant.name == name) return &variant;
    }
    return nullptr;
}

int64_t EnumType::getVariantDiscriminant(const std::string& name) const {
    for (const auto& variant : variants_) {
        if (variant.name == name) return variant.discriminant;
    }
    return -1;
}

std::string EnumType::getName() const {
    return name_;
}

bool EnumType::isEqual(const Type* other) const {
    if (!Type::isEqual(other)) return false;
    
    auto* otherEnum = static_cast<const EnumType*>(other);
    return name_ == otherEnum->name_;
}

// ============================================
// REFERENCE TYPE
// ============================================

std::string ReferenceType::getName() const {
    std::ostringstream oss;
    oss << "&";
    if (isMutable()) oss << "mut ";
    oss << referencedType_->getName();
    return oss.str();
}

bool ReferenceType::isEqual(const Type* other) const {
    if (!Type::isEqual(other)) return false;
    
    auto* otherRef = static_cast<const ReferenceType*>(other);
    return mutability_ == otherRef->mutability_ && 
           referencedType_->isEqual(otherRef->referencedType_);
}

// ============================================
// POINTER TYPE
// ============================================

std::string PointerType::getName() const {
    std::ostringstream oss;
    oss << "*";
    if (isMutable()) oss << "mut ";
    oss << pointedType_->getName();
    return oss.str();
}

bool PointerType::isEqual(const Type* other) const {
    if (!Type::isEqual(other)) return false;
    
    auto* otherPtr = static_cast<const PointerType*>(other);
    return mutability_ == otherPtr->mutability_ && 
           pointedType_->isEqual(otherPtr->pointedType_);
}

// ============================================
// OPTION TYPE
// ============================================

std::string OptionType::getName() const {
    std::ostringstream oss;
    oss << "Option<" << innerType_->getName() << ">";
    return oss.str();
}

bool OptionType::isEqual(const Type* other) const {
    if (!Type::isEqual(other)) return false;
    
    auto* otherOpt = static_cast<const OptionType*>(other);
    return innerType_->isEqual(otherOpt->innerType_);
}

// ============================================
// RESULT TYPE
// ============================================

std::string ResultType::getName() const {
    std::ostringstream oss;
    oss << "Result<" << okType_->getName() << ", " << errorType_->getName() << ">";
    return oss.str();
}

bool ResultType::isEqual(const Type* other) const {
    if (!Type::isEqual(other)) return false;
    
    auto* otherResult = static_cast<const ResultType*>(other);
    return okType_->isEqual(otherResult->okType_) && 
           errorType_->isEqual(otherResult->errorType_);
}

// ============================================
// GENERIC TYPE
// ============================================

std::string GenericType::getName() const {
    return name_;
}

bool GenericType::isEqual(const Type* other) const {
    if (!Type::isEqual(other)) return false;
    
    auto* otherGeneric = static_cast<const GenericType*>(other);
    return name_ == otherGeneric->name_;
}

// ============================================
// TYPE ALIAS
// ============================================

std::string TypeAlias::getName() const {
    return name_;
}

bool TypeAlias::isEqual(const Type* other) const {
    if (!Type::isEqual(other)) return false;
    
    auto* otherAlias = static_cast<const TypeAlias*>(other);
    return name_ == otherAlias->name_;
}

// ============================================
// ERROR TYPE
// ============================================

std::string ErrorType::getName() const {
    return "<error>";
}

bool ErrorType::isEqual(const Type* other) const {
    // Todos los tipos de error son iguales entre sí
    return other->is(TypeKind::Error);
}

// ============================================
// UNRESOLVED TYPE
// ============================================

std::string UnresolvedType::getName() const {
    return "<unresolved: " + name_ + ">";
}

bool UnresolvedType::isEqual(const Type* other) const {
    if (!Type::isEqual(other)) return false;
    
    auto* otherUnresolved = static_cast<const UnresolvedType*>(other);
    return name_ == otherUnresolved->name_;
}

// ============================================
// PATH
// ============================================

Path Path::fromString(const std::string& path) {
    Path result;
    size_t start = 0;
    size_t end = path.find("::");
    
    while (end != std::string::npos) {
        result.segments_.push_back(path.substr(start, end - start));
        start = end + 2;
        end = path.find("::", start);
    }
    
    result.segments_.push_back(path.substr(start));
    return result;
}

std::string Path::toString() const {
    return toString("::");
}

std::string Path::toString(const std::string& separator) const {
    if (segments_.empty()) return "";
    
    std::ostringstream oss;
    for (size_t i = 0; i < segments_.size(); ++i) {
        if (i > 0) oss << separator;
        oss << segments_[i];
    }
    return oss.str();
}

Path Path::operator+(const Path& other) const {
    Path result;
    result.segments_ = segments_;
    result.segments_.insert(result.segments_.end(), 
                           other.segments_.begin(), 
                           other.segments_.end());
    return result;
}

bool Path::operator==(const Path& other) const {
    return segments_ == other.segments_;
}

// ============================================
// TYPE CONTEXT
// ============================================

TypeContext::TypeContext() {
    initializePrimitives();
}

TypeContext::~TypeContext() {
    // Los tipos primitivos no se eliminan porque son estáticos
    // Los tipos compuestos se eliminan aquí
}

void TypeContext::initializePrimitives() {
    voidType_ = new PrimitiveType(TypeKind::Void);
    boolType_ = new PrimitiveType(TypeKind::Bool);
    charType_ = new PrimitiveType(TypeKind::Char);
    
    int8Type_ = new PrimitiveType(TypeKind::Int8);
    int16Type_ = new PrimitiveType(TypeKind::Int16);
    int32Type_ = new PrimitiveType(TypeKind::Int32);
    int64Type_ = new PrimitiveType(TypeKind::Int64);
    intSizeType_ = new PrimitiveType(TypeKind::IntSize);
    
    uint8Type_ = new PrimitiveType(TypeKind::UInt8);
    uint16Type_ = new PrimitiveType(TypeKind::UInt16);
    uint32Type_ = new PrimitiveType(TypeKind::UInt32);
    uint64Type_ = new PrimitiveType(TypeKind::UInt64);
    uintSizeType_ = new PrimitiveType(TypeKind::UIntSize);
    
    float32Type_ = new PrimitiveType(TypeKind::Float32);
    float64Type_ = new PrimitiveType(TypeKind::Float64);
    
    stringType_ = new PrimitiveType(TypeKind::String);
    typeType_ = new PrimitiveType(TypeKind::Type);
    
    neverType_ = new PrimitiveType(TypeKind::Never);
    neverType_->setSize(0);
    
    errorType_ = new ErrorType();
    
    // Registrar en el mapa global
    allTypes_["void"] = voidType_;
    allTypes_["bool"] = boolType_;
    allTypes_["char"] = charType_;
    
    allTypes_["i8"] = int8Type_;
    allTypes_["i16"] = int16Type_;
    allTypes_["i32"] = int32Type_;
    allTypes_["i64"] = int64Type_;
    allTypes_["isize"] = intSizeType_;
    
    allTypes_["u8"] = uint8Type_;
    allTypes_["u16"] = uint16Type_;
    allTypes_["u32"] = uint32Type_;
    allTypes_["u64"] = uint64Type_;
    allTypes_["usize"] = uintSizeType_;
    
    allTypes_["f32"] = float32Type_;
    allTypes_["f64"] = float64Type_;
    
    allTypes_["str"] = stringType_;
    allTypes_["type"] = typeType_;
}

PrimitiveType* TypeContext::getVoidType() { return voidType_; }
PrimitiveType* TypeContext::getBoolType() { return boolType_; }
PrimitiveType* TypeContext::getCharType() { return charType_; }

PrimitiveType* TypeContext::getInt8Type() { return int8Type_; }
PrimitiveType* TypeContext::getInt16Type() { return int16Type_; }
PrimitiveType* TypeContext::getInt32Type() { return int32Type_; }
PrimitiveType* TypeContext::getInt64Type() { return int64Type_; }
PrimitiveType* TypeContext::getIntSizeType() { return intSizeType_; }

PrimitiveType* TypeContext::getUInt8Type() { return uint8Type_; }
PrimitiveType* TypeContext::getUInt16Type() { return uint16Type_; }
PrimitiveType* TypeContext::getUInt32Type() { return uint32Type_; }
PrimitiveType* TypeContext::getUInt64Type() { return uint64Type_; }
PrimitiveType* TypeContext::getUIntSizeType() { return uintSizeType_; }

PrimitiveType* TypeContext::getFloat32Type() { return float32Type_; }
PrimitiveType* TypeContext::getFloat64Type() { return float64Type_; }

PrimitiveType* TypeContext::getStringType() { return stringType_; }
PrimitiveType* TypeContext::getTypeType() { return typeType_; }

PrimitiveType* TypeContext::getNeverType() { return neverType_; }
ErrorType* TypeContext::getErrorType() { return errorType_; }

TupleType* TypeContext::getTupleType(const std::vector<Type*>& elements) {
    std::string key;
    for (auto* elem : elements) {
        if (!key.empty()) key += ",";
        key += elem->getName();
    }
    
    auto it = tupleTypes_.find(key);
    if (it != tupleTypes_.end()) return it->second;
    
    auto* tuple = new TupleType(elements);
    tupleTypes_[key] = tuple;
    return tuple;
}

ArrayType* TypeContext::getArrayType(Type* elementType, uint64_t size) {
    std::string key = elementType->getName() + ";" + std::to_string(size);
    
    auto it = arrayTypes_.find(key);
    if (it != arrayTypes_.end()) return it->second;
    
    auto* array = new ArrayType(elementType, size);
    arrayTypes_[key] = array;
    return array;
}

FunctionType* TypeContext::getFunctionType(const std::vector<Type*>& params, 
                                           Type* returnType, 
                                           bool isVarArg) {
    std::string key;
    for (auto* param : params) {
        if (!key.empty()) key += ",";
        key += param->getName();
    }
    key += "->" + returnType->getName();
    if (isVarArg) key += "...";
    
    auto it = functionTypes_.find(key);
    if (it != functionTypes_.end()) return it->second;
    
    auto* func = new FunctionType(params, returnType, isVarArg);
    functionTypes_[key] = func;
    return func;
}

ReferenceType* TypeContext::getReferenceType(Type* type, Mutability mut) {
    std::string key = (mut == Mutability::Mutable ? "&mut " : "&") + type->getName();
    
    auto it = referenceTypes_.find(key);
    if (it != referenceTypes_.end()) return it->second;
    
    auto* ref = new ReferenceType(type, mut);
    referenceTypes_[key] = ref;
    return ref;
}

PointerType* TypeContext::getPointerType(Type* type, Mutability mut) {
    std::string key = (mut == Mutability::Mutable ? "*mut " : "*") + type->getName();
    
    auto it = pointerTypes_.find(key);
    if (it != pointerTypes_.end()) return it->second;
    
    auto* ptr = new PointerType(type, mut);
    pointerTypes_[key] = ptr;
    return ptr;
}

OptionType* TypeContext::getOptionType(Type* inner) {
    std::string key = "Option<" + inner->getName() + ">";
    
    auto it = optionTypes_.find(key);
    if (it != optionTypes_.end()) return it->second;
    
    auto* opt = new OptionType(inner);
    optionTypes_[key] = opt;
    return opt;
}

ResultType* TypeContext::getResultType(Type* ok, Type* error) {
    std::string key = "Result<" + ok->getName() + ", " + error->getName() + ">";
    
    auto it = resultTypes_.find(key);
    if (it != resultTypes_.end()) return it->second;
    
    auto* res = new ResultType(ok, error);
    resultTypes_[key] = res;
    return res;
}

GenericType* TypeContext::getGenericType(const std::string& name) {
    auto it = genericTypes_.find(name);
    if (it != genericTypes_.end()) return it->second;
    
    auto* gen = new GenericType(name);
    genericTypes_[name] = gen;
    return gen;
}

TypeAlias* TypeContext::getTypeAlias(const std::string& name, Type* underlying) {
    auto it = typeAliases_.find(name);
    if (it != typeAliases_.end()) return it->second;
    
    auto* alias = new TypeAlias(name, underlying);
    typeAliases_[name] = alias;
    return alias;
}

Type* TypeContext::lookupType(const std::string& name) {
    auto it = allTypes_.find(name);
    if (it != allTypes_.end()) return it->second;
    return nullptr;
}

Type* TypeContext::lookupType(const Path& path) {
    return lookupType(path.toString());
}

StructType* TypeContext::registerStruct(const std::string& name) {
    auto it = structs_.find(name);
    if (it != structs_.end()) return it->second;
    
    auto* str = new StructType(name);
    structs_[name] = str;
    allTypes_[name] = str;
    return str;
}

EnumType* TypeContext::registerEnum(const std::string& name) {
    auto it = enums_.find(name);
    if (it != enums_.end()) return it->second;
    
    auto* enm = new EnumType(name);
    enums_[name] = enm;
    allTypes_[name] = enm;
    return enm;
}

void TypeContext::dump(std::ostream& os) const {
    os << "=== Type Context ===" << std::endl;
    os << "Primitive types:" << std::endl;
    os << "  void: " << voidType_ << std::endl;
    os << "  bool: " << boolType_ << std::endl;
    os << "  i32: " << int32Type_ << std::endl;
    os << "  u64: " << uint64Type_ << std::endl;
    os << "  f64: " << float64Type_ << std::endl;
    os << std::endl;
    
    os << "Structs: " << structs_.size() << std::endl;
    for (const auto& [name, str] : structs_) {
        os << "  " << name << std::endl;
    }
    
    os << "Enums: " << enums_.size() << std::endl;
    for (const auto& [name, enm] : enums_) {
        os << "  " << name << std::endl;
    }
}

} // namespace aether
