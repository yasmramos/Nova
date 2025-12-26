/**
 * @file SymbolTable.cpp
 * @brief Implementación de la tabla de símbolos
 * @author Yasmany Ramos García
 */

#include "SymbolTable.h"
#include <sstream>

namespace nova {

// ============================================
// SYMBOL
// ============================================

bool Symbol::isAccessible(Visibility fromVisibility) const {
    switch (visibility) {
        case Visibility::Public:
            return true;
        case Visibility::Crate:
            // Solo accesible dentro del mismo crate (simplificado)
            return true;
        case Visibility::Super:
            // Accesible desde el módulo padre
            return true;
        case Visibility::Private:
        default:
            return fromVisibility == Visibility::Private;
    }
}

std::string Symbol::getMangledName() const {
    if (!mangledName.empty()) {
        return mangledName;
    }
    
    std::ostringstream oss;
    
    switch (kind) {
        case SymbolKind::Variable:
            oss << "_Ziv" << name.size() << name;
            break;
        case SymbolKind::Function:
            oss << "_Zif" << name.size() << name;
            break;
        case SymbolKind::Type:
            oss << "_Zit" << name.size() << name;
            break;
        default:
            oss << "_Zi" << name.size() << name;
    }
    
    mangledName = oss.str();
    return mangledName;
}

// ============================================
// SCOPE
// ============================================

Scope::Scope(Scope* parent, std::string name)
    : parent_(parent), name_(std::move(name)), level_(0) {
    if (parent) {
        level_ = parent->level_ + 1;
    }
}

bool Scope::insert(const Symbol& symbol) {
    if (symbols_.find(symbol.name) != symbols_.end()) {
        return false;  // Ya existe
    }
    symbols_[symbol.name] = symbol;
    return true;
}

bool Scope::insert(Symbol&& symbol) {
    if (symbols_.find(symbol.name) != symbols_.end()) {
        return false;
    }
    symbols_[symbol.name] = std::move(symbol);
    return true;
}

Symbol* Scope::find(const std::string& name) {
    auto it = symbols_.find(name);
    if (it != symbols_.end()) {
        return &(it->second);
    }
    return nullptr;
}

bool Scope::contains(const std::string& name) const {
    return symbols_.find(name) != symbols_.end();
}

bool Scope::remove(const std::string& name) {
    return symbols_.erase(name) > 0;
}

void Scope::forEach(std::function<void(const std::string&, const Symbol&)> fn) const {
    for (const auto& [name, symbol] : symbols_) {
        fn(name, symbol);
    }
}

std::vector<std::string> Scope::getSymbolNames() const {
    std::vector<std::string> names;
    names.reserve(symbols_.size());
    for (const auto& [name, symbol] : symbols_) {
        names.push_back(name);
    }
    return names;
}

// ============================================
// SYMBOL TABLE
// ============================================

SymbolTable::SymbolTable() : scopeCounter_(0) {
    // Crear el ámbito global
    enterScope("global");
}

SymbolTable::~SymbolTable() {
    // Limpiar todos los scopes
    for (Scope* scope : scopeStack_) {
        delete scope;
    }
    scopeStack_.clear();
}

Scope& SymbolTable::enterScope(std::string name) {
    if (name.empty()) {
        name = generateScopeName();
    }
    
    Scope* parent = currentScope();
    Scope* newScope = new Scope(parent, name);
    scopeStack_.push_back(newScope);
    
    return *newScope;
}

Scope* SymbolTable::exitScope() {
    if (scopeStack_.size() <= 1) {
        // No podemos salir del ámbito global
        return currentScope();
    }
    
    Scope* current = scopeStack_.back();
    scopeStack_.pop_back();
    
    Scope* parent = currentScope();
    delete current;
    
    return parent;
}

Scope& SymbolTable::enterFunctionScope(const std::string& funcName) {
    return enterScope("func:" + funcName);
}

Scope& SymbolTable::enterStructScope(const std::string& structName) {
    return enterScope("struct:" + structName);
}

Scope& SymbolTable::enterBlockScope() {
    return enterScope("block:" + std::to_string(scopeCounter_++));
}

bool SymbolTable::insert(const Symbol& symbol) {
    return currentScope()->insert(symbol);
}

bool SymbolTable::insert(Symbol&& symbol) {
    return currentScope()->insert(std::move(symbol));
}

bool SymbolTable::insertVariable(const std::string& name, Type* type, 
                                  Node* defNode, StorageClass storage) {
    Symbol sym(name, SymbolKind::Variable, type, defNode, storage);
    return insert(std::move(sym));
}

bool SymbolTable::insertConstant(const std::string& name, Type* type, 
                                  Node* defNode) {
    Symbol sym(name, SymbolKind::Variable, type, defNode, StorageClass::Const);
    return insert(std::move(sym));
}

bool SymbolTable::insertFunction(const std::string& name, Type* funcType, 
                                  Node* defNode, Visibility vis) {
    Symbol sym(name, SymbolKind::Function, funcType, defNode, 
               StorageClass::None, vis);
    return insert(std::move(sym));
}

bool SymbolTable::insertType(const std::string& name, Type* type, 
                              Node* defNode, Visibility vis) {
    Symbol sym(name, SymbolKind::Type, type, defNode, StorageClass::None, vis);
    return insert(std::move(sym));
}

Symbol* SymbolTable::lookupLocal(const std::string& name) {
    return currentScope()->find(name);
}

Symbol* SymbolTable::lookup(const std::string& name) {
    // Buscar desde el ámbito más interno hacia el más externo
    for (auto it = scopeStack_.rbegin(); it != scopeStack_.rend(); ++it) {
        Symbol* sym = (*it)->find(name);
        if (sym) {
            return sym;
        }
    }
    return nullptr;
}

Symbol* SymbolTable::lookupFrom(Scope* start, const std::string& name) {
    bool foundStart = false;
    
    for (auto it = scopeStack_.rbegin(); it != scopeStack_.rend(); ++it) {
        if (*it == start) {
            foundStart = true;
        }
        
        if (foundStart) {
            Symbol* sym = (*it)->find(name);
            if (sym) {
                return sym;
            }
        }
    }
    
    return nullptr;
}

Symbol* SymbolTable::lookupVariable(const std::string& name) {
    Symbol* sym = lookup(name);
    if (sym && sym->kind == SymbolKind::Variable) {
        return sym;
    }
    return nullptr;
}

Symbol* SymbolTable::lookupFunction(const std::string& name) {
    Symbol* sym = lookup(name);
    if (sym && sym->kind == SymbolKind::Function) {
        return sym;
    }
    return nullptr;
}

Symbol* SymbolTable::lookupType(const std::string& name) {
    Symbol* sym = lookup(name);
    if (sym && sym->kind == SymbolKind::Type) {
        return sym;
    }
    return nullptr;
}

bool SymbolTable::exists(const std::string& name) {
    return lookup(name) != nullptr;
}

void SymbolTable::dump(std::ostream& os) const {
    os << "=== Symbol Table Dump ===" << std::endl;
    os << "Total scopes: " << scopeStack_.size() << std::endl;
    os << "Scope depth: " << getScopeDepth() << std::endl;
    os << std::endl;
    
    // Imprimir desde el ámbito global hacia los más internos
    for (size_t i = 0; i < scopeStack_.size(); ++i) {
        Scope* scope = scopeStack_[i];
        os << "Scope [" << i << "] " << scope->getName();
        os << " (level=" << scope->getLevel() << ")" << std::endl;
        
        scope->forEach([&os](const std::string& name, const Symbol& sym) {
            os << "  - " << name << ": " << symbolKindToString(sym.kind);
            os << " [" << (sym.type ? sym.type->getName() : "null") << "]";
            os << " (" << storageClassToString(sym.storage) << ")";
            os << std::endl;
        });
        
        os << std::endl;
    }
}

SymbolTable::Stats SymbolTable::getStats() const {
    Stats stats = {};
    stats.totalScopes = scopeStack_.size();
    stats.maxScopeDepth = 0;
    
    for (Scope* scope : scopeStack_) {
        stats.totalSymbols += scope->getSymbolCount();
        stats.maxScopeDepth = std::max(stats.maxScopeDepth, 
                                        static_cast<size_t>(scope->getLevel()));
        
        scope->forEach([&stats](const std::string& name, const Symbol& sym) {
            switch (sym.kind) {
                case SymbolKind::Variable:
                    stats.variables++;
                    break;
                case SymbolKind::Function:
                    stats.functions++;
                    break;
                case SymbolKind::Type:
                    stats.types++;
                    break;
                default:
                    break;
            }
        });
    }
    
    stats.totalSymbols = stats.variables + stats.functions + stats.types;
    
    return stats;
}

void SymbolTable::reset() {
    // Eliminar todos los scopes excepto el global
    for (size_t i = 1; i < scopeStack_.size(); ++i) {
        delete scopeStack_[i];
    }
    scopeStack_.resize(1);
    scopeCounter_ = 0;
}

std::vector<Symbol*> SymbolTable::getSymbolsByKind(SymbolKind kind) const {
    std::vector<Symbol*> result;
    
    for (Scope* scope : scopeStack_) {
        for (const auto& [name, sym] : scope->getSymbols()) {
            if (sym.kind == kind) {
                result.push_back(const_cast<Symbol*>(&sym));
            }
        }
    }
    
    return result;
}

bool SymbolTable::rename(const std::string& oldName, const std::string& newName) {
    for (auto it = scopeStack_.rbegin(); it != scopeStack_.rend(); ++it) {
        Symbol* sym = (*it)->find(oldName);
        if (sym) {
            // Mover el símbolo al nuevo nombre
            (*it)->remove(oldName);
            sym->name = newName;
            return (*it)->insert(*sym);
        }
    }
    return false;
}

std::string SymbolTable::generateScopeName() {
    return "scope_" + std::to_string(scopeCounter_++);
}

// ============================================
// UTILIDADES
// ============================================

std::string symbolKindToString(SymbolKind kind) {
    switch (kind) {
        case SymbolKind::Variable: return "Variable";
        case SymbolKind::Function: return "Function";
        case SymbolKind::Type: return "Type";
        case SymbolKind::Field: return "Field";
        case SymbolKind::Variant: return "Variant";
        case SymbolKind::Parameter: return "Parameter";
        case SymbolKind::Self: return "Self";
        case SymbolKind::Import: return "Import";
        case SymbolKind::Module: return "Module";
        default: return "Unknown";
    }
}

std::string storageClassToString(StorageClass storage) {
    switch (storage) {
        case StorageClass::None: return "none";
        case StorageClass::Static: return "static";
        case StorageClass::Extern: return "extern";
        case StorageClass::Mut: return "mut";
        case StorageClass::Const: return "const";
        default: return "unknown";
    }
}

} // namespace nova
