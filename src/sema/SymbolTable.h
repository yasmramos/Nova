/**
 * @file SymbolTable.h
 * @brief Tabla de símbolos para resolución de nombres
 * 
 * Implementa el sistema de ámbitos (scopes) y mantiene un registro
 * de todos los identificadores declarados con su información asociada.
 * 
 * Esta clase es fundamental para el análisis semántico ya que permite
 * verificar que todas las referencias a variables, funciones y tipos
 * estén correctamente definidas y sean accesibles.
 */

#ifndef NOVA_SYMBOL_TABLE_H
#define NOVA_SYMBOL_TABLE_H

#include <string>
#include <vector>
#include <unordered_map>
#include <memory>
#include <optional>
#include <functional>
#include "Types.h"
#include "Node.h"

namespace nova {

/**
 * @enum SymbolKind
 * @brief Categoría de símbolo
 */
enum class SymbolKind {
    Variable,      // Variable o constante
    Function,      // Función
    Type,          // Tipo (struct, enum, trait, alias)
    Field,         // Campo de struct
    Variant,       // Variante de enum
    Parameter,     // Parámetro de función
    Self,          // Referencia self/this
    Import,        // Símbolo importado
    Module,        // Módulo
};

/**
 * @enum StorageClass
 * @brief Clase de almacenamiento
 */
enum class StorageClass {
    None,          // Sin clase especial
    Static,        // Variables estáticas
    Extern,        // Declaración externa
    Mut,           // Mutable (para variables)
    Const,         // Constante
};

/**
 * @struct Symbol
 * @brief Representa un símbolo en la tabla
 * 
 * Un símbolo puede ser una variable, función, tipo, etc.
 * Almacena toda la información necesaria para el análisis
 * semántico y la generación de código.
 */
struct Symbol {
    std::string name;
    SymbolKind kind;
    Type* type;
    Node* definitionNode;
    StorageClass storage;
    Visibility visibility;
    std::string mangledName;      // Nombre mangled para C++ interop
    bool isGeneric;               // Si es un parámetro genérico
    std::vector<Constraint> constraints;  // Restricciones de traits
    
    // Constructor por defecto
    Symbol()
        : name(""), kind(SymbolKind::Variable), type(nullptr),
          definitionNode(nullptr), storage(StorageClass::None),
          visibility(Visibility::Private), isGeneric(false) {}
    
    // Constructor completo
    Symbol(std::string n, SymbolKind k, Type* t, Node* def = nullptr,
           StorageClass s = StorageClass::None, Visibility v = Visibility::Private)
        : name(std::move(n)), kind(k), type(t), definitionNode(def),
          storage(s), visibility(v), isGeneric(false) {}
    
    /**
     * @brief Verifica si el símbolo es accesible desde el ámbito actual
     */
    bool isAccessible(Visibility fromVisibility) const;
    
    /**
     * @brief Genera el nombre mangled para el símbolo
     */
    std::string getMangledName() const;
};

/**
 * @class Scope
 * @brief Representa un ámbito de declaración
 * 
 * Un ámbito es un contenedor de símbolos que tiene una vida útil
 * definida. Los ámbitos pueden anidarse para crear scopes jerárquicos.
 */
class Scope {
public:
    /**
     * @brief Constructor
     * @param parent Ámbito padre (puede ser nullptr)
     * @param name Nombre del ámbito (opcional, para debugging)
     */
    Scope(Scope* parent = nullptr, std::string name = "");
    
    /**
     * @brief Destructor
     */
    ~Scope() = default;
    
    // === Gestión de símbolos ===
    
    /**
     * @brief Inserta un símbolo en el ámbito
     * @return true si se insertó exitosamente, false si ya existía
     */
    bool insert(const Symbol& symbol);
    
    /**
     * @brief Inserta un símbolo moviendo el ownership
     */
    bool insert(Symbol&& symbol);
    
    /**
     * @brief Busca un símbolo por nombre
     * @return Puntero al símbolo o nullptr si no existe
     */
    Symbol* find(const std::string& name);
    
    /**
     * @brief Verifica si existe un símbolo
     */
    bool contains(const std::string& name) const;
    
    /**
     * @brief Elimina un símbolo
     */
    bool remove(const std::string& name);
    
    // === Consultas ===
    
    /**
     * @brief Obtiene el ámbito padre
     */
    Scope* getParent() const { return parent_; }
    
    /**
     * @brief Obtiene el nombre del ámbito
     */
    const std::string& getName() const { return name_; }
    
    /**
     * @brief Obtiene el nivel de anidación (0 = global)
     */
    int getLevel() const { return level_; }
    
    /**
     * @brief Obtiene todos los símbolos del ámbito
     */
    const std::unordered_map<std::string, Symbol>& getSymbols() const { return symbols_; }
    
    /**
     * @brief Obtiene el número de símbolos
     */
    size_t getSymbolCount() const { return symbols_.size(); }
    
    /**
     * @brief Itera sobre todos los símbolos
     */
    void forEach(std::function<void(const std::string&, const Symbol&)> fn) const;
    
    /**
     * @brief Verifica si el ámbito está vacío
     */
    bool isEmpty() const { return symbols_.empty(); }
    
    /**
     * @brief Obtiene la lista de todos los nombres
     */
    std::vector<std::string> getSymbolNames() const;
    
private:
    std::unordered_map<std::string, Symbol> symbols_;
    Scope* parent_;
    std::string name_;
    int level_;
};

/**
 * @class SymbolTable
 * @brief Tabla de símbolos con gestión de scopes
 * 
 * Mantiene una pila de ámbitos y proporciona operaciones
 * para la inserción, búsqueda y gestión de símbolos.
 */
class SymbolTable {
public:
    /**
     * @brief Constructor
     */
    SymbolTable();
    
    /**
     * @brief Destructor
     */
    ~SymbolTable();
    
    // === Gestión de scopes ===
    
    /**
     * @brief Entra a un nuevo ámbito hijo
     * @param name Nombre opcional para el ámbito
     * @return Referencia al nuevo ámbito creado
     */
    Scope& enterScope(std::string name = "");
    
    /**
     * @brief Sale del ámbito actual (hace pop)
     * @return El ámbito padre
     */
    Scope* exitScope();
    
    /**
     * @brief Entra a un scope de función
     */
    Scope& enterFunctionScope(const std::string& funcName);
    
    /**
     * @brief Entra a un scope de struct
     */
    Scope& enterStructScope(const std::string& structName);
    
    /**
     * @brief Entra a un scope de bloque
     */
    Scope& enterBlockScope();
    
    /**
     * @brief Obtiene el ámbito actual
     */
    Scope* currentScope() const { return scopeStack_.back(); }
    
    /**
     * @brief Obtiene el ámbito global
     */
    Scope* globalScope() const { return scopeStack_.front(); }
    
    /**
     * @brief Obtiene el nivel de scopes actual
     */
    int getScopeDepth() const { return static_cast<int>(scopeStack_.size()); }
    
    // === Gestión de símbolos ===
    
    /**
     * @brief Inserta un símbolo en el ámbito actual
     * @return true si se insertó exitosamente
     */
    bool insert(const Symbol& symbol);
    
    /**
     * @brief Inserta un símbolo moviendo
     */
    bool insert(Symbol&& symbol);
    
    /**
     * @brief Inserta una variable
     */
    bool insertVariable(const std::string& name, Type* type, 
                        Node* defNode = nullptr, 
                        StorageClass storage = StorageClass::None);
    
    /**
     * @brief Inserta una constante
     */
    bool insertConstant(const std::string& name, Type* type, 
                        Node* defNode = nullptr);
    
    /**
     * @brief Inserta una función
     */
    bool insertFunction(const std::string& name, Type* funcType, 
                        Node* defNode = nullptr,
                        Visibility vis = Visibility::Public);
    
    /**
     * @brief Inserta un tipo
     */
    bool insertType(const std::string& name, Type* type, 
                    Node* defNode = nullptr,
                    Visibility vis = Visibility::Public);
    
    // === Búsqueda de símbolos ===
    
    /**
     * @brief Busca un símbolo en el ámbito actual
     */
    Symbol* lookupLocal(const std::string& name);
    
    /**
     * @brief Busca un símbolo en todos los ámbitos (del más interno al más externo)
     */
    Symbol* lookup(const std::string& name);
    
    /**
     * @brief Busca un símbolo comenzando desde un ámbito específico
     */
    Symbol* lookupFrom(Scope* start, const std::string& name);
    
    /**
     * @brief Busca una variable
     */
    Symbol* lookupVariable(const std::string& name);
    
    /**
     * @brief Busca una función
     */
    Symbol* lookupFunction(const std::string& name);
    
    /**
     * @brief Busca un tipo
     */
    Symbol* lookupType(const std::string& name);
    
    /**
     * @brief Verifica si existe un símbolo
     */
    bool exists(const std::string& name);
    
    // === Utilidades ===
    
    /**
     * @brief Imprime la tabla de símbolos
     */
    void dump(std::ostream& os) const;
    
    /**
     * @brief Obtiene estadísticas
     */
    struct Stats {
        size_t totalSymbols;
        size_t totalScopes;
        size_t maxScopeDepth;
        size_t variables;
        size_t functions;
        size_t types;
    };
    
    Stats getStats() const;
    
    /**
     * @brief Reinicia la tabla de símbolos
     */
    void reset();
    
    /**
     * @brief Obtiene todos los símbolos de un tipo específico
     */
    std::vector<Symbol*> getSymbolsByKind(SymbolKind kind) const;
    
    /**
     * @brief Renombra un símbolo (para refactoring)
     */
    bool rename(const std::string& oldName, const std::string& newName);
    
private:
    std::vector<Scope*> scopeStack_;
    int scopeCounter_;
    
    /**
     * @brief Crea un nombre único para scopes anónimos
     */
    std::string generateScopeName();
};

// ============================================
// UTILIDADES
// ============================================

/**
 * @brief Convierte SymbolKind a string
 */
std::string symbolKindToString(SymbolKind kind);

/**
 * @brief Convierte StorageClass a string
 */
std::string storageClassToString(StorageClass storage);

/**
 * @brief Helper para crear símbolos de variable
 */
inline Symbol makeVariable(const std::string& name, Type* type, 
                           Node* def = nullptr, bool isMutable = true) {
    return Symbol(name, SymbolKind::Variable, type, def, 
                  isMutable ? StorageClass::Mut : StorageClass::Const);
}

/**
 * @brief Helper para crear símbolos de función
 */
inline Symbol makeFunction(const std::string& name, Type* type, 
                           Node* def = nullptr) {
    return Symbol(name, SymbolKind::Function, type, def, 
                  StorageClass::None, Visibility::Public);
}

/**
 * @brief Helper para crear símbolos de tipo
 */
inline Symbol makeType(const std::string& name, Type* type, 
                       Node* def = nullptr) {
    return Symbol(name, SymbolKind::Type, type, def, 
                  StorageClass::None, Visibility::Public);
}

} // namespace nova

#endif // NOVA_SYMBOL_TABLE_H
