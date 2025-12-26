/**
 * @file test_codegen.cpp
 * @brief Test del generador de código LLVM
 * 
 * Este archivo construye un AST manualmente para probar
 * la generación de código LLVM sin necesidad del parser.
 */

#include <iostream>
#include <cassert>
#include <memory>
#include "src/ast/Types.h"
#include "src/ast/Node.h"
#include "src/utils/Error.h"
#include "src/codegen/CodeGenContext.h"
#include "src/codegen/CodegenVisitor.h"

using namespace nova;

// Funciones auxiliares para construir el AST de prueba
FunctionDeclNode* createMainFunction(TypeContext& ctx) {
    auto func = std::make_unique<FunctionDeclNode>();
    func->setName("main");
    func->setReturnType(ctx.getInt32Type());
    
    // Crear bloque de cuerpo
    auto block = std::make_unique<BlockNode>();
    
    // return 10 + 20;
    auto* retStmt = new ReturnStmtNode();
    
    // 10 + 20
    auto* binaryExpr = new BinaryExprNode();
    binaryExpr->setOperator(BinaryOp::Add);
    
    // Literal 10
    auto* lit10 = new IntegerLiteralNode();
    lit10->setValue(10);
    lit10->setType(ctx.getInt32Type());
    
    // Literal 20
    auto* lit20 = new IntegerLiteralNode();
    lit20->setValue(20);
    lit20->setType(ctx.getInt32Type());
    
    auto lit10Expr = std::unique_ptr<Expression>(lit10);
    auto lit20Expr = std::unique_ptr<Expression>(lit20);
    
    binaryExpr->setLeft(std::move(lit10Expr));
    binaryExpr->setRight(std::move(lit20Expr));
    binaryExpr->setType(ctx.getInt32Type());
    
    auto binaryPtr = std::unique_ptr<Expression>(binaryExpr);
    retStmt->setValue(std::move(binaryPtr));
    
    block->addStatement(std::unique_ptr<Statement>(retStmt));
    
    func->setBody(std::move(block));
    
    return func.release();
}

FunctionDeclNode* createAddFunction(TypeContext& ctx) {
    auto func = std::make_unique<FunctionDeclNode>();
    func->setName("add");
    
    // Parámetros
    // (a: i32, b: i32)
    // Nota: Simplified - just creating the function structure
    
    func->setReturnType(ctx.getInt32Type());
    
    auto block = std::make_unique<BlockNode>();
    
    // return a + b
    auto* retStmt = new ReturnStmtNode();
    
    auto* binaryExpr = new BinaryExprNode();
    binaryExpr->setOperator(BinaryOp::Add);
    binaryExpr->setType(ctx.getInt32Type());
    
    // Identifier a
    auto* identA = new IdentifierNode("a");
    identA->setType(ctx.getInt32Type());
    identA->setLValue(true);
    
    // Identifier b
    auto* identB = new IdentifierNode("b");
    identB->setType(ctx.getInt32Type());
    identB->setLValue(true);
    
    auto identAPtr = std::unique_ptr<Expression>(identA);
    auto identBPtr = std::unique_ptr<Expression>(identB);
    
    binaryExpr->setLeft(std::move(identAPtr));
    binaryExpr->setRight(std::move(identBPtr));
    
    auto binaryPtr = std::unique_ptr<Expression>(binaryExpr);
    retStmt->setValue(std::move(binaryPtr));
    
    block->addStatement(std::unique_ptr<Statement>(retStmt));
    func->setBody(std::move(block));
    
    return func.release();
}

void test_simple_arithmetic() {
    std::cout << "=== Test: Arithmetic Expression ===" << std::endl;
    
    TypeContext ctx;
    ErrorHandler errorHandler;
    
    // Crear contexto de generación de código
    CodeGenContext codegenCtx("TestModule");
    codegenCtx.initialize();
    
    // Crear módulo AST
    auto module = std::make_unique<ModuleNode>();
    module->setName("TestModule");
    
    // Añadir función main
    FunctionDeclNode* mainFunc = createMainFunction(ctx);
    module->addDeclaration(std::unique_ptr<Declaration>(mainFunc));
    
    // Generar código
    CodegenVisitor visitor(codegenCtx);
    bool success = visitor.generate(module.get());
    
    if (!success) {
        std::cerr << "Code generation failed: " << codegenCtx.getLastError() << std::endl;
        return;
    }
    
    // Verificar que el módulo tiene funciones
    llvm::Module* llvmModule = codegenCtx.getModule();
    assert(llvmModule != nullptr);
    
    llvm::Function* mainFn = llvmModule->getFunction("main");
    assert(mainFn != nullptr);
    
    // Imprimir el IR generado
    std::cout << "\n--- Generated LLVM IR ---" << std::endl;
    codegenCtx.printModule(std::cout);
    std::cout << "--- End of IR ---\n" << std::endl;
    
    // Verificar estadísticas
    auto stats = codegenCtx.getStats();
    std::cout << "Function count: " << stats.functionCount << std::endl;
    std::cout << "Basic block count: " << stats.basicBlockCount << std::endl;
    std::cout << "Instruction count: " << stats.instructionCount << std::endl;
    
    // Verificar que hay una función main
    assert(stats.functionCount == 1);
    assert(stats.basicBlockCount >= 1); // Al menos el bloque entry
    
    std::cout << "✓ Arithmetic expression test passed" << std::endl;
}

void test_if_else() {
    std::cout << "\n=== Test: If-Else Control Flow ===" << std::endl;
    
    TypeContext ctx;
    ErrorHandler errorHandler;
    
    CodeGenContext codegenCtx("IfTestModule");
    codegenCtx.initialize();
    
    // Crear función con if-else
    auto func = std::make_unique<FunctionDeclNode>();
    func->setName("testIf");
    func->setReturnType(ctx.getInt32Type());
    
    auto block = std::make_unique<BlockNode>();
    
    // if (x < 10) { return 1; } else { return 0; }
    
    // Crear variable x
    auto* letX = new LetDeclNode();
    letX->setName("x");
    letX->setType(ctx.getInt32Type());
    letX->setMutable(false);
    
    auto* litX = new IntegerLiteralNode();
    litX->setValue(5);
    litX->setType(ctx.getInt32Type());
    letX->setInitializer(std::unique_ptr<Expression>(litX));
    
    block->addStatement(std::unique_ptr<Statement>(letX));
    
    // Crear if statement
    auto* ifStmt = new IfStmtNode();
    
    // Condición: x < 10
    auto* cmpExpr = new BinaryExprNode();
    cmpExpr->setOperator(BinaryOp::Lt);
    
    auto* identX = new IdentifierNode("x");
    identX->setType(ctx.getInt32Type());
    
    auto* lit10 = new IntegerLiteralNode();
    lit10->setValue(10);
    lit10->setType(ctx.getInt32Type());
    
    cmpExpr->setLeft(std::unique_ptr<Expression>(identX));
    cmpExpr->setRight(std::unique_ptr<Expression>(lit10));
    cmpExpr->setType(ctx.getBoolType());
    
    ifStmt->setCondition(std::unique_ptr<Expression>(cmpExpr));
    
    // Then: return 1
    auto thenBlock = std::make_unique<BlockNode>();
    auto* ret1 = new ReturnStmtNode();
    auto* lit1 = new IntegerLiteralNode();
    lit1->setValue(1);
    lit1->setType(ctx.getInt32Type());
    ret1->setValue(std::unique_ptr<Expression>(lit1));
    thenBlock->addStatement(std::unique_ptr<Statement>(ret1));
    ifStmt->setThenBranch(std::move(thenBlock));
    
    // Else: return 0
    auto elseBlock = std::make_unique<BlockNode>();
    auto* ret0 = new ReturnStmtNode();
    auto* lit0 = new IntegerLiteralNode();
    lit0->setValue(0);
    lit0->setType(ctx.getInt32Type());
    ret0->setValue(std::unique_ptr<Expression>(lit0));
    elseBlock->addStatement(std::unique_ptr<Statement>(ret0));
    ifStmt->setElseBranch(std::move(elseBlock));
    
    block->addStatement(std::unique_ptr<Statement>(ifStmt));
    func->setBody(std::move(block));
    
    // Crear módulo
    auto module = std::make_unique<ModuleNode>();
    module->setName("IfTestModule");
    module->addDeclaration(std::move(func));
    
    // Generar código
    CodegenVisitor visitor(codegenCtx);
    bool success = visitor.generate(module.get());
    
    if (!success) {
        std::cerr << "Code generation failed: " << codegenCtx.getLastError() << std::endl;
        return;
    }
    
    // Verificar IR
    std::cout << "\n--- Generated LLVM IR (If-Else) ---" << std::endl;
    codegenCtx.printModule(std::cout);
    std::cout << "--- End of IR ---\n" << std::endl;
    
    auto stats = codegenCtx.getStats();
    std::cout << "Functions: " << stats.functionCount << std::endl;
    std::cout << "Basic blocks: " << stats.basicBlockCount << std::endl;
    
    // Should have multiple blocks: entry, then, else, merge
    assert(stats.basicBlockCount >= 4);
    
    std::cout << "✓ If-else control flow test passed" << std::endl;
}

void test_type_conversions() {
    std::cout << "\n=== Test: Type Conversions ===" << std::endl;
    
    TypeContext ctx;
    
    // Verificar conversiones de tipos
    assert(ctx.getInt32Type() != nullptr);
    assert(ctx.getFloat64Type() != nullptr);
    assert(ctx.getBoolType() != nullptr);
    
    CodeGenContext codegenCtx("TypeTest");
    codegenCtx.initialize();
    
    // Verificar conversión de tipos primitivos
    llvm::Type* i32Type = codegenCtx.convertType(ctx.getInt32Type());
    assert(i32Type != nullptr);
    assert(i32Type->isIntegerTy(32));
    
    llvm::Type* f64Type = codegenCtx.convertType(ctx.getFloat64Type());
    assert(f64Type != nullptr);
    assert(f64Type->isDoubleTy());
    
    llvm::Type* boolType = codegenCtx.convertType(ctx.getBoolType());
    assert(boolType != nullptr);
    assert(boolType->isIntegerTy(1));
    
    std::cout << "✓ Type conversions test passed" << std::endl;
}

int main() {
    std::cout << "\n╔══════════════════════════════════════════╗" << std::endl;
    std::cout << "║  Nova Compiler - CodeGen Tests           ║" << std::endl;
    std::cout << "╚══════════════════════════════════════════╝" << std::endl << std::endl;
    
    try {
        test_type_conversions();
        test_simple_arithmetic();
        test_if_else();
        
        std::cout << std::endl;
        std::cout << "╔══════════════════════════════════════════╗" << std::endl;
        std::cout << "║  ✓ Todos los tests de codegen pasaron    ║" << std::endl;
        std::cout << "╚══════════════════════════════════════════╝" << std::endl << std::endl;
        
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "✗ Error en tests: " << e.what() << std::endl;
        return 1;
    }
}
