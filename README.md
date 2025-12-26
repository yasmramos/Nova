# Nova Programming Language

## El Lenguaje de Programación Más Avanzado del Mundo

Nova es un lenguaje de programación de propósito general diseñado para ser el más avanzado del mundo, combinando las mejores características de los lenguajes modernos con un rendimiento excepcional.

## Características Principales

### Sistema de Tipos Avanzado
- **Inferencia de tipos global** mediante el algoritmo Hindley-Milner
- **Null safety**: No existe `null`, solo `Option<T>`
- **Algebraic Data Types (ADTs)**: Enums con datos asociados
- **Pattern matching exhaustivo** con expresiones completas
- **Ownership y Borrowing** para seguridad de memoria sin GC

### Rendimiento Nativo
- **Compilación nativa** utilizando LLVM como backend
- **Optimizaciones avanzadas** en tiempo de compilación
- **Generación de código optimizada** para múltiples arquitecturas

### Características Modernas
- **Async/Await** nativo para programación asíncrona
- **Metaprogramación** mediante macros higénicos
- **Traits** similares a Rust y Haskell
- **Generics** con restricciones de traits

## Arquitectura del Compilador

```
src/
├── grammar/          # Gramáticas ANTLR4
├── ast/              # Definiciones del AST y sistema de tipos
├── parser/           # Parser generado por ANTLR4
├── sema/             # Análisis semántico
├── codegen/          # Generación de código LLVM
├── driver/           # Punto de entrada del compilador
└── utils/            # Utilidades compartidas
```

## Tecnologías

- **ANTLR4**: Generador de lexer y parser
- **LLVM**: Backend de compilación y optimización
- **C++20**: Lenguaje de implementación del compilador

## Requisitos

- CMake 3.20+
- C++20 compatible compiler (GCC 12+, Clang 15+)
- LLVM 18+
- ANTLR4 Runtime 4.13+

## Compilación

```bash
# Clonar el repositorio
git clone https://github.com/yasmramos/Nova.git
cd Nova

# Crear directorio de construcción
mkdir build && cd build

# Configurar con CMake
cmake ..

# Compilar
cmake --build .

# O usando make
make -j$(nproc)
```

## Uso del Compilador

```bash
# Compilar un archivo
./nova-compiler programa.nova

# Con optimización
./nova-compiler -O2 -o programa programa.nova

# Generar LLVM IR
./nova-compiler --emit-llvm programa.nova

# Ver ayuda
./nova-compiler --help
```

## Ejemplo de Código Nova

```nova
// Definición de tipos algebraicos
type Shape = 
  | Circle(radius: f64)
  | Rect(width: f64, height: f64)
  | Triangle(a: f64, b: f64, c: f64)

// Función con pattern matching
func area(s: Shape) -> f64 {
  return match s {
    Circle(r) => 3.14159 * r * r
    Rect(w, h) => w * h
    Triangle(a, b, c) => {
      let s = (a + b + c) / 2.0
      sqrt(s * (s - a) * (s - b) * (s - c))
    }
  }
}

// Null safety
func divide(a: f64, b: f64) -> Option<f64> {
  if b == 0.0 {
    return None
  }
  return Some(a / b)
}

// Concurrency con async/await
async func fetchData(url: String) -> Result<String, String> {
  let response = await http.get(url)
  return Ok(response.body)
}
```

## Estado del Proyecto

⚠️ **En Desarrollo** ⚠️

Este proyecto se encuentra en las fases iniciales de desarrollo. Actualmente estamos estableciendo la infraestructura básica del compilador.

### Fases de Desarrollo

1. ✅ Fase 1: Setup y Arquitectura (en progreso)
2. ⏳ Fase 2: Frontend - Lexer y Parser
3. ⏳ Fase 3: Sistema de Tipos
4. ⏳ Fase 4: Análisis Semántico
5. ⏳ Fase 5: Generación de Código LLVM
6. ⏳ Fase 6: Optimizaciones
7. ⏳ Fase 7: Librería Estándar

## Contribuir

¡Las contribuciones son bienvenidas! Por favor, lee nuestras guías de contribución antes de enviar pull requests.

## Licencia

MIT License

## Autor

Yasmín Ramos (@yasmramos)
---

*"Code is poetry written for machines."* - Nova Team
