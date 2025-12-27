/**
 * @file Error.h
 * @brief Sistema de manejo de errores y advertencias
 * @author Yasmany Ramos García
 * 
 * Proporciona herramientas para reportar errores semánticos,
 * sintácticos y léxicos con información precisa de ubicación.
 */

#ifndef NOVA_ERROR_H
#define NOVA_ERROR_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <optional>
#include "SourceLocation.h"

namespace nova {

/**
 * @enum Severity
 * @brief Define la severidad de un diagnóstico
 */
enum class Severity {
    Error,       // Error fatal que impide la compilación
    Warning,     // Advertencia que no impide la compilación
    Note,        // Información adicional
    Fatal        // Error crítico que detiene inmediatamente
};

/**
 * @enum ErrorCode
 * @brief Códigos de error predefinidos para el compilador
 */
enum class ErrorCode {
    // Errores léxicos
    LexerInvalidCharacter,
    LexerUnterminatedString,
    LexerUnterminatedComment,
    LexerInvalidNumber,
    
    // Errores sintácticos
    ParserUnexpectedToken,
    ParserExpectedToken,
    ParserMissingSemicolon,
    ParserInvalidExpression,
    ParserUnmatchedParen,
    
    // Errores semánticos
    SemanticUnknownType,
    SemanticTypeMismatch,
    SemanticDuplicateDefinition,
    SemanticUndefinedVariable,
    SemanticAssignmentMismatch,
    SemanticInvalidOperation,
    SemanticIncompatibleTypes,
    SemanticNonExhaustiveMatch,
    
    // Errores de análisis de flujo
    FlowUnreachableCode,
    FlowInfiniteLoop,
    FlowUninitializedVariable,
    
    // Errores de generación de código
    CodegenUnsupportedType,
    CodegenInternalError,
    
    // Errores de sistema
    IOError,
    MemoryError,
    
    // Custom (definido por usuario)
    Custom
};

/**
 * @struct Diagnostic
 * @brief Representa un diagnóstico (error o advertencia) del compilador
 */
struct Diagnostic {
    Severity severity;
    ErrorCode code;
    SourceLocation location;
    std::string message;
    std::optional<SourceLocation> primaryLabel;
    std::vector<SourceLocation> secondaryLocations;
    std::string rule;
    
    Diagnostic()
        : severity(Severity::Error), code(ErrorCode::Custom), 
          location(), message() {}
    
    Diagnostic(Severity sev, ErrorCode ec, SourceLocation loc, std::string msg)
        : severity(sev), code(ec), location(std::move(loc)), 
          message(std::move(msg)) {}
    
    /**
     * @brief Convierte el diagnóstico a string formateado
     */
    std::string toString() const {
        std::ostringstream oss;
        
        // Prefijo según severidad
        switch (severity) {
            case Severity::Error:
                oss << "Error";
                break;
            case Severity::Warning:
                oss << "Warning";
                break;
            case Severity::Note:
                oss << "Note";
                break;
            case Severity::Fatal:
                oss << "Fatal";
                break;
        }
        
        // Código de error
        oss << " [" << getErrorCodeString() << "]";
        
        // Ubicación
        if (location.isValid()) {
            oss << " at " << location.toString();
        }
        
        // Mensaje
        oss << ": " << message;
        
        return oss.str();
    }
    
    /**
     * @brief Obtiene el nombre del código de error
     */
    std::string getErrorCodeString() const {
        switch (code) {
            case ErrorCode::LexerInvalidCharacter: return "E1001";
            case ErrorCode::LexerUnterminatedString: return "E1002";
            case ErrorCode::LexerUnterminatedComment: return "E1003";
            case ErrorCode::LexerInvalidNumber: return "E1004";
            case ErrorCode::ParserUnexpectedToken: return "E2001";
            case ErrorCode::ParserExpectedToken: return "E2002";
            case ErrorCode::ParserMissingSemicolon: return "E2003";
            case ErrorCode::ParserInvalidExpression: return "E2004";
            case ErrorCode::ParserUnmatchedParen: return "E2005";
            case ErrorCode::SemanticUnknownType: return "E3001";
            case ErrorCode::SemanticTypeMismatch: return "E3002";
            case ErrorCode::SemanticDuplicateDefinition: return "E3003";
            case ErrorCode::SemanticUndefinedVariable: return "E3004";
            case ErrorCode::SemanticAssignmentMismatch: return "E3005";
            case ErrorCode::SemanticInvalidOperation: return "E3006";
            case ErrorCode::SemanticIncompatibleTypes: return "E3007";
            case ErrorCode::SemanticNonExhaustiveMatch: return "E3008";
            case ErrorCode::FlowUnreachableCode: return "E4001";
            case ErrorCode::FlowInfiniteLoop: return "E4002";
            case ErrorCode::FlowUninitializedVariable: return "E4003";
            case ErrorCode::CodegenUnsupportedType: return "E5001";
            case ErrorCode::CodegenInternalError: return "E5002";
            case ErrorCode::IOError: return "E6001";
            case ErrorCode::MemoryError: return "E6002";
            case ErrorCode::Custom: return "E0000";
            default: return "E0000";
        }
    }
};

/**
 * @class ErrorHandler
 * @brief Manejador centralizado de errores y advertencias
 * 
 * Esta clase actúa como el repositorio central de todos los
 * diagnósticos generados durante la compilación.
 */
class ErrorHandler {
public:
    ErrorHandler() : errorCount_(0), warningCount_(0), fatalCount_(0) {}
    
    /**
     * @brief Reporta un error
     */
    void reportError(ErrorCode code, SourceLocation loc, const std::string& message) {
        Diagnostic diag(Severity::Error, code, loc, message);
        diagnostics_.push_back(diag);
        errorCount_++;
        
        if (shouldPrintImmediate()) {
            printDiagnostic(diag);
        }
    }
    
    /**
     * @brief Reporta una advertencia
     */
    void reportWarning(ErrorCode code, SourceLocation loc, const std::string& message) {
        Diagnostic diag(Severity::Warning, code, loc, message);
        diagnostics_.push_back(diag);
        warningCount_++;
        
        if (shouldPrintImmediate()) {
            printDiagnostic(diag);
        }
    }
    
    /**
     * @brief Reporta una nota informativa
     */
    void reportNote(SourceLocation loc, const std::string& message) {
        Diagnostic diag(Severity::Note, ErrorCode::Custom, loc, message);
        diagnostics_.push_back(diag);
    }
    
    /**
     * @brief Reporta un error fatal
     */
    void reportFatal(ErrorCode code, SourceLocation loc, const std::string& message) {
        Diagnostic diag(Severity::Fatal, code, loc, message);
        diagnostics_.push_back(diag);
        fatalCount_++;
        
        printDiagnostic(diag);
        throw std::runtime_error("Compilación abortada debido a error fatal");
    }
    
    /**
     * @brief Reporta un error de tipo semántico
     */
    void typeError(SourceLocation loc, const std::string& message) {
        reportError(ErrorCode::SemanticTypeMismatch, loc, message);
    }
    
    /**
     * @brief Reporta un error de tipo desconocido
     */
    void unknownTypeError(SourceLocation loc, const std::string& typeName) {
        std::ostringstream oss;
        oss << "Unknown type '" << typeName << "'";
        reportError(ErrorCode::SemanticUnknownType, loc, oss.str());
    }
    
    /**
     * @brief Reporta variable no definida
     */
    void undefinedVariableError(SourceLocation loc, const std::string& varName) {
        std::ostringstream oss;
        oss << "Undefined variable '" << varName << "'";
        reportError(ErrorCode::SemanticUndefinedVariable, loc, oss.str());
    }
    
    /**
     * @brief Reporta definición duplicada
     */
    void duplicateDefinitionError(SourceLocation loc, const std::string& name) {
        std::ostringstream oss;
        oss << "Duplicate definition of '" << name << "'";
        reportError(ErrorCode::SemanticDuplicateDefinition, loc, oss.str());
    }
    
    /**
     * @brief Reporta error de concordancia de tipos
     */
    void typeMismatchError(SourceLocation loc, const std::string& expected, const std::string& found) {
        std::ostringstream oss;
        oss << "Type mismatch: expected '" << expected << "', found '" << found << "'";
        reportError(ErrorCode::SemanticTypeMismatch, loc, oss.str());
    }
    
    /**
     * @brief Obtiene todos los diagnósticos
     */
    const std::vector<Diagnostic>& getDiagnostics() const { return diagnostics_; }
    
    /**
     * @brief Verifica si hay errores
     */
    bool hasErrors() const { return errorCount_ > 0 || fatalCount_ > 0; }
    
    /**
     * @brief Obtiene el conteo de errores
     */
    size_t getErrorCount() const { return errorCount_; }
    
    /**
     * @brief Obtiene el conteo de advertencias
     */
    size_t getWarningCount() const { return warningCount_; }
    
    /**
     * @brief Limpia todos los diagnósticos
     */
    void clear() {
        diagnostics_.clear();
        errorCount_ = 0;
        warningCount_ = 0;
        fatalCount_ = 0;
    }
    
    /**
     * @brief Imprime el resumen de errores
     */
    void printSummary() const {
        std::cout << "\n";
        
        if (fatalCount_ > 0) {
            std::cout << "[FATAL] " << fatalCount_ << " error(s) fatales\n";
        }
        
        if (errorCount_ > 0) {
            std::cout << "[ERROR] " << errorCount_ << " error(s)\n";
        }
        
        if (warningCount_ > 0) {
            std::cout << "[WARN]  " << warningCount_ << " advertencia(s)\n";
        }
        
        if (!hasErrors() && warningCount_ == 0) {
            std::cout << "[OK]    Compilación exitosa sin errores\n";
        }
    }
    
private:
    std::vector<Diagnostic> diagnostics_;
    size_t errorCount_;
    size_t warningCount_;
    size_t fatalCount_;
    
    /**
     * @brief Imprime un diagnóstico individual
     */
    void printDiagnostic(const Diagnostic& diag) const {
        // Por ahora, simplemente imprimimos el diagnóstico
        // En el futuro, podríamos usar colores ANSI
        std::cerr << diag.toString() << std::endl;
    }
    
    /**
     * @brief Decide si imprimir inmediatamente
     */
    bool shouldPrintImmediate() const {
        // Por ahora siempre imprimimos inmediatamente
        // Podría ser configurable
        return true;
    }
};

/**
 * @brief Clase para formatear mensajes de error con variables
 */
class ErrorBuilder {
public:
    ErrorBuilder(ErrorHandler& handler, ErrorCode code, SourceLocation loc)
        : handler_(handler), code_(code), location_(loc), message_() {}
    
    template<typename T>
    ErrorBuilder& operator<<(const T& value) {
        message_ << value;
        return *this;
    }
    
    void report() {
        handler_.reportError(code_, location_, message_.str());
    }
    
private:
    ErrorHandler& handler_;
    ErrorCode code_;
    SourceLocation location_;
    std::ostringstream message_;
};

} // namespace nova

#endif // NOVA_ERROR_H
