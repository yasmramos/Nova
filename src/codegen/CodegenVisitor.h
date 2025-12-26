/**
 * @file CodegenVisitor.h
 * @brief Visitor para generación de código LLVM IR
 * 
 * Este visitor recorre el AST de Nova y genera instrucciones
 * LLVM IR equivalentes. Implementa la interfaz NodeVisitor.
 */

#ifndef NOVA_CODEGEN_VISITOR_H
#define NOVA_CODEGEN_VISITOR_H

#include <memory>
#include <string>
#include <vector>
#include <unordered_map>
#include <optional>
#include "Node.h"
#include "CodeGenContext.h"

namespace nova {

/**
 * @class CodegenVisitor
 * @brief Genera código LLVM IR desde el AST de Nova
 * 
 * Este visitor transforma cada nodo del AST en las instrucciones
 * LLVM correspondientes, utilizando el CodeGenContext para
 * mantener el estado de la compilación.
 */
class CodegenVisitor : public NodeVisitor {
public:
    /**
     * @brief Constructor
     * @param context Contexto de generación de código
     */
    explicit CodegenVisitor(CodeGenContext& context);
    
    /**
     * @brief Destructor
     */
    ~CodegenVisitor() override = default;
    
    /**
     * @brief Ejecuta la generación de código para un módulo
     * @param module Nodo raíz del AST
     * @return true si la generación fue exitosa
     */
    bool generate(ModuleNode* module);
    
    /**
     * @brief Obtiene el módulo LLVM generado
     */
    llvm::Module* getModule() { return context_.getModule(); }
    
    /**
     * @brief Verifica si hubo errores
     */
    bool hasErrors() const { return context_.hasErrors(); }
    
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
    // === Utilidades de generación ===
    
    /**
     * @brief Genera código para una expresión y retorna el valor LLVM
     */
    llvm::Value* generateExpression(Expression* expr);
    
    /**
     * @brief Genera código para un statement
     */
    void generateStatement(Node* stmt);
    
    /**
     * @brief Convierte un operador binario a instrucción LLVM
     */
    llvm::Value* generateBinaryOp(BinaryOp op, llvm::Value* left, llvm::Value* right, 
                                   Type* resultType);
    
    /**
     * @brief Convierte un operador de comparación a predicado LLVM
     */
    llvm::CmpInst::Predicate getComparePredicate(BinaryOp op, bool isSigned);
    
    /**
     * @brief Convierte un operador unario a instrucción LLVM
     */
    llvm::Value* generateUnaryOp(UnaryOp op, llvm::Value* operand);
    
    /**
     * @brief Obtiene o crea la función LLVM对应
     */
    llvm::Function* getOrCreateFunction(FunctionDeclNode* node);
    
    /**
     * @brief Reporta un error de generación
     */
    void error(Node* node, const std::string& message);
    
    /**
     * @brief Obtiene el tipo LLVM de un nodo
     */
    llvm::Type* getLLVMType(Node* node);
    
    // === Manejo de variables ===
    
    /**
     * @brief Carga el valor de una variable
     */
    llvm::Value* loadVariable(const std::string& name);
    
    /**
     * @brief Almacena un valor en una variable
     */
    void storeVariable(const std::string& name, llvm::Value* value);
    
    /**
     * @brief Declara una variable local
     */
    void declareLocalVariable(const std::string& name, Type* type, llvm::Value* initValue = nullptr);
    
private:
    CodeGenContext& context_;
    llvm::IRBuilder<>& builder_;
    TypeContext& typeContext_;
    
    // Contexto de la función actual
    llvm::Function* currentFunction_ = nullptr;
    
    // Pila de bloques de continuación (para break/continue)
    std::vector<llvm::BasicBlock*> breakBlocks_;
    std::vector<llvm::BasicBlock*> continueBlocks_;
    
    // Pila de tipos de retorno esperados
    std::vector<Type*> returnTypes_;
    
    // Contador para temporales
    int tempCounter_ = 0;
};

/**
 * @class NovaJIT
 * @brief Utilidad para ejecución JIT del código generado
 * 
 * Permite compilar y ejecutar código Nova directamente
 * usando LLVM ORC JIT.
 */
#if LLVM_VERSION_MAJOR >= 14
class NovaJIT {
public:
    NovaJIT();
    ~NovaJIT();
    
    /**
     * @brief Añade un módulo al JIT
     */
    bool addModule(std::unique_ptr<llvm::Module> module);
    
    /**
     * @brief Busca una función por nombre
     */
    void* lookupFunction(const std::string& name);
    
    /**
     * @brief Obtiene el errorer
     */
    std::string getError() const { return lastError_; }
    
private:
    // Implementación interna
    class Impl;
    std::unique_ptr<Impl> impl_;
    std::string lastError_;
};
#endif

} // namespace nova

#endif // NOVA_CODEGEN_VISITOR_H
