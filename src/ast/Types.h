/**
 * @file Types.h
 * @brief Sistema de tipos para el lenguaje Aether
 * 
 * Define la jerarquía completa de tipos del lenguaje,
 * incluyendo tipos primitivos, compuestos, genéricos y referencias.
 */

#ifndef AETHER_TYPES_H
#define AETHER_TYPES_H

#include <string>
#include <vector>
#include <memory>
#include <optional>
#include <unordered_map>
#include <set>
#include <sstream>

namespace aether {

// ============================================
// ENUMS DE TIPOS
// ============================================

/**
 * @enum TypeKind
 * @brief Categoría fundamental de un tipo
 */
enum class TypeKind {
    // Tipos primitivos
    Void,
    Bool,
    Char,
    Int8, Int16, Int32, Int64, IntSize,
    UInt8, UInt16, UInt32, UInt64, UIntSize,
    Float32, Float64,
    String,
    Type, // El tipo de los tipos (metatipo)
    
    // Tipos compuestos
    Tuple,
    Array,
    Function,
    Struct,
    Enum,
    Union,
    
    // Tipos de referencia
    Reference,
    Pointer,
    
    // Tipos especiales
    Option,      // Optional<T>
    Result,      // Result<T, E>
    Never,       // Tipo de divergencia (!)
    
    // Tipos genéricos
    Generic,
    
    // Alias de tipo
    Alias,
    
    // Tipos incompletos
    Unresolved,
    Error
};

/**
 * @enum Visibility
 * @brief Visibilidad de miembros y declaraciones
 */
enum class Visibility {
    Private,      // Solo visible en el módulo actual
    Public,       // Visible públicamente
    Crate,        // Visible dentro del crate
    Super,        // Visible en el módulo padre
};

/**
 * @enum Mutability
 * @brief Mutabilidad de referencias y variables
 */
enum class Mutability {
    Immutable,
    Mutable
};

/**
 * @enum BinaryOp
 * @brief Operadores binarios soportados
 */
enum class BinaryOp {
    // Aritméticos
    Add,      // +
    Sub,      // -
    Mul,      // *
    Div,      // /
    Mod,      // %
    Pow,      // **
    
    // Bitwise
    BitAnd,   // &
    BitOr,    // |
    BitXor,   // ^
    Shl,      // <<
    Shr,      // >>
    
    // Lógicos
    And,      // &&
    Or,       // ||
    
    // Comparación
    Eq,       // ==
    Ne,       // !=
    Lt,       // <
    Le,       // <=
   Gt,       // >
    Ge,       // >=
    
    // Asignación
    Assign,
    AddAssign,
    SubAssign,
    MulAssign,
    DivAssign,
    ModAssign,
    AndAssign,
    OrAssign,
    XorAssign,
    ShlAssign,
    ShrAssign,
};

/**
 * @enum UnaryOp
 * @brief Operadores unarios soportados
 */
enum class UnaryOp {
    Neg,      // -expr
    Not,      // !expr
    Deref,    // *expr
    Ref,      // &expr
    RefMut,   // &mut expr
};

/**
 * @enum ConversionKind
 * @brief Tipos de conversión entre tipos
 */
enum class ConversionKind {
    None,           // No hay conversión posible
    Identity,       // Mismo tipo
    Implicit,       // Conversión implícita segura
    Explicit,       // Conversión explícita (cast)
    Invalid         // Conversión inválida
};

// ============================================
// CLASE BASE TYPE
// ============================================

/**
 * @class Type
 * @brief Clase base abstracta para todos los tipos
 * 
 * Representa la interfaz común para todas las categorías
 * de tipos en el sistema de tipos de Aether.
 */
class Type {
public:
    /**
     * @brief Constructor
     */
    explicit Type(TypeKind kind) 
        : kind_(kind), size_(-1), alignment_(-1) {}
    
    /**
     * @brief Constructor virtual para herencia
     */
    virtual ~Type() = default;
    
    // === Métodos de consulta ===
    
    /**
     * @brief Obtiene la categoría del tipo
     */
    TypeKind getKind() const { return kind_; }
    
    /**
     * @brief Verifica si el tipo es de una categoría específica
     */
    bool is(TypeKind kind) const { return kind_ == kind; }
    
    /**
     * @brief Obtiene el nombre del tipo
     */
    virtual std::string getName() const = 0;
    
    /**
     * @brief Obtiene el nombre completo (con namespace)
     */
    virtual std::string getQualifiedName() const;
    
    /**
     * @brief Verifica si es un tipo primitivo
     */
    bool isPrimitive() const;
    
    /**
     * @brief Verifica si es un tipo numérico
     */
    bool isNumeric() const;
    
    /**
     * @brief Verifica si es un tipo entero
     */
    bool isInteger() const;
    
    /**
     * @brief Verifica si es un tipo de punto flotante
     */
    bool isFloat() const;
    
    /**
     * @brief Verifica si es un tipo booleano
     */
    bool isBoolean() const;
    
    /**
     * @brief Verifica si es un tipo compuesto
     */
    bool isCompound() const;
    
    /**
     * @brief Verifica si es un tipo escalar
     */
    bool isScalar() const;
    
    /**
     * @brief Verifica si es un tipo referencial
     */
    bool isReference() const;
    
    /**
     * @brief Verifica si es un tipo puntero
     */
    bool isPointer() const;
    
    /**
     * @brief Verifica si es un tipo función
     */
    bool isFunction() const;
    
    /**
     * @brief Verifica si es un tipo estructurado (struct/enum)
     */
    bool isAggregate() const;
    
    /**
     * @brief Verifica si es un tipo colección (array/tuple)
     */
    bool isCollection() const;
    
    /**
     * @brief Verifica si es un tipo opcional
     */
    bool isOption() const;
    
    /**
     * @brief Verifica si es un tipo resultado
     */
    bool isResult() const;
    
    /**
     * @brief Verifica si es el tipo never (!)
     */
    bool isNever() const;
    
    /**
     * @brief Verifica si es un tipo válido
     */
    bool isValid() const { return !is(TypeKind::Error) && !is(TypeKind::Unresolved); }
    
    /**
     * @brief Verifica si es un tipo de error
     */
    bool isError() const { return is(TypeKind::Error); }
    
    // === Metadatos ===
    
    /**
     * @brief Obtiene el tamaño en bytes (-1 si desconocido)
     */
    int64_t getSize() const { return size_; }
    
    /**
     * @brief Establece el tamaño
     */
    void setSize(int64_t size) { size_ = size; }
    
    /**
     * @brief Obtiene la alineación en bytes (-1 si desconocida)
     */
    int64_t getAlignment() const { return alignment_; }
    
    /**
     * @brief Establece la alineación
     */
    void setAlignment(int64_t align) { alignment_ = align; }
    
    // === Operaciones de tipos ===
    
    /**
     * @brief Verifica igualdad de tipos
     */
    virtual bool isEqual(const Type* other) const;
    
    /**
     * @brief Verifica si este tipo es subtipo de otro
     */
    virtual bool isSubtypeOf(const Type* other) const;
    
    /**
     * @brief Obtiene el tipo común para coercisión
     */
    virtual Type* getCommonType(Type* other) const;
    
    /**
     * @brief Determina el tipo de conversión necesaria
     */
    virtual ConversionKind getConversionTo(Type* target) const;
    
    // === Utilidades ===
    
    /**
     * @brief Imprime el tipo para debugging
     */
    virtual void dump(std::ostream& os, int indent = 0) const;
    
    /**
     * @brief Convierte a string
     */
    std::string toString() const { return getName(); }
    
    /**
     * @brief Obtiene el nombre del TypeKind
     */
    static std::string getKindName(TypeKind kind);
    
protected:
    TypeKind kind_;
    int64_t size_;
    int64_t alignment_;
};

// ============================================
// TIPOS PRIMITIVOS
// ============================================

/**
 * @class PrimitiveType
 * @brief Tipos primitivos del lenguaje
 */
class PrimitiveType : public Type {
public:
    explicit PrimitiveType(TypeKind kind) : Type(kind) {
        // Calcular tamaño y alineación por defecto
        calculateSizeAndAlignment();
    }
    
    std::string getName() const override;
    bool isEqual(const Type* other) const override;
    
private:
    void calculateSizeAndAlignment();
};

// ============================================
// TIPOS COMPUESTOS
// ============================================

/**
 * @class TupleType
 * @brief Tipo tupla (T1, T2, T3, ...)
 */
class TupleType : public Type {
public:
    explicit TupleType(std::vector<Type*> elements)
        : Type(TypeKind::Tuple), elements_(std::move(elements)) {
        setSize(-1); // Calculado en tiempo de compilación
        setAlignment(-1);
    }
    
    const std::vector<Type*>& getElements() const { return elements_; }
    Type* getElement(size_t index) const { 
        return index < elements_.size() ? elements_[index] : nullptr; 
    }
    size_t getElementCount() const { return elements_.size(); }
    
    std::string getName() const override;
    bool isEqual(const Type* other) const override;
    
private:
    std::vector<Type*> elements_;
};

/**
 * @class ArrayType
 * @brief Tipo array [T; N]
 */
class ArrayType : public Type {
public:
    ArrayType(Type* elementType, uint64_t size)
        : Type(TypeKind::Array), elementType_(elementType), size_(size) {
        setSize(elementType->getSize() * static_cast<int64_t>(size));
        setAlignment(elementType->getAlignment());
    }
    
    Type* getElementType() const { return elementType_; }
    uint64_t getSize() const { return size_; }
    
    std::string getName() const override;
    bool isEqual(const Type* other) const override;
    
private:
    Type* elementType_;
    uint64_t size_;
};

/**
 * @class FunctionType
 * @brief Tipo función (T1, T2, ...) -> T
 */
class FunctionType : public Type {
public:
    FunctionType(std::vector<Type*> paramTypes, Type* returnType, bool isVarArg = false)
        : Type(TypeKind::Function), paramTypes_(std::move(paramTypes)), 
          returnType_(returnType), isVarArg_(isVarArg) {}
    
    const std::vector<Type*>& getParamTypes() const { return paramTypes_; }
    Type* getReturnType() const { return returnType_; }
    bool isVarArg() const { return isVarArg_; }
    
    std::string getName() const override;
    bool isEqual(const Type* other) const override;
    
private:
    std::vector<Type*> paramTypes_;
    Type* returnType_;
    bool isVarArg_;
};

// ============================================
// TIPOS ESTRUCTURADOS
// ============================================

/**
 * @class StructField
 * @brief Campo de un struct
 */
struct StructField {
    std::string name;
    Type* type;
    Visibility visibility;
    size_t offset;
    
    StructField(std::string n, Type* t, Visibility v = Visibility::Public)
        : name(std::move(n)), type(t), visibility(v), offset(0) {}
};

/**
 * @class StructType
 * @brief Tipo struct
 */
class StructType : public Type {
public:
    explicit StructType(const std::string& name)
        : Type(TypeKind::Struct), name_(name), fields_() {}
    
    const std::string& getName() const { return name_; }
    void setName(const std::string& n) { name_ = n; }
    
    const std::vector<StructField>& getFields() const { return fields_; }
    std::vector<StructField>& getFields() { return fields_; }
    
    void addField(const StructField& field) { 
        fields_.push_back(field);
        updateLayout();
    }
    
    StructField* getField(const std::string& name);
    size_t getFieldIndex(const std::string& name) const;
    
    std::string getName() const override;
    bool isEqual(const Type* other) const override;
    
private:
    std::string name_;
    std::vector<StructField> fields_;
    
    void updateLayout();
};

/**
 * @class EnumVariant
 * @brief Variante de un enum
 */
struct EnumVariant {
    std::string name;
    std::vector<Type*> associatedTypes;
    int64_t discriminant;
    
    EnumVariant(std::string n, std::vector<Type*> types = {}, int64_t disc = 0)
        : name(std::move(n)), associatedTypes(std::move(types)), discriminant(disc) {}
};

/**
 * @class EnumType
 * @brief Tipo enum (Algebraic Data Type)
 */
class EnumType : public Type {
public:
    explicit EnumType(const std::string& name)
        : Type(TypeKind::Enum), name_(name), variants_() {}
    
    const std::string& getName() const { return name_; }
    
    const std::vector<EnumVariant>& getVariants() const { return variants_; }
    std::vector<EnumVariant>& getVariants() { return variants_; }
    
    void addVariant(const EnumVariant& variant) { variants_.push_back(variant); }
    
    EnumVariant* getVariant(const std::string& name);
    int64_t getVariantDiscriminant(const std::string& name) const;
    
    std::string getName() const override;
    bool isEqual(const Type* other) const override;
    
private:
    std::string name_;
    std::vector<EnumVariant> variants_;
};

// ============================================
// TIPOS DE REFERENCIA
// ============================================

/**
 * @class ReferenceType
 * @brief Tipo referencia &T o &mut T
 */
class ReferenceType : public Type {
public:
    ReferenceType(Type* referencedType, Mutability mutability = Mutability::Immutable)
        : Type(TypeKind::Reference), referencedType_(referencedType), 
          mutability_(mutability) {
        setSize(sizeof(void*));
        setAlignment(sizeof(void*));
    }
    
    Type* getReferencedType() const { return referencedType_; }
    Mutability getMutability() const { return mutability_; }
    bool isMutable() const { return mutability_ == Mutability::Mutable; }
    
    std::string getName() const override;
    bool isEqual(const Type* other) const override;
    
private:
    Type* referencedType_;
    Mutability mutability_;
};

/**
 * @class PointerType
 * @brief Tipo puntero *T o *mut T
 */
class PointerType : public Type {
public:
    PointerType(Type* pointedType, Mutability mutability = Mutability::Immutable)
        : Type(TypeKind::Pointer), pointedType_(pointedType),
          mutability_(mutability) {
        setSize(sizeof(void*));
        setAlignment(sizeof(void*));
    }
    
    Type* getPointedType() const { return pointedType_; }
    Mutability getMutability() const { return mutability_; }
    bool isMutable() const { return mutability_ == Mutability::Mutable; }
    
    std::string getName() const override;
    bool isEqual(const Type* other) const override;
    
private:
    Type* pointedType_;
    Mutability mutability_;
};

// ============================================
// TIPOS ESPECIALES
// ============================================

/**
 * @class OptionType
 * @brief Tipo Option<T>
 */
class OptionType : public Type {
public:
    explicit OptionType(Type* innerType)
        : Type(TypeKind::Option), innerType_(innerType) {}
    
    Type* getInnerType() const { return innerType_; }
    
    std::string getName() const override;
    bool isEqual(const Type* other) const override;
    
private:
    Type* innerType_;
};

/**
 * @class ResultType
 * @brief Tipo Result<T, E>
 */
class ResultType : public Type {
public:
    ResultType(Type* okType, Type* errorType)
        : Type(TypeKind::Result), okType_(okType), errorType_(errorType) {}
    
    Type* getOkType() const { return okType_; }
    Type* getErrorType() const { return errorType_; }
    
    std::string getName() const override;
    bool isEqual(const Type* other) const override;
    
private:
    Type* okType_;
    Type* errorType_;
};

// ============================================
// TIPOS GENÉRICOS Y ALIAS
// ============================================

/**
 * @class GenericType
 * @brief Tipo genérico no instanciado (T, U, etc.)
 */
class GenericType : public Type {
public:
    explicit GenericType(const std::string& name)
        : Type(TypeKind::Generic), name_(name) {}
    
    const std::string& getName() const { return name_; }
    
    std::string getName() const override;
    bool isEqual(const Type* other) const override;
    
private:
    std::string name_;
};

/**
 * @class TypeAlias
 * @brief Alias de tipo
 */
class TypeAlias : public Type {
public:
    TypeAlias(const std::string& name, Type* underlyingType)
        : Type(TypeKind::Alias), name_(name), underlyingType_(underlyingType) {}
    
    const std::string& getName() const { return name_; }
    Type* getUnderlyingType() const { return underlyingType_; }
    
    std::string getName() const override;
    bool isEqual(const Type* other) const override;
    
private:
    std::string name_;
    Type* underlyingType_;
};

// ============================================
// TIPOS DE ERROR
// ============================================

/**
 * @class ErrorType
 * @brief Tipo de error (usado para recuperación)
 */
class ErrorType : public Type {
public:
    ErrorType() : Type(TypeKind::Error) {}
    
    std::string getName() const override;
    bool isEqual(const Type* other) const override;
};

// ============================================
// TIPOS NO RESUELTOS
// ============================================

/**
 * @class UnresolvedType
 * @brief Tipo que aún no ha sido resuelto
 */
class UnresolvedType : public Type {
public:
    explicit UnresolvedType(const std::string& name)
        : Type(TypeKind::Unresolved), name_(name) {}
    
    const std::string& getName() const { return name_; }
    
    std::string getName() const override;
    bool isEqual(const Type* other) const override;
    
private:
    std::string name_;
};

// ============================================
// CLASE PATH (para referencias de tipos)
// ============================================

/**
 * @class Path
 * @brief Representa un path de tipo o valor
 * 
 * Soporta paths simples (Foo) y qualificados (module::Foo::Bar)
 */
class Path {
public:
    Path() : segments_() {}
    
    explicit Path(const std::string& segment) {
        segments_.push_back(segment);
    }
    
    static Path fromString(const std::string& path);
    
    void addSegment(const std::string& segment) {
        segments_.push_back(segment);
    }
    
    const std::vector<std::string>& getSegments() const { return segments_; }
    std::vector<std::string>& getSegments() { return segments_; }
    
    const std::string& getLastSegment() const {
        return segments_.back();
    }
    
    bool isSimple() const { return segments_.size() == 1; }
    bool isQualified() const { return segments_.size() > 1; }
    
    std::string toString() const;
    std::string toString(const std::string& separator) const;
    
    Path operator+(const Path& other) const;
    
    bool operator==(const Path& other) const;
    bool operator!=(const Path& other) const { return !(*this == other); }
    
private:
    std::vector<std::string> segments_;
};

// ============================================
// CLASE TYPE CONTEXT (Contexto de tipos global)
// ============================================

/**
 * @class TypeContext
 * @brief Contexto global de tipos
 * 
 * Mantiene un registro de todos los tipos definidos
 * y proporciona funciones para crear y buscar tipos.
 */
class TypeContext {
public:
    TypeContext();
    ~TypeContext();
    
    // === Tipos primitivos ===
    PrimitiveType* getVoidType();
    PrimitiveType* getBoolType();
    PrimitiveType* getCharType();
    
    PrimitiveType* getInt8Type();
    PrimitiveType* getInt16Type();
    PrimitiveType* getInt32Type();
    PrimitiveType* getInt64Type();
    PrimitiveType* getIntSizeType();
    
    PrimitiveType* getUInt8Type();
    PrimitiveType* getUInt16Type();
    PrimitiveType* getUInt32Type();
    PrimitiveType* getUInt64Type();
    PrimitiveType* getUIntSizeType();
    
    PrimitiveType* getFloat32Type();
    PrimitiveType* getFloat64Type();
    
    PrimitiveType* getStringType();
    PrimitiveType* getTypeType();
    
    // === Tipos compuestos ===
    TupleType* getTupleType(const std::vector<Type*>& elements);
    ArrayType* getArrayType(Type* elementType, uint64_t size);
    FunctionType* getFunctionType(const std::vector<Type*>& params, Type* returnType, bool isVarArg = false);
    
    // === Tipos de referencia ===
    ReferenceType* getReferenceType(Type* type, Mutability mut = Mutability::Immutable);
    PointerType* getPointerType(Type* type, Mutability mut = Mutability::Immutable);
    
    // === Tipos especiales ===
    OptionType* getOptionType(Type* inner);
    ResultType* getResultType(Type* ok, Type* error);
    
    // === Tipos genéricos ===
    GenericType* getGenericType(const std::string& name);
    
    // === Alias de tipos ===
    TypeAlias* getTypeAlias(const std::string& name, Type* underlying);
    
    // === Búsqueda ===
    Type* lookupType(const std::string& name);
    Type* lookupType(const Path& path);
    
    // === Registro de tipos compuestos ===
    StructType* registerStruct(const std::string& name);
    EnumType* registerEnum(const std::string& name);
    
    // === Utilidades ===
    ErrorType* getErrorType();
    PrimitiveType* getNeverType();
    
    /**
     * @brief Imprime el contexto de tipos (debugging)
     */
    void dump(std::ostream& os) const;
    
private:
    // Tipos primitivos cacheados
    PrimitiveType* voidType_ = nullptr;
    PrimitiveType* boolType_ = nullptr;
    PrimitiveType* charType_ = nullptr;
    PrimitiveType* int8Type_ = nullptr;
    PrimitiveType* int16Type_ = nullptr;
    PrimitiveType* int32Type_ = nullptr;
    PrimitiveType* int64Type_ = nullptr;
    PrimitiveType* intSizeType_ = nullptr;
    PrimitiveType* uint8Type_ = nullptr;
    PrimitiveType* uint16Type_ = nullptr;
    PrimitiveType* uint32Type_ = nullptr;
    PrimitiveType* uint64Type_ = nullptr;
    PrimitiveType* uintSizeType_ = nullptr;
    PrimitiveType* float32Type_ = nullptr;
    PrimitiveType* float64Type_ = nullptr;
    PrimitiveType* stringType_ = nullptr;
    PrimitiveType* typeType_ = nullptr;
    PrimitiveType* neverType_ = nullptr;
    
    // Tipos especiales cacheados
    ErrorType* errorType_ = nullptr;
    
    // Mapas de tipos
    std::unordered_map<std::string, TupleType*> tupleTypes_;
    std::unordered_map<std::string, ArrayType*> arrayTypes_;
    std::unordered_map<std::string, FunctionType*> functionTypes_;
    std::unordered_map<std::string, ReferenceType*> referenceTypes_;
    std::unordered_map<std::string, PointerType*> pointerTypes_;
    std::unordered_map<std::string, OptionType*> optionTypes_;
    std::unordered_map<std::string, ResultType*> resultTypes_;
    std::unordered_map<std::string, GenericType*> genericTypes_;
    std::unordered_map<std::string, TypeAlias*> typeAliases_;
    std::unordered_map<std::string, StructType*> structs_;
    std::unordered_map<std::string, EnumType*> enums_;
    
    // Para lookup por path
    std::unordered_map<std::string, Type*> allTypes_;
    
    void initializePrimitives();
};

// ============================================
// SMART POINTERS Y UTILIDADES
// ============================================

using TypePtr = std::unique_ptr<Type>;
using TypeRef = Type*;

// Operadores de stream
inline std::ostream& operator<<(std::ostream& os, const Type& type) {
    os << type.getName();
    return os;
}

inline std::ostream& operator<<(std::ostream& os, const Path& path) {
    os << path.toString();
    return os;
}

} // namespace aether

#endif // AETHER_TYPES_H
