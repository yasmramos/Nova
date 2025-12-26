/**
 * @file main.cpp
 * @brief Punto de entrada del compilador Aether
 * 
 * El compilador del lenguaje de programación más avanzado del mundo
 */

#include <iostream>
#include <string>
#include <vector>
#include <filesystem>
#include <cxxopts.hpp>
#include "Error.h"
#include "SourceLocation.h"

namespace fs = std::filesystem;

void printBanner() {
    std::cout << R"(
    ╔═══════════════════════════════════════════════════════════════╗
    ║                                                               ║
    ║   ██████╗ ██████╗  █████╗ ██╗     ██╗     ███████╗██╗  ██╗   ║
    ║  ██╔════╝██╔═══██╗██╔══██╗██║     ██║     ██╔════╝╚██╗██╔╝   ║
    ║  ██║     ██║   ██║███████║██║     ██║     █████╗   ╚███╔╝    ║
    ║  ██║     ██║   ██║██╔══██║██║     ██║     ██╔══╝   ██╔██╗    ║
    ║  ╚██████╗╚██████╔╝██║  ██║███████╗███████╗███████╗██╔╝ ██╗   ║
    ║   ╚═════╝ ╚═════╝ ╚═╝  ╚═╝╚══════╝╚══════╝╚══════╝╚═╝  ╚═╝   ║
    ║                                                               ║
    ║                    LENGUAJE DE PROGRAMACIÓN                   ║
    ║                    COMPILADOR v0.1.0                          ║
    ║                                                               ║
    ╚═══════════════════════════════════════════════════════════════╝
    )" << std::endl;
}

void printHelp() {
    std::cout << R"(
USO: aether-compiler [OPCIONES] ARCHIVOS...

OPCIONES:
    -h, --help              Muestra esta ayuda
    -v, --version           Muestra la versión del compilador
    -o, --output <archivo>  Especifica el archivo de salida
    -O, --optimize <nivel>  Nivel de optimización (0-3)
    --emit-llvm             Genera código LLVM IR
    --emit-asm              Genera código ensamblador
    --emit-obj              Genera código objeto
    --print-ast             Imprime el AST generado
    --verbose               Modo verboso
    --target <triplet>      Arquitectura objetivo (x86_64, arm64, etc.)

EJEMPLOS:
    aether-compiler programa.aether
    aether-compiler -O2 -o programa programa.aether
    aether-compiler --emit-llvm programa.aether
    )" << std::endl;
}

int main(int argc, char* argv[]) {
    printBanner();
    
    // Configuración de opciones de línea de comandos
    cxxopts::Options options("aether-compiler", "Compilador del lenguaje Aether");
    
    options.add_options()
        ("h,help", "Muestra ayuda", cxxopts::value<bool>())
        ("v,version", "Muestra versión", cxxopts::value<bool>())
        ("o,output", "Archivo de salida", cxxopts::value<std::string>())
        ("O,optimize", "Nivel de optimización", cxxopts::value<int>()->default_value("0"))
        ("emit-llvm", "Genera LLVM IR", cxxopts::value<bool>())
        ("emit-asm", "Genera ensamblador", cxxopts::value<bool>())
        ("emit-obj", "Genera código objeto", cxxopts::value<bool>())
        ("print-ast", "Imprime el AST", cxxopts::value<bool>())
        ("verbose", "Modo verboso", cxxopts::value<bool>())
        ("target", "Arquitectura objetivo", cxxopts::value<std::string>()->default_value("x86_64-unknown-linux-gnu"))
        ("input", "Archivos de entrada", cxxopts::value<std::vector<std::string>>())
    ;
    
    // Positional arguments para archivos de entrada
    options.add_options("Positional")
        ("input", "Archivos .aether a compilar", cxxopts::value<std::vector<std::string>>())
    ;
    
    options.parse_positional({"input"});
    
    auto result = options.parse(argc, argv);
    
    // Procesar opciones especiales
    if (result.count("help")) {
        printHelp();
        return 0;
    }
    
    if (result.count("version")) {
        std::cout << "Aether Compiler v0.1.0" << std::endl;
        std::cout << "LLVM Version: " << LLVM_PACKAGE_VERSION << std::endl;
        std::cout << "ANTLR4 Version: 4.13.1" << std::endl;
        return 0;
    }
    
    // Verificar archivos de entrada
    if (!result.count("input")) {
        std::cerr << "Error: No se especificaron archivos de entrada." << std::endl;
        printHelp();
        return 1;
    }
    
    // Obtener archivos de entrada
    std::vector<std::string> inputFiles = result["input"].as<std::vector<std::string>>();
    
    // Configuración de compilación
    struct CompileConfig {
        std::vector<std::string> inputFiles;
        std::string outputFile;
        int optimizationLevel;
        bool emitLLVM;
        bool emitASM;
        bool emitObj;
        bool printAST;
        bool verbose;
        std::string targetTriple;
    } config;
    
    config.inputFiles = inputFiles;
    
    if (result.count("output")) {
        config.outputFile = result["output"].as<std::string>();
    }
    
    config.optimizationLevel = result["optimize"].as<int>();
    config.emitLLVM = result.count("emit-llvm");
    config.emitASM = result.count("emit-asm");
    config.emitObj = result.count("emit-obj");
    config.printAST = result.count("print-ast");
    config.verbose = result.count("verbose");
    config.targetTriple = result["target"].as<std::string>();
    
    // Imprimir configuración si está en modo verbose
    if (config.verbose) {
        std::cout << "\n[INFO] Configuración de compilación:" << std::endl;
        std::cout << "  - Archivos de entrada: " << config.inputFiles.size() << std::endl;
        for (const auto& file : config.inputFiles) {
            std::cout << "    * " << file << std::endl;
        }
        std::cout << "  - Nivel de optimización: " << config.optimizationLevel << std::endl;
        std::cout << "  - Target: " << config.targetTriple << std::endl;
    }
    
    // Aquí se implementará la lógica de compilación real
    std::cout << "\n[INFO] Compilando " << config.inputFiles.size() << " archivo(s)..." << std::endl;
    
    // Placeholder: Compilación no implementada aún
    std::cout << "\n[ADVERTENCIA] El compilador está en desarrollo." << std::endl;
    std::cout << "             La generación de código estará disponible pronto." << std::endl;
    
    return 0;
}
