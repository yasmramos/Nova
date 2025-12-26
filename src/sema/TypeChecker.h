/**
 * @file TypeChecker.h
 * @brief Analizador semántico y verificador de tipos
 * 
 * Este componente es responsable de verificar la corrección semántica
 * del programa, incluyendo la verificación de tipos, resolución de
 * nombres y análisis de flujo de control.
 * 
 * El TypeChecker visita el AST y:
 * - Construye y mantiene la Symbol Table
 * - Verifica que las operaciones sean type-safe
 * - Infiere tipos cuando es necesario
 * - Reporta errores semánticos
 */

#ifndef NOVA_TYPE_CHECKER_H
#define NOVA_TYPE_CHECKER_H

#include <memory>
#include <vector>
#include <string>
#include <unordered_map>
#include <optional>
#include <variant>
#include "Node.h"
#include "Types.h"
#include "SymbolTable.h"
#include "Error.h"

namespace nova {

/**
 * @class TypeChecker
 * @brief Verificador de tipos y análisis semántico
 * 
 * Implementa el patrón Visitor sobre el AST para realizar
 * el análisis semántico completo del código fuente.
 */
class TypeChecker : public NodeVisitor {
public:
    /**
     * @brief Constructor
     * @param errorHandler Manejador de errores
     * @param typeContext Contexto de tipos
     */
    TypeChecker(ErrorHandler& errorHandler, TypeContext& typeContext);
    
    /**
     * @brief Destructor
     */
    ~TypeChecker() override = default;
    
    // === Métodos principales ===
    
    /**
     * @brief Ejecuta el análisis semántico sobre un módulo
     * @param module Nodo raíz del AST
     * @return true si no hay errores fatales
     */
    bool check(ModuleNode* module);
    
    /**
     * @brief Obtiene la tabla de símbolos construida
     */
    SymbolTable& getSymbolTable() { return symbolTable_; }
    
    /**
     * @brief Obtiene el contexto de tipos
     */
    TypeContext& getTypeContext() { return typeContext_; }
    
    /**
     * @brief Verifica si hay errores
     */
    bool hasErrors() const { return errorHandler_.hasErrors(); }
    
    // === NodeVisitor Interface ===
    
    void visitModule(ModuleNode* node) override;
    void visitFunctionDecl(FunctionDeclNode* node) override;
    void visitStructDecl(StructType* node) override;
    void visitEnumDecl(EnumType* node) override;
    void visitTraitDecl(TraitDeclNode* node) override;
    void visitImplDecl(ImplDeclNode* node) override;
    void visitTypeAlias(TypeAliasNode* node) override;
    void visitLetDecl(LetDeclNode* node) override;
    void visitConstDecl(ConstDeclNode* node) override;
    
    void visitBlock(BlockNode* node) override;
    void visitExprStmt(ExprStmtNode* node) override;
    void visitAssignStmt(AssignStmtNode* node) override;
    void visitIfStmt(IfStmtNode* node) override;
    void visitWhileStmt(WhileStmtNode* node) override;
    void visitForStmt(ForStmtNode* node) override;
    void visitLoopStmt(LoopStmtNode* node) override;
    void visitMatchStmt(MatchStmtNode* node) override;
    void visitReturnStmt(ReturnStmtNode* node) override;
    void visitBreakStmt(BreakStmtNode* node) override;
    void visitContinueStmt(ContinueStmtNode* node) override;
    
    void visitBinaryExpr(BinaryExprNode* node) override;
    void visitUnaryExpr(UnaryExprNode* node) override;
    void visitCallExpr(CallExprNode* node) override;
    void visitIfExpr(IfExprNode* node) override;
    void visitMatchExpr(MatchExprNode* node) override;
    void visitLambdaExpr(LambdaExprNode* node) override;
    void visitLiteral(LiteralNode* node) override;
    void visitIdentifier(IdentifierNode* node) override;
    void visitFieldExpr(FieldExprNode* node) override;
    void visitTupleIndexExpr(TupleIndexExprNode* node) override;
    void visitArrayExpr(ArrayExprNode* node) override;
    void visitTupleExpr(TupleExprNode* node) override;
    void visitStructExpr(StructExprNode* node) override;
    void visitRangeExpr(RangeExprNode* node) override;
    void visitCastExpr(CastExprNode* node) override;
    void visitAwaitExpr(AwaitExprNode* node) override;

protected:
    // === Utilidades de análisis ===
    
    /**
     * @brief Obtiene o infiere el tipo de una expresión
     */
    Type* getExpressionType(Expression* expr);
    
    /**
     * @brief Verifica que un tipo sea numérico
     */
    bool expectNumeric(Type* type, Expression* expr);
    
    /**
     * @brief Verifica que un tipo sea entero
     */
    bool expectInteger(Type* type, Expression* expr);
    
    /**
     * @brief Verifica que un tipo sea booleano
     */
    bool expectBoolean(Type* type, Expression* expr);
    
    /**
     * @brief Verifica que un tipo sea comparable
     */
    bool expectComparable(Type* type, Expression* expr);
    
    /**
     * @brief Verifica la compatibilidad de tipos para asignación
     */
    bool checkAssignment(Type* targetType, Expression* value, SourceLocation loc);
    
    /**
     * @brief Obtiene el tipo común para operación binaria
     */
    Type* getBinaryResultType(BinaryOp op, Type* left, Type* right);
    
    /**
     * @brief Reporta error de tipo
     */
    void typeError(Expression* expr, const std::string& expected, const std::string& found);
    
    /**
     * @brief Reporta error de tipo con código
     */
    void typeError(Expression* expr, Type* expected, Type* found);
    
    /**
     * @brief Reporta error de símbolo no definido
     */
    void undefinedError(IdentifierNode* ident);
    
    /**
     * @brief Reporta error de duplicado
     */
    void duplicateError(const std::string& name, SourceLocation loc);
    
    /**
     * @brief Reporta error de retorno
     */
    void returnError(FunctionDeclNode* func, Type* expected, Type* found);
    
    // === Contexto de análisis ===
    
    /**
     * @brief Entra al scope de una función
     */
    void enterFunctionScope(FunctionDeclNode* func);
    
    /**
     * @brief Sale del scope de función
     */
    void exitFunctionScope();
    
    /**
     * @brief Verifica si estamos dentro de una función
     */
    bool isInFunction() const { return currentFunction_ != nullptr; }
    
    /**
     * @brief Obtiene la función actual
     */
    FunctionDeclNode* getCurrentFunction() const { return currentFunction_; }
    
    /**
     * @brief Verifica si el tipo de retorno coincide
     */
    bool checkReturnType(Type* returnType);
    
    /**
     * @brief Registra el tipo de retorno esperado
     */
    void setExpectedReturnType(Type* type);
    
    // === Búsqueda de tipos y símbolos ===
    
    /**
     * @brief Resuelve una referencia de tipo
     */
    Type* resolveType(TypeRefNode* typeRef);
    
    /**
     * @brief Resuelve un path cualificado
     */
    Type* resolveQualifiedPath(const Path& path);
    
private:
    ErrorHandler& errorHandler_;
    TypeContext& typeContext_;
    SymbolTable symbolTable_;
    
    // Contexto actual de análisis
    FunctionDeclNode* currentFunction_ = nullptr;
    Type* expectedReturnType_ = nullptr;
    bool returnEncountered_ = false;
    
    // Pila de tipos para inferencia
    std::vector<Type*> typeStack_;
    
    // Mapa de tipos inferidos para expresiones
    std::unordered_map<Expression*, Type*> inferredTypes_;
    
    // Contador para tipos anónimos
    int anonymousTypeCounter_ = 0;
};

// ============================================
// HELPERS DE INFERENCIA
// ============================================

/**
 * @class TypeInferrer
 * @brief Utilidad para inferencia de tipos
 * 
 * Implementa el algoritmo de unificación Hindley-Milner
 * para la inferencia de tipos.
 */
class TypeInferrer {
public:
    TypeInferrer(TypeContext& context, ErrorHandler& errorHandler);
    
    /**
     * @brief Infiere el tipo de una expresión
     */
    Type* infer(Expression* expr);
    
    /**
     * @brief Unifica dos tipos
     * @return true si la unificación fue exitosa
     */
    bool unify(Type* t1, Type* t2);
    
    /**
     * @brief Resuelve una variable de tipo
     */
    Type* resolve(Type* type);
    
    /**
     * @brief Añade una restricción de tipo
     */
    void addConstraint(Type* type, const std::string& traitName);
    
private:
    TypeContext& context_;
    ErrorHandler& errorHandler_;
    std::unordered_map<std::string, Type*> typeVariables_;
    int variableCounter_;
    
    Type* freshVariable();
    std::string generateVariableName();
};

// ============================================
// VERIFICACIÓN DE PATRONES
// ============================================

/**
 * @class PatternChecker
 * @brief Verifica la exhaustividad de patrones
 * 
 * Analiza expresiones match para verificar que todos
 * los casos posibles estén cubiertos.
 */
class PatternChecker {
public:
    /**
     * @brief Constructor
     */
    PatternChecker(ErrorHandler& errorHandler, TypeContext& typeContext);
    
    /**
     * @brief Verifica exhaustividad de brazos de match
     */
    bool checkExhaustiveness(MatchExprNode* match);
    
    /**
     * @brief Verifica que un patrón sea alcanzable
     */
    bool isReachable(MatchArmNode* arm);
    
private:
    ErrorHandler& errorHandler_;
    TypeContext& typeContext_;
    
    /**
     * @brief Recopila todos los casos posibles de un tipo
     */
    void collectCases(Type* enumType, std::vector<std::string>& cases);
    
    /**
     * @brief Verifica cobertura de patrones
     */
    bool checkCoverage(const std::vector<std::string>& expected,
                       const std::vector<std::string>& covered);
};

// ============================================
// ANÁLISIS DE FLUJO
// ============================================

/**
 * @class FlowAnalyzer
 * @brief Análisis de flujo de control
 * 
 * Verifica que no haya código inalcanzable, bucles infinitos
 * y uso de variables no inicializadas.
 */
class FlowAnalyzer {
public:
    FlowAnalyzer(ErrorHandler& errorHandler, SymbolTable& symbolTable);
    
    /**
     * @brief Analiza un bloque de código
     */
    void analyzeBlock(BlockNode* block);
    
    /**
     * @brief Analiza una función
     */
    void analyzeFunction(FunctionDeclNode* func);
    
    /**
     * @brief Verifica si una expresión diverge (nunca retorna)
     */
    bool diverges(Expression* expr);
    
private:
    ErrorHandler& errorHandler_;
    SymbolTable& symbolTable_;
    
    /**
     * @brief Analiza uso de variables
     */
    void analyzeVariableUsage(IdentifierNode* ident);
    
    /**
     * @brief Verifica inicialización
     */
    void checkInitialization(LetDeclNode* decl);
};

} // namespace nova

#endif // NOVA_TYPE_CHECKER_H
