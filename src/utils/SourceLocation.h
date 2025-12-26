/**
 * @file SourceLocation.h
 * @brief Representación de ubicaciones en el código fuente
 * 
 * Utilizado para reportar errores precisos con información
 * de línea, columna y archivo.
 */

#ifndef AETHER_SOURCE_LOCATION_H
#define AETHER_SOURCE_LOCATION_H

#include <string>
#include <optional>

namespace aether {

/**
 * @class SourceLocation
 * @brief Representa una ubicación específica en el código fuente
 * 
 * Esta clase almacena información sobre dónde se encuentra un elemento
 * particular del código fuente, incluyendo archivo, línea y columna.
 * Es esencial para el reporte de errores informativos.
 */
class SourceLocation {
public:
    /**
     * @brief Constructor por defecto
     * Crea una ubicación vacía (inválida)
     */
    SourceLocation() 
        : file_(""), line_(0), column_(0) {}
    
    /**
     * @brief Constructor con parámetros
     * @param file Ruta del archivo fuente
     * @param line Número de línea (1-indexed)
     * @param column Número de columna (1-indexed)
     */
    SourceLocation(std::string file, size_t line, size_t column)
        : file_(std::move(file)), line_(line), column_(column) {}
    
    /**
     * @brief Constructor desde otra ubicación
     */
    SourceLocation(const SourceLocation& other)
        : file_(other.file_), line_(other.line_), column_(other.column_) {}
    
    /**
     * @brief Operador de asignación
     */
    SourceLocation& operator=(const SourceLocation& other) {
        if (this != &other) {
            file_ = other.file_;
            line_ = other.line_;
            column_ = other.column_;
        }
        return *this;
    }
    
    // Getters
    const std::string& getFile() const { return file_; }
    size_t getLine() const { return line_; }
    size_t getColumn() const { return column_; }
    
    /**
     * @brief Verifica si la ubicación es válida
     */
    bool isValid() const { return !file_.empty() && line_ > 0; }
    
    /**
     * @brief Representación en string
     */
    std::string toString() const {
        if (!isValid()) {
            return "<unknown>";
        }
        return file_ + ":" + std::to_string(line_) + ":" + std::to_string(column_);
    }
    
    /**
     * @brief Operador de comparación
     */
    bool operator==(const SourceLocation& other) const {
        return file_ == other.file_ && 
               line_ == other.line_ && 
               column_ == other.column_;
    }
    
    bool operator!=(const SourceLocation& other) const {
        return !(*this == other);
    }
    
private:
    std::string file_;
    size_t line_;
    size_t column_;
};

/**
 * @class SourceRange
 * @brief Representa un rango de código fuente (desde-hasta)
 * 
 * Útil para representar la extensión completa de un nodo AST
 * que puede abarcar múltiples líneas o tokens.
 */
class SourceRange {
public:
    SourceRange() : start_(), end_() {}
    
    SourceRange(SourceLocation start, SourceLocation end)
        : start_(std::move(start)), end_(std::move(end)) {}
    
    SourceRange(const SourceRange& other)
        : start_(other.start_), end_(other.end_) {}
    
    SourceRange& operator=(const SourceRange& other) {
        if (this != &other) {
            start_ = other.start_;
            end_ = other.end_;
        }
        return *this;
    }
    
    const SourceLocation& getStart() const { return start_; }
    const SourceLocation& getEnd() const { return end_; }
    
    /**
     * @brief Verifica si el rango es válido
     */
    bool isValid() const { return start_.isValid() && end_.isValid(); }
    
    /**
     * @brief Representación en string
     */
    std::string toString() const {
        if (!isValid()) {
            return "<unknown>";
        }
        return start_.toString() + "-" + end_.toString();
    }
    
    /**
     * @brief Obtiene el número de líneas que abarca
     */
    size_t getLineCount() const {
        if (!isValid()) return 0;
        return end_.getLine() - start_.getLine() + 1;
    }
    
private:
    SourceLocation start_;
    SourceLocation end_;
};

/**
 * @brief Crea una ubicación combinada
 */
inline SourceLocation combineLocations(const SourceLocation& loc1, const SourceLocation& loc2) {
    if (!loc1.isValid()) return loc2;
    if (!loc2.isValid()) return loc1;
    return SourceLocation(loc1.getFile(), loc1.getLine(), loc1.getColumn());
}

} // namespace aether

#endif // AETHER_SOURCE_LOCATION_H
