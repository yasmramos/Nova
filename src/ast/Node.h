/**
 * @file Node.h
 * @brief Clase base para todos los nodos del AST (Abstract Syntax Tree)
 * 
 * Define la estructura fundamental que comparten todos los nodos
 * del árbol de sintaxis abstracta del lenguaje Nova.
 */

#ifndef NOVA_NODE_H
#define NOVA_NODE_H

#include <string>
#include <vector>
#include <memory>
#include <optional>
#include "SourceLocation.h"
#include "Types.h"

namespace nova {

/**
 * @enum NodeKind
 * @brief Tipo de nodo en el AST
 * 
 * Cada tipo de nodo en el árbol de sintaxis abstracta
 * tiene un identificador único para facilitar el visitor pattern
 * y el análisis semántico.
 */
enum class NodeKind {
    // Literales
    Literal,
    IntegerLiteral,
    FloatLiteral,
    BooleanLiteral,
    CharLiteral,
    StringLiteral,
    NullLiteral,
    
    // Expresiones
    Identifier,
    BinaryExpr,
    UnaryExpr,
    CallExpr,
    IndexExpr,
    FieldExpr,
    TupleExpr,
    ArrayExpr,
    StructExpr,
    CastExpr,
    
    // Expresiones de control de flujo
    IfExpr,
    MatchExpr,
    MatchArm,
    BlockExpr,
    
    // Lambdas y funciones
    LambdaExpr,
    FunctionRef,
    
    // Rangos
    RangeExpr,
    
    // Statements
    ExprStmt,
    DeclStmt,
    AssignStmt,
    ReturnStmt,
    BreakStmt,
    ContinueStmt,
    
    // Declaraciones de variables
    LetDecl,
    ConstDecl,
    
    // Declaraciones de funciones
    FunctionDecl,
    FunctionParam,
    
    // Tipos de datos
    StructDecl,
    StructField,
    EnumDecl,
    EnumVariant,
    TraitDecl,
    TraitMethod,
    ImplDecl,
    TypeAlias,
    
    // Uso de módulos
    ImportDecl,
    UseDecl,
    
    // Estructuras de control
    WhileStmt,
    ForStmt,
    LoopStmt,
    
    // Nodo raíz
    Module,
    
    // Utilidades
    TypeRef,
    Path,
};

/**
 * @class Node
 * @brief Clase base abstracta para todos los nodos del AST
 * 
 * Proporciona la funcionalidad común a todos los nodos,
 * incluyendo ubicación en código fuente y tipo asociado.
 */
class Node {
public:
    /**
     * @brief Constructor con ubicación
     */
    explicit Node(NodeKind kind, SourceLocation loc = SourceLocation())
        : kind_(kind), location_(std::move(loc)), type_(nullptr) {}
    
    /**
     * @brief Constructor virtual para permitir herencia
     */
    virtual ~Node() = default;
    
    // === Métodos de consulta ===
    
    /**
     * @brief Obtiene el tipo de nodo
     */
    NodeKind getKind() const { return kind_; }
    
    /**
     * @brief Verifica si el nodo es de un tipo específico
     */
    bool is(NodeKind kind) const { return kind_ == kind; }
    
    /**
     * @brief Obtiene la ubicación en el código fuente
     */
    const SourceLocation& getLocation() const { return location_; }
    
    /**
     * @brief Obtiene la ubicación de fin del nodo
     */
    const SourceLocation& getEndLocation() const { return endLocation_; }
    
    /**
     * @brief Establece la ubicación de fin
     */
    void setEndLocation(SourceLocation loc) { endLocation_ = std::move(loc); }
    
    /**
     * @brief Verifica si el nodo tiene tipo asociado
     */
    bool hasType() const { return type_ != nullptr; }
    
    /**
     * @brief Obtiene el tipo asociado al nodo
     */
    Type* getType() const { return type_; }
    
    /**
     * @brief Establece el tipo asociado al nodo
     */
    void setType(Type* ty) { type_ = ty; }
    
    /**
     * @brief Establece el tipo asociado (smart pointer)
     */
    void setType(std::shared_ptr<Type> ty) { typeRef_ = std::move(ty); }
    
    // === Métodos de introspection ===
    
    /**
     * @brief Obtiene el nombre del tipo de nodo
     */
    virtual std::string getNodeName() const {
        return getNodeKindName(kind_);
    }
    
    /**
     * @brief Obtiene una representación en string del nodo
     */
    virtual std::string toString() const {
        return getNodeName() + " at " + location_.toString();
    }
    
    /**
     * @brief Imprime el nodo para debugging
     */
    virtual void dump(int indent = 0) const {
        std::string pad(indent * 2, ' ');
        std::cout << pad << toString() << std::endl;
    }
    
    // === Visitor Pattern ===
    
    /**
     * @brief Acepta un visitor (double dispatch)
     */
    template<typename Visitor>
    auto accept(Visitor& visitor) -> decltype(visitor.visit(*this)) {
        return visitor.visit(*this);
    }
    
    /**
     * @brief Acepta un visitor constante
     */
    template<typename Visitor>
    auto accept(Visitor& visitor) const -> decltype(visitor.visit(*this)) {
        return visitor.visit(*this);
    }
    
    // === Utilidades ===
    
    /**
     * @brief Convierte NodeKind a string
     */
    static std::string getNodeKindName(NodeKind kind);
    
    /**
     * @brief Verifica si es un literal
     */
    bool isLiteral() const;
    
    /**
     * @brief Verifica si es una expresión
     */
    bool isExpression() const;
    
    /**
     * @brief Verifica si es una declaración
     */
    bool isDeclaration() const;
    
    /**
     * @brief Verifica si es un statement
     */
    bool isStatement() const;
    
protected:
    NodeKind kind_;
    SourceLocation location_;
    SourceLocation endLocation_;
    Type* type_;
    std::shared_ptr<Type> typeRef_;
};

/**
 * @class Statement
 * @brief Clase base para statements
 */
class Statement : public Node {
public:
    explicit Statement(NodeKind kind, SourceLocation loc = SourceLocation())
        : Node(kind, std::move(loc)) {}
};

/**
 * @class Expression
 * @brief Clase base para expresiones
 */
class Expression : public Node {
public:
    explicit Expression(NodeKind kind, SourceLocation loc = SourceLocation())
        : Node(kind, std::move(loc)), isLValue_(false) {}
    
    /**
     * @brief Verifica si es un lvalue
     */
    bool isLValue() const { return isLValue_; }
    
    /**
     * @brief Establece si es un lvalue
     */
    void setLValue(bool val = true) { isLValue_ = val; }
    
private:
    bool isLValue_;
};

/**
 * @class Declaration
 * @brief Clase base para declaraciones
 */
class Declaration : public Node {
public:
    explicit Declaration(NodeKind kind, SourceLocation loc = SourceLocation())
        : Node(kind, std::move(loc)), visibility_(Visibility::Private) {}
    
    /**
     * @brief Obtiene la visibilidad
     */
    Visibility getVisibility() const { return visibility_; }
    
    /**
     * @brief Establece la visibilidad
     */
    void setVisibility(Visibility v) { visibility_ = v; }
    
private:
    Visibility visibility_;
};

// ============================================
// NODOS DE LITERALES
// ============================================

/**
 * @class LiteralNode
 * @brief Nodo base para literales
 */
class LiteralNode : public Expression {
public:
    explicit LiteralNode(NodeKind kind, SourceLocation loc = SourceLocation())
        : Expression(kind, std::move(loc)) {}
};

/**
 * @class IntegerLiteralNode
 * @brief Literal entero (42, 0xFF, 0b1010, etc.)
 */
class IntegerLiteralNode : public LiteralNode {
public:
    explicit IntegerLiteralNode(SourceLocation loc = SourceLocation())
        : LiteralNode(NodeKind::IntegerLiteral, std::move(loc)), value_(0), suffix_() {}
    
    void setValue(uint64_t val) { value_ = val; }
    uint64_t getValue() const { return value_; }
    
    void setSuffix(const std::string& s) { suffix_ = s; }
    const std::string& getSuffix() const { return suffix_; }
    
    std::string toString() const override;
    
private:
    uint64_t value_;
    std::string suffix_;
};

/**
 * @class FloatLiteralNode
 * @brief Literal de punto flotante (3.14, 1e10, etc.)
 */
class FloatLiteralNode : public LiteralNode {
public:
    explicit FloatLiteralNode(SourceLocation loc = SourceLocation())
        : LiteralNode(NodeKind::FloatLiteral, std::move(loc)), value_(0.0), suffix_() {}
    
    void setValue(long double val) { value_ = val; }
    long double getValue() const { return value_; }
    
    void setSuffix(const std::string& s) { suffix_ = s; }
    const std::string& getSuffix() const { return suffix_; }
    
    std::string toString() const override;
    
private:
    long double value_;
    std::string suffix_;
};

/**
 * @class BooleanLiteralNode
 * @brief Literal booleano (true, false)
 */
class BooleanLiteralNode : public LiteralNode {
public:
    explicit BooleanLiteralNode(bool value, SourceLocation loc = SourceLocation())
        : LiteralNode(NodeKind::BooleanLiteral, std::move(loc)), value_(value) {}
    
    bool getValue() const { return value_; }
    std::string toString() const override;
    
private:
    bool value_;
};

/**
 * @class StringLiteralNode
 * @brief Literal de string ("hello world")
 */
class StringLiteralNode : public LiteralNode {
public:
    explicit StringLiteralNode(SourceLocation loc = SourceLocation())
        : LiteralNode(NodeKind::StringLiteral, std::move(loc)) {}
    
    void setValue(const std::string& val) { value_ = val; }
    const std::string& getValue() const { return value_; }
    
    std::string toString() const override;
    
private:
    std::string value_;
};

/**
 * @class CharLiteralNode
 * @brief Literal de carácter ('a', '\n')
 */
class CharLiteralNode : public LiteralNode {
public:
    explicit CharLiteralNode(SourceLocation loc = SourceLocation())
        : LiteralNode(NodeKind::CharLiteral, std::move(loc)), value_() {}
    
    void setValue(char val) { value_ = val; }
    char getValue() const { return value_; }
    
    std::string toString() const override;
    
private:
    char value_;
};

/**
 * @class NullLiteralNode
 * @brief Literal null
 */
class NullLiteralNode : public LiteralNode {
public:
    explicit NullLiteralNode(SourceLocation loc = SourceLocation())
        : LiteralNode(NodeKind::NullLiteral, std::move(loc)) {}
    
    std::string toString() const override;
};

// ============================================
// NODOS DE EXPRESIONES
// ============================================

/**
 * @class IdentifierNode
 * @brief Identificador (variable, función, tipo, etc.)
 */
class IdentifierNode : public Expression {
public:
    explicit IdentifierNode(const std::string& name, SourceLocation loc = SourceLocation())
        : Expression(NodeKind::Identifier, std::move(loc)), name_(name), symbol_(nullptr) {}
    
    const std::string& getName() const { return name_; }
    void setName(const std::string& n) { name_ = n; }
    
    std::string toString() const override;
    
    // Para resolución de símbolos
    void* getSymbol() const { return symbol_; }
    void setSymbol(void* sym) { symbol_ = sym; }
    
private:
    std::string name_;
    void* symbol_;
};

/**
 * @class BinaryExprNode
 * @brief Expresión binaria (a + b, x && y, etc.)
 */
class BinaryExprNode : public Expression {
public:
    explicit BinaryExprNode(SourceLocation loc = SourceLocation())
        : Expression(NodeKind::BinaryExpr, std::move(loc)), op_(), left_(), right_() {}
    
    BinaryOp getOperator() const { return op_; }
    void setOperator(BinaryOp op) { op_ = op; }
    
    Expression* getLeft() const { return left_.get(); }
    void setLeft(std::unique_ptr<Expression> expr) { left_ = std::move(expr); }
    
    Expression* getRight() const { return right_.get(); }
    void setRight(std::unique_ptr<Expression> expr) { right_ = std::move(expr); }
    
    std::string toString() const override;
    
private:
    BinaryOp op_;
    std::unique_ptr<Expression> left_;
    std::unique_ptr<Expression> right_;
};

/**
 * @class UnaryExprNode
 * @brief Expresión unaria (-x, !flag, *ptr, etc.)
 */
class UnaryExprNode : public Expression {
public:
    explicit UnaryExprNode(SourceLocation loc = SourceLocation())
        : Expression(NodeKind::UnaryExpr, std::move(loc)), op_(), operand_() {}
    
    UnaryOp getOperator() const { return op_; }
    void setOperator(UnaryOp op) { op_ = op; }
    
    Expression* getOperand() const { return operand_.get(); }
    void setOperand(std::unique_ptr<Expression> expr) { operand_ = std::move(expr); }
    
    std::string toString() const override;
    
private:
    UnaryOp op_;
    std::unique_ptr<Expression> operand_;
};

/**
 * @class CallExprNode
 * @brief Llamada a función (foo(a, b, c))
 */
class CallExprNode : public Expression {
public:
    explicit CallExprNode(SourceLocation loc = SourceLocation())
        : Expression(NodeKind::CallExpr, std::move(loc)), function_(), arguments_() {}
    
    Expression* getFunction() const { return function_.get(); }
    void setFunction(std::unique_ptr<Expression> func) { function_ = std::move(func); }
    
    const std::vector<std::unique_ptr<Expression>>& getArguments() const { return arguments_; }
    std::vector<std::unique_ptr<Expression>>& getArguments() { return arguments_; }
    
    void addArgument(std::unique_ptr<Expression> arg) { arguments_.push_back(std::move(arg)); }
    
    std::string toString() const override;
    
private:
    std::unique_ptr<Expression> function_;
    std::vector<std::unique_ptr<Expression>> arguments_;
};

/**
 * @class IfExprNode
 * @brief Expresión if (ternario: if cond { a } else { b })
 */
class IfExprNode : public Expression {
public:
    explicit IfExprNode(SourceLocation loc = SourceLocation())
        : Expression(NodeKind::IfExpr, std::move(loc)), condition_(), thenBranch_(), elseBranch_() {}
    
    Expression* getCondition() const { return condition_.get(); }
    void setCondition(std::unique_ptr<Expression> cond) { condition_ = std::move(cond); }
    
    Node* getThenBranch() const { return thenBranch_.get(); }
    void setThenBranch(std::unique_ptr<Node> branch) { thenBranch_ = std::move(branch); }
    
    Node* getElseBranch() const { return elseBranch_.get(); }
    void setElseBranch(std::unique_ptr<Node> branch) { elseBranch_ = std::move(branch); }
    
    std::string toString() const override;
    
private:
    std::unique_ptr<Expression> condition_;
    std::unique_ptr<Node> thenBranch_;
    std::unique_ptr<Node> elseBranch_;
};

// ============================================
// NODOS DE DECLARACIONES
// ============================================

/**
 * @class LetDeclNode
 * @brief Declaración de variable (let x: i32 = 42)
 */
class LetDeclNode : public Declaration {
public:
    explicit LetDeclNode(SourceLocation loc = SourceLocation())
        : Declaration(NodeKind::LetDecl, std::move(loc)), isMutable_(false), 
          pattern_(), initializer_(), type_() {}
    
    bool isMutable() const { return isMutable_; }
    void setMutable(bool val = true) { isMutable_ = val; }
    
    const std::string& getName() const { return name_; }
    void setName(const std::string& n) { name_ = n; }
    
    Type* getDeclaredType() const { return type_; }
    void setDeclaredType(Type* ty) { type_ = ty; }
    
    Expression* getInitializer() const { return initializer_.get(); }
    void setInitializer(std::unique_ptr<Expression> init) { initializer_ = std::move(init); }
    
    std::string toString() const override;
    
private:
    bool isMutable_;
    std::string name_;
    std::unique_ptr<Expression> initializer_;
    Type* type_;
};

/**
 * @class FunctionDeclNode
 * @brief Declaración de función
 */
class FunctionDeclNode : public Declaration {
public:
    explicit FunctionDeclNode(SourceLocation loc = SourceLocation())
        : Declaration(NodeKind::FunctionDecl, std::move(loc)), name_(), 
          parameters_(), returnType_(), body_(), isAsync_(false) {}
    
    const std::string& getName() const { return name_; }
    void setName(const std::string& n) { name_ = n; }
    
    bool isAsync() const { return isAsync_; }
    void setAsync(bool val = true) { isAsync_ = val; }
    
    const std::vector<std::unique_ptr<Node>>& getParameters() const { return parameters_; }
    std::vector<std::unique_ptr<Node>>& getParameters() { return parameters_; }
    
    void addParameter(std::unique_ptr<Node> param) { parameters_.push_back(std::move(param)); }
    
    Type* getReturnType() const { return returnType_; }
    void setReturnType(Type* ty) { returnType_ = ty; }
    
    Node* getBody() const { return body_.get(); }
    void setBody(std::unique_ptr<Node> b) { body_ = std::move(b); }
    
    std::string toString() const override;
    
private:
    std::string name_;
    std::vector<std::unique_ptr<Node>> parameters_;
    Type* returnType_;
    std::unique_ptr<Node> body_;
    bool isAsync_;
};

// ============================================
// NODOS DE TIPOS
// ============================================

/**
 * @class TypeRefNode
 * @brief Referencia a un tipo (i32, MyStruct, Option<T>, etc.)
 */
class TypeRefNode : public Node {
public:
    explicit TypeRefNode(SourceLocation loc = SourceLocation())
        : Node(NodeKind::TypeRef, std::move(loc)), path_() {}
    
    Path getPath() const { return path_; }
    void setPath(const Path& p) { path_ = p; }
    
    Type* resolve() const; // Resuelve a un Type real
    
    std::string toString() const override;
    
private:
    Path path_;
};

/**
 * @class ModuleNode
 * @brief Nodo raíz que representa un módulo completo
 */
class ModuleNode : public Node {
public:
    explicit ModuleNode(SourceLocation loc = SourceLocation())
        : Node(NodeKind::Module, std::move(loc)), name_(), declarations_() {}
    
    const std::string& getName() const { return name_; }
    void setName(const std::string& n) { name_ = n; }
    
    const std::vector<std::unique_ptr<Declaration>>& getDeclarations() const { return declarations_; }
    std::vector<std::unique_ptr<Declaration>>& getDeclarations() { return declarations_; }
    
    void addDeclaration(std::unique_ptr<Declaration> decl) { 
        declarations_.push_back(std::move(decl)); 
    }
    
    std::string toString() const override;
    
    void dump(int indent = 0) const override;
    
private:
    std::string name_;
    std::vector<std::unique_ptr<Declaration>> declarations_;
};

// ============================================
// SMART POINTERS
// ============================================

using NodePtr = std::unique_ptr<Node>;
using ExprPtr = std::unique_ptr<Expression>;
using StmtPtr = std::unique_ptr<Statement>;
using DeclPtr = std::unique_ptr<Declaration>;

} // namespace nova

#endif // NOVA_NODE_H
