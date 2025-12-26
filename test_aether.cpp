/**
 * @file test_aether.cpp
 * @brief Tests básicos para el compilador Aether
 * 
 * Este archivo contiene tests unitarios básicos para verificar
 * que los componentes del compilador funcionan correctamente.
 */

#include <iostream>
#include <cassert>
#include <sstream>
#include "src/ast/Types.h"
#include "src/ast/Node.h"
#include "src/utils/Error.h"
#include "src/utils/SourceLocation.h"
#include "src/sema/SymbolTable.h"

using namespace aether;

void test_types() {
    std::cout << "=== Test: Sistema de Tipos ===" << std::endl;
    
    TypeContext ctx;
    
    // Verificar tipos primitivos
    assert(ctx.getInt32Type() != nullptr);
    assert(ctx.getInt32Type()->isInteger());
    assert(ctx.getFloat64Type()->isFloat());
    assert(ctx.getBoolType()->isBoolean());
    assert(ctx.getVoidType()->isVoid());
    
    // Verificar operaciones de tipos
    assert(ctx.getInt32Type()->getSize() == 4);
    assert(ctx.getFloat64Type()->getSize() == 8);
    assert(ctx.getBoolType()->getSize() == 1);
    
    // Verificar tuplas
    std::vector<Type*> tupleElements = {
        ctx.getInt32Type(),
        ctx.getStringType(),
        ctx.getBoolType()
    };
    auto* tuple = ctx.getTupleType(tupleElements);
    assert(tuple != nullptr);
    assert(tuple->getElementCount() == 3);
    assert(tuple->getElement(0)->isInteger());
    assert(tuple->getElement(1)->isString());
    
    // Verificar arrays
    auto* array = ctx.getArrayType(ctx.getInt32Type(), 10);
    assert(array != nullptr);
    assert(array->getSize() == 40); // 10 * 4 bytes
    
    // Verificar referencias
    auto* refInt = ctx.getReferenceType(ctx.getInt32Type());
    assert(refInt != nullptr);
    assert(refInt->isReference());
    assert(!refInt->is(TypeKind::Reference) || refInt->getSize() == sizeof(void*));
    
    // Verificar opciones
    auto* optInt = ctx.getOptionType(ctx.getInt32Type());
    assert(optInt != nullptr);
    assert(optInt->isOption());
    
    std::cout << "✓ Todos los tests de tipos pasaron" << std::endl;
}

void test_symbol_table() {
    std::cout << "=== Test: Tabla de Símbolos ===" << std::endl;
    
    SymbolTable table;
    
    // Verificar scope global
    assert(table.getScopeDepth() == 1);
    assert(table.currentScope() == table.globalScope());
    
    // Insertar variables
    TypeContext ctx;
    auto* intType = ctx.getInt32Type();
    
    assert(table.insertVariable("x", intType));
    assert(table.insertVariable("y", ctx.getFloat64Type()));
    assert(!table.insertVariable("x", intType)); // Duplicado
    
    // Verificar búsqueda
    auto* symX = table.lookup("x");
    assert(symX != nullptr);
    assert(symX->name == "x");
    assert(symX->kind == SymbolKind::Variable);
    
    auto* symY = table.lookup("y");
    assert(symY != nullptr);
    
    // Verificar símbolo inexistente
    assert(table.lookup("z") == nullptr);
    
    // Verificar scopes anidados
    table.enterBlockScope();
    assert(table.getScopeDepth() == 2);
    
    assert(table.insertVariable("z", intType));
    auto* symZ = table.lookup("z");
    assert(symZ != nullptr);
    
    // x e y deben ser visibles en el scope interno
    assert(table.lookup("x") != nullptr);
    assert(table.lookup("y") != nullptr);
    
    // Salir del scope
    table.exitScope();
    assert(table.getScopeDepth() == 1);
    
    // z ya no debe existir
    assert(table.lookup("z") == nullptr);
    // pero x e y sí
    assert(table.lookup("x") != nullptr);
    
    // Verificar estadísticas
    auto stats = table.getStats();
    assert(stats.totalScopes == 1);
    assert(stats.variables == 2);
    
    std::cout << "✓ Todos los tests de tabla de símbolos pasaron" << std::endl;
}

void test_source_location() {
    std::cout << "=== Test: Source Location ===" << std::endl;
    
    SourceLocation loc("test.aether", 10, 5);
    assert(loc.isValid());
    assert(loc.getFile() == "test.aether");
    assert(loc.getLine() == 10);
    assert(loc.getColumn() == 5);
    assert(loc.toString() == "test.aether:10:5");
    
    SourceLocation invalid;
    assert(!invalid.isValid());
    assert(invalid.toString() == "<unknown>");
    
    SourceRange range(loc, SourceLocation("test.aether", 12, 3));
    assert(range.isValid());
    assert(range.getLineCount() == 3);
    
    std::cout << "✓ Todos los tests de source location pasaron" << std::endl;
}

void test_error_handler() {
    std::cout << "=== Test: Error Handler ===" << std::endl;
    
    ErrorHandler handler;
    
    // Verificar conteo inicial
    assert(handler.getErrorCount() == 0);
    assert(handler.getWarningCount() == 0);
    
    // Reportar error
    SourceLocation loc("test.aether", 5, 10);
    handler.reportError(ErrorCode::SemanticTypeMismatch, loc, "Type mismatch error");
    
    assert(handler.getErrorCount() == 1);
    assert(handler.hasErrors());
    
    // Reportar advertencia
    handler.reportWarning(ErrorCode::SemanticTypeMismatch, loc, "Type mismatch warning");
    assert(handler.getWarningCount() == 1);
    
    // Limpiar
    handler.clear();
    assert(handler.getErrorCount() == 0);
    assert(handler.getWarningCount() == 0);
    
    std::cout << "✓ Todos los tests de error handler pasaron" << std::endl;
}

void test_primitives_operations() {
    std::cout << "=== Test: Operaciones con Primitivos ===" << std::endl;
    
    TypeContext ctx;
    
    // Verificar igualdad de tipos
    assert(ctx.getInt32Type()->isEqual(ctx.getInt32Type()));
    assert(!ctx.getInt32Type()->isEqual(ctx.getInt64Type()));
    
    // Verificar subtipos (por defecto, solo tipos idénticos)
    assert(ctx.getInt32Type()->isSubtypeOf(ctx.getInt32Type()));
    
    // Verificar tipo común
    auto* common = ctx.getInt32Type()->getCommonType(ctx.getInt64Type());
    assert(common == nullptr); // Diferentes tipos, no hay coercion implícita
    
    // Verificar conversiones
    auto* i32 = ctx.getInt32Type();
    auto* f64 = ctx.getFloat64Type();
    assert(i32->getConversionTo(f64) == ConversionKind::None);
    
    std::cout << "✓ Todos los tests de operaciones con primitivos pasaron" << std::endl;
}

int main() {
    std::cout << "\n╔══════════════════════════════════════════╗" << std::endl;
    std::cout << "║  Aether Language - Unit Tests            ║" << std::endl;
    std::cout << "╚══════════════════════════════════════════╝" << std::endl << std::endl;
    
    try {
        test_types();
        test_symbol_table();
        test_source_location();
        test_error_handler();
        test_primitives_operations();
        
        std::cout << std::endl;
        std::cout << "╔══════════════════════════════════════════╗" << std::endl;
        std::cout << "║  ✓ Todos los tests pasaron exitosamente  ║" << std::endl;
        std::cout << "╚══════════════════════════════════════════╝" << std::endl << std::endl;
        
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "✗ Error en tests: " << e.what() << std::endl;
        return 1;
    }
}
