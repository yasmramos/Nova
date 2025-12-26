/**
 * @file Node.cpp
 * @brief Implementación de los nodos del AST
 * @author Yasmany Ramos García
 */

#include "Node.h"
#include "Types.h"
#include <sstream>

namespace nova {

// ============================================
// MÉTODOS ESTÁTICOS DE NODE
// ============================================

std::string Node::getNodeKindName(NodeKind kind) {
    switch (kind) {
        // Literales
        case NodeKind::Literal: return "Literal";
        case NodeKind::IntegerLiteral: return "IntegerLiteral";
        case NodeKind::FloatLiteral: return "FloatLiteral";
        case NodeKind::BooleanLiteral: return "BooleanLiteral";
        case NodeKind::CharLiteral: return "CharLiteral";
        case NodeKind::StringLiteral: return "StringLiteral";
        case NodeKind::NullLiteral: return "NullLiteral";
        
        // Expresiones
        case NodeKind::Identifier: return "Identifier";
        case NodeKind::BinaryExpr: return "BinaryExpr";
        case NodeKind::UnaryExpr: return "UnaryExpr";
        case NodeKind::CallExpr: return "CallExpr";
        case NodeKind::IndexExpr: return "IndexExpr";
        case NodeKind::FieldExpr: return "FieldExpr";
        case NodeKind::TupleExpr: return "TupleExpr";
        case NodeKind::ArrayExpr: return "ArrayExpr";
        case NodeKind::StructExpr: return "StructExpr";
        case NodeKind::CastExpr: return "CastExpr";
        case NodeKind::IfExpr: return "IfExpr";
        case NodeKind::MatchExpr: return "MatchExpr";
        case NodeKind::MatchArm: return "MatchArm";
        case NodeKind::BlockExpr: return "BlockExpr";
        case NodeKind::LambdaExpr: return "LambdaExpr";
        case NodeKind::FunctionRef: return "FunctionRef";
        case NodeKind::RangeExpr: return "RangeExpr";
        
        // Statements
        case NodeKind::ExprStmt: return "ExprStmt";
        case NodeKind::DeclStmt: return "DeclStmt";
        case NodeKind::AssignStmt: return "AssignStmt";
        case NodeKind::ReturnStmt: return "ReturnStmt";
        case NodeKind::BreakStmt: return "BreakStmt";
        case NodeKind::ContinueStmt: return "ContinueStmt";
        
        // Declaraciones de variables
        case NodeKind::LetDecl: return "LetDecl";
        case NodeKind::ConstDecl: return "ConstDecl";
        
        // Declaraciones de funciones
        case NodeKind::FunctionDecl: return "FunctionDecl";
        case NodeKind::FunctionParam: return "FunctionParam";
        
        // Tipos de datos
        case NodeKind::StructDecl: return "StructDecl";
        case NodeKind::StructField: return "StructField";
        case NodeKind::EnumDecl: return "EnumDecl";
        case NodeKind::EnumVariant: return "EnumVariant";
        case NodeKind::TraitDecl: return "TraitDecl";
        case NodeKind::TraitMethod: return "TraitMethod";
        case NodeKind::ImplDecl: return "ImplDecl";
        case NodeKind::TypeAlias: return "TypeAlias";
        
        // Uso de módulos
        case NodeKind::ImportDecl: return "ImportDecl";
        case NodeKind::UseDecl: return "UseDecl";
        
        // Estructuras de control
        case NodeKind::WhileStmt: return "WhileStmt";
        case NodeKind::ForStmt: return "ForStmt";
        case NodeKind::LoopStmt: return "LoopStmt";
        
        // Nodo raíz
        case NodeKind::Module: return "Module";
        
        // Tipos
        case NodeKind::TypeRef: return "TypeRef";
        case NodeKind::Path: return "Path";
        
        default: return "Unknown";
    }
}

bool Node::isLiteral() const {
    return kind_ >= NodeKind::Literal && kind_ <= NodeKind::NullLiteral;
}

bool Node::isExpression() const {
    return kind_ >= NodeKind::Literal && kind_ <= NodeKind::RangeExpr;
}

bool Node::isDeclaration() const {
    return kind_ >= NodeKind::Literal && kind_ <= NodeKind::TypeAlias;
}

bool Node::isStatement() const {
    return kind_ >= NodeKind::ExprStmt && kind_ <= NodeKind::ContinueStmt;
}

// ============================================
// LITERAL NODES
// ============================================

std::string IntegerLiteralNode::toString() const {
    std::ostringstream oss;
    oss << "IntegerLiteral(" << value_ << suffix_ << ")";
    return oss.str();
}

std::string FloatLiteralNode::toString() const {
    std::ostringstream oss;
    oss << "FloatLiteral(" << value_ << suffix_ << ")";
    return oss.str();
}

std::string BooleanLiteralNode::toString() const {
    return std::string("BooleanLiteral(") + (value_ ? "true" : "false") + ")";
}

std::string StringLiteralNode::toString() const {
    std::ostringstream oss;
    oss << "StringLiteral(\"" << value_ << "\")";
    return oss.str();
}

std::string CharLiteralNode::toString() const {
    std::ostringstream oss;
    oss << "CharLiteral('" << value_ << "')";
    return oss.str();
}

std::string NullLiteralNode::toString() const {
    return "NullLiteral";
}

// ============================================
// EXPRESSION NODES
// ============================================

std::string IdentifierNode::toString() const {
    std::ostringstream oss;
    oss << "Identifier(" << name_ << ")";
    if (type_) {
        oss << ": " << type_->getName();
    }
    return oss.str();
}

std::string BinaryExprNode::toString() const {
    std::ostringstream oss;
    oss << "BinaryExpr(" << BinaryOpToString(op_) << ", ... , ... )";
    return oss.str();
}

std::string UnaryExprNode::toString() const {
    std::ostringstream oss;
    oss << "UnaryExpr(" << UnaryOpToString(op_) << ", ... )";
    return oss.str();
}

std::string CallExprNode::toString() const {
    std::ostringstream oss;
    oss << "CallExpr(... " << arguments_.size() << " args)";
    return oss.str();
}

std::string IfExprNode::toString() const {
    std::ostringstream oss;
    oss << "IfExpr(...)";
    return oss.str();
}

// ============================================
// DECLARATION NODES
// ============================================

std::string LetDeclNode::toString() const {
    std::ostringstream oss;
    oss << "LetDecl(" << (isMutable_ ? "mut " : "") << name_;
    if (type_) {
        oss << ": " << type_->getName();
    }
    oss << ")";
    return oss.str();
}

std::string FunctionDeclNode::toString() const {
    std::ostringstream oss;
    oss << "FunctionDecl(" << name_ << ")";
    return oss.str();
}

// ============================================
// TYPE NODES
// ============================================

std::string TypeRefNode::toString() const {
    return std::string("TypeRef(") + path_.toString() + ")";
}

Type* TypeRefNode::resolve() const {
    // Esta implementación se completará cuando se tenga el TypeContext
    return nullptr;
}

// ============================================
// MODULE NODE
// ============================================

std::string ModuleNode::toString() const {
    std::ostringstream oss;
    oss << "Module(" << name_ << ") with " << declarations_.size() << " declarations";
    return oss.str();
}

void ModuleNode::dump(int indent) const {
    std::string pad(indent * 2, ' ');
    std::cout << pad << "Module: " << name_ << std::endl;
    
    for (const auto& decl : declarations_) {
        decl->dump(indent + 1);
    }
}

// ============================================
// UTILIDADES
// ============================================

std::string BinaryOpToString(BinaryOp op) {
    switch (op) {
        case BinaryOp::Add: return "+";
        case BinaryOp::Sub: return "-";
        case BinaryOp::Mul: return "*";
        case BinaryOp::Div: return "/";
        case BinaryOp::Mod: return "%";
        case BinaryOp::Pow: return "**";
        case BinaryOp::BitAnd: return "&";
        case BinaryOp::BitOr: return "|";
        case BinaryOp::BitXor: return "^";
        case BinaryOp::Shl: return "<<";
        case BinaryOp::Shr: return ">>";
        case BinaryOp::And: return "&&";
        case BinaryOp::Or: return "||";
        case BinaryOp::Eq: return "==";
        case BinaryOp::Ne: return "!=";
        case BinaryOp::Lt: return "<";
        case BinaryOp::Le: return "<=";
        case BinaryOp::Gt: return ">";
        case BinaryOp::Ge: return ">=";
        case BinaryOp::Assign: return "=";
        case BinaryOp::AddAssign: return "+=";
        case BinaryOp::SubAssign: return "-=";
        case BinaryOp::MulAssign: return "*=";
        case BinaryOp::DivAssign: return "/=";
        case BinaryOp::ModAssign: return "%=";
        case BinaryOp::AndAssign: return "&=";
        case BinaryOp::OrAssign: return "|=";
        case BinaryOp::XorAssign: return "^=";
        case BinaryOp::ShlAssign: return "<<=";
        case BinaryOp::ShrAssign: return ">>=";
        default: return "?";
    }
}

std::string UnaryOpToString(UnaryOp op) {
    switch (op) {
        case UnaryOp::Neg: return "-";
        case UnaryOp::Not: return "!";
        case UnaryOp::Deref: return "*";
        case UnaryOp::Ref: return "&";
        case UnaryOp::RefMut: return "&mut";
        default: return "?";
    }
}

} // namespace nova
