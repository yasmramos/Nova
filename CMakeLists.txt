cmake_minimum_required(VERSION 3.20)
project(NovaLanguage LANGUAGES CXX VERSION 0.2.0 DESCRIPTION "El lenguaje de programación más avanzado del mundo")

# Estándar C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Export compile_commands.json para LSP y tooling
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Policy para buscar LLVM
if(POLICY CMP0091)
    cmake_policy(SET CMP0091 NEW)
endif()

# ============================================
# DEPENDENCIAS EXTERNAS
# ============================================

# Usar FetchContent para dependencias (más simple que vcpkg/conan)
include(FetchContent)

# 1. LLVM (Backend de compilación)
FetchContent_Declare(
    llvm
    GIT_REPOSITORY https://github.com/llvm/llvm-project.git
    GIT_TAG        llvmorg-18.1.8
)

# Configuración de LLVM
set(BUILD_SHARED_LIBS OFF CACHE BOOL "")
set(LLVM_ENABLE_ASSERTIONS ON CACHE BOOL "Enable assertions")
set(LLVM_ENABLE_TERMINFO OFF CACHE BOOL "")
set(LLVM_ENABLE_OCAMLDOC OFF CACHE BOOL "")
set(LLVM_ENABLE_BINDINGS OFF CACHE BOOL "")
set(LLVM_INCLUDE_BENCHMARKS OFF CACHE BOOL "")
set(LLVM_INCLUDE_TESTS OFF CACHE BOOL "")
set(LLVM_INCLUDE_EXAMPLES OFF CACHE BOOL "")

FetchContent_MakeAvailable(llvm)

# Verificar que LLVM se encontró correctamente
if(NOT TARGET LLVM)
    message(FATAL_ERROR "LLVM no se encontró correctamente. Verifica la instalación.")
endif()

# 2. ANTLR4 Runtime (Lexer/Parser)
FetchContent_Declare(
    antlr4
    GIT_REPOSITORY https://github.com/antlr/antlr4.git
    GIT_TAG        4.13.1
)

set(ANTLR4_BUILD_TESTS OFF CACHE BOOL "")
set(ANTLR4_BUILD_CPP_TESTS OFF CACHE BOOL "")
set(ANTLR4_BUILD_JAVA_TESTS OFF CACHE BOOL "")
set(ANTLR4_BUILD_PYTHON_TESTS OFF CACHE BOOL "")

FetchContent_MakeAvailable(antlr4)

# Verificar que ANTLR4 se encontró correctamente
if(NOT TARGET antlr4-runtime)
    message(FATAL_ERROR "ANTLR4 runtime no se encontró correctamente.")
endif()

# ============================================
# CONFIGURACIÓN DEL PROYECTO
# ============================================

# Directorios de inclusión
include_directories(
    ${CMAKE_SOURCE_DIR}/src/ast
    ${CMAKE_SOURCE_DIR}/src/parser
    ${CMAKE_SOURCE_DIR}/src/sema
    ${CMAKE_SOURCE_DIR}/src/codegen
    ${CMAKE_SOURCE_DIR}/src/driver
    ${CMAKE_SOURCE_DIR}/src/utils
    ${ANTLR4_INCLUDE_DIRS}
)

# Archivos de gramática ANTLR4
file(GLOB NOVA_GRAMMAR_FILES "${CMAKE_SOURCE_DIR}/src/grammar/*.g4")

# ============================================
# GENERACIÓN AUTOMÁTICA DE LEXER/PARSER
# ============================================

# Función helper para generar parser ANTLR4
function(add_antlr_target target_name grammar_file output_dir)
    # Obtener nombre del archivo sin extensión
    get_filename_component(grammar_name ${grammar_file} NAME_WE)
    
    # Archivos generados
    set(generated_files
        ${output_dir}/${grammar_name}Lexer.h
        ${output_dir}/${grammar_name}Lexer.cpp
        ${output_dir}/${grammar_name}Parser.h
        ${output_dir}/${grammar_name}Parser.cpp
        ${output_dir}/${grammar_name}BaseListener.h
        ${output_dir}/${grammar_name}BaseListener.cpp
        ${output_dir}/${grammar_name}Listener.h
        ${output_dir}/${grammar_name}Listener.cpp
        ${output_dir}/${grammar_name}BaseVisitor.h
        ${output_dir}/${grammar_name}BaseVisitor.cpp
        ${grammar_name}Visitor.h
        ${grammar_name}Visitor.cpp
    )
    
    # Comando para generar los archivos
    add_custom_command(
        OUTPUT ${generated_files}
        COMMAND ${ANTLR4_JAR_FILE}
                -Xexact-output-dir
                -Dlanguage=Cpp
                -visitor
                -listener
                -o ${output_dir}
                -package nova
                ${grammar_file}
        DEPENDS ${grammar_file}
        COMMENT "Generando parser ANTLR4 para ${grammar_name}"
    )
    
    # Crear fuente headers para el target
    set(${target_name}_SOURCES ${generated_files} PARENT_SCOPE)
endfunction()

# Generar parser para la gramática principal
add_antlr_target(nova_parser 
    ${CMAKE_SOURCE_DIR}/src/grammar/Nova.g4 
    ${CMAKE_SOURCE_DIR}/src/parser
)

# ============================================
# COMPILACIÓN DEL COMPILADOR
# ============================================

# Fuentes del AST
set(NOVA_AST_SOURCES
    ${CMAKE_SOURCE_DIR}/src/ast/Node.cpp
    ${CMAKE_SOURCE_DIR}/src/ast/Types.cpp
)

# Fuentes del analizador semántico
set(NOVA_SEMA_SOURCES
    ${CMAKE_SOURCE_DIR}/src/sema/ASTBuilder.cpp
    ${CMAKE_SOURCE_DIR}/src/sema/SymbolTable.cpp
    ${CMAKE_SOURCE_DIR}/src/sema/TypeChecker.cpp
)

# Fuentes del generador de código LLVM
set(NOVA_CODEGEN_SOURCES
    ${CMAKE_SOURCE_DIR}/src/codegen/CodeGenContext.cpp
    ${CMAKE_SOURCE_DIR}/src/codegen/CodegenVisitor.cpp
)

# Fuentes del driver
set(NOVA_DRIVER_SOURCES
    ${CMAKE_SOURCE_DIR}/src/driver/main.cpp
)

# Fuentes de utilidades
set(NOVA_UTILS_SOURCES
    ${CMAKE_SOURCE_DIR}/src/utils/SourceLocation.cpp
    ${CMAKE_SOURCE_DIR}/src/utils/Error.cpp
)

# Crear librería estática del compilador
add_library(nova-lib STATIC
    ${NOVA_AST_SOURCES}
    ${NOVA_SEMA_SOURCES}
    ${NOVA_CODEGEN_SOURCES}
    ${NOVA_UTILS_SOURCES}
    ${nova_parser_SOURCES}
)

target_link_libraries(nova-lib
    PRIVATE
        antlr4-runtime
        LLVM
)

target_compile_features(nova-lib PRIVATE cxx_std_20)

# Crear ejecutable del compilador
add_executable(nova-compiler
    ${NOVA_DRIVER_SOURCES}
)

target_link_libraries(nova-compiler
    PRIVATE
        nova-lib
        antlr4-runtime
        LLVM
)

target_compile_features(nova-compiler PRIVATE cxx_std_20)

# ============================================
# OPCIONES DE COMPILACIÓN
# ============================================

option(NOVA_ENABLE_ASSERTIONS "Habilitar aserciones en tiempo de ejecución" ON)
option(NOVA_ENABLE_WARNINGS "Habilitar advertencias del compilador" ON)

if(NOVA_ENABLE_WARNINGS)
    if(MSVC)
        target_compile_options(nova-lib PRIVATE /W4)
        target_compile_options(nova-compiler PRIVATE /W4)
    else()
        target_compile_options(nova-lib PRIVATE 
            -Wall -Wextra -Wpedantic -Werror=return-type
            -Werror=uninitialized -Werror=maybe-uninitialized
        )
        target_compile_options(nova-compiler PRIVATE 
            -Wall -Wextra -Wpedantic -Werror=return-type
            -Werror=uninitialized -Werror=maybe-uninitialized
        )
    endif()
endif()

if(NOT NOVA_ENABLE_ASSERTIONS)
    target_compile_definitions(nova-lib PRIVATE NDEBUG)
    target_compile_definitions(nova-compiler PRIVATE NDEBUG)
endif()

# ============================================
# INSTALACIÓN
# ============================================

install(TARGETS nova-compiler nova-lib
    RUNTIME DESTINATION bin
    ARCHIVE DESTINATION lib
)

# Exportar para uso externo
install(EXPORT NovaTargets
    FILE NovaCompilerTargets.cmake
    NAMESPACE Nova::
    DESTINATION lib/cmake/Nova
)

# ============================================
# DOCUMENTACIÓN
# ============================================

# Generar documentación con Doxygen (opcional)
find_package(Doxygen)
if(DOXYGEN_FOUND)
    configure_file(${CMAKE_SOURCE_DIR}/docs/Doxyfile.in 
                  ${CMAKE_SOURCE_DIR}/docs/Doxyfile @ONLY)
    add_custom_target(doc ${DOXYGEN_EXECUTABLE} ${CMAKE_SOURCE_DIR}/docs/Doxyfile
                      WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/docs
                      COMMENT "Generando documentación con Doxygen" VERBATIM)
endif()

# ============================================
# TESTING (GoogleTest)
# ============================================

# Habilitar testing
enable_testing()

# Aquí se añadirían los tests cuando estén implementados
# find_package(GTest REQUIRED)
# add_subdirectory(tests)

message(STATUS "==================================")
message(STATUS "Configuración de Nova Language")
message(STATUS "==================================")
message(STATUS "LLVM Version:        ${LLVM_PACKAGE_VERSION}")
message(STATUS "ANTLR4 Version:      4.13.1")
message(STATUS "C++ Standard:        20")
message(STATUS "Build Type:          ${CMAKE_BUILD_TYPE}")
message(STATUS "AST Sources:         ${NOVA_AST_SOURCES}")
message(STATUS "SEMA Sources:        ${NOVA_SEMA_SOURCES}")
message(STATUS "CodeGen Sources:     ${NOVA_CODEGEN_SOURCES}")
message(STATUS "==================================")
