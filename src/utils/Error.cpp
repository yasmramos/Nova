/**
 * @file Error.cpp
 * @brief Implementación del sistema de manejo de errores
 * @author Yasmany Ramos García
 */

#include "Error.h"
#include <iostream>

namespace nova {

// Diagnostic methods
std::string Diagnostic::toString() const {
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

// ErrorHandler methods
void ErrorHandler::reportError(ErrorCode code, SourceLocation loc, const std::string& message) {
    Diagnostic diag(Severity::Error, code, loc, message);
    diagnostics_.push_back(diag);
    errorCount_++;
    
    if (shouldPrintImmediate()) {
        printDiagnostic(diag);
    }
}

void ErrorHandler::reportWarning(ErrorCode code, SourceLocation loc, const std::string& message) {
    Diagnostic diag(Severity::Warning, code, loc, message);
    diagnostics_.push_back(diag);
    warningCount_++;
    
    if (shouldPrintImmediate()) {
        printDiagnostic(diag);
    }
}

void ErrorHandler::reportNote(SourceLocation loc, const std::string& message) {
    Diagnostic diag(Severity::Note, ErrorCode::Custom, loc, message);
    diagnostics_.push_back(diag);
}

void ErrorHandler::reportFatal(ErrorCode code, SourceLocation loc, const std::string& message) {
    Diagnostic diag(Severity::Fatal, code, loc, message);
    diagnostics_.push_back(diag);
    fatalCount_++;
    
    printDiagnostic(diag);
    throw std::runtime_error("Compilación abortada debido a error fatal");
}

void ErrorHandler::printDiagnostic(const Diagnostic& diag) const {
    // Usar colores ANSI si está disponible
    bool useColors = isatty(fileno(stderr));
    
    std::string prefix;
    std::string reset = useColors ? "\033[0m" : "";
    std::string color;
    
    switch (diag.severity) {
        case Severity::Error:
            prefix = "error";
            color = useColors ? "\033[31m" : ""; // Rojo
            break;
        case Severity::Warning:
            prefix = "warning";
            color = useColors ? "\033[33m" : ""; // Amarillo
            break;
        case Severity::Note:
            prefix = "note";
            color = useColors ? "\033[36m" : ""; // Cyan
            break;
        case Severity::Fatal:
            prefix = "fatal error";
            color = useColors ? "\033[35m" : ""; // Magenta
            break;
    }
    
    std::cerr << color << prefix << "\033[0m";
    
    if (diag.location.isValid()) {
        std::cerr << " [" << diag.getErrorCodeString() << "]";
        std::cerr << " at " << diag.location.toString();
    }
    
    std::cerr << ": " << diag.message << std::endl;
}

bool ErrorHandler::shouldPrintImmediate() const {
    return true;
}

} // namespace nova
