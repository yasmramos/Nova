/**
 * Gramática ANTLR4 para el Lenguaje Nova
 * 
 * El lenguaje de programación más avanzado del mundo
 * 
 * Características soportadas:
 * - Sistema de tipos con inferencia
 * - ADTs (Algebraic Data Types)
 * - Pattern Matching
 * - Async/Await
 * - Null safety
 * - Ownership semantics
 */
grammar Nova;

// ============================================
// REGLAS DE ENTRADA
// ============================================

// Programa fuente completo
sourceFile
    : moduleDeclaration? importDeclaration* topLevelDeclaration* EOF
    ;

// Declaración de módulo
moduleDeclaration
    : 'module' qualifiedName ';'
    ;

// Declaraciones de importación
importDeclaration
    : 'import' qualifiedName ('as' identifier)? ';'
    | 'use' qualifiedName ';'
    ;

// ============================================
// DECLARACIONES DE ALTO NIVEL
// ============================================

topLevelDeclaration
    : functionDeclaration
    | structDeclaration
    | traitDeclaration
    | implDeclaration
    | enumDeclaration
    | typeAliasDeclaration
    | constantDeclaration
    | externDeclaration
    ;

// ============================================
// FUNCIONES
// ============================================

functionDeclaration
    : 'func' identifier typeParameterList? functionParameters returnType? ('where' constraintList)? block
    | 'async' 'func' identifier typeParameterList? functionParameters returnType? ('where' constraintList)? block
    ;

functionParameters
    : '(' parameterList? ')'
    ;

parameterList
    : parameter (',' parameter)*
    ;

parameter
    : identifier ':' type_ ('=' expression)?
    ;

returnType
    : '->' type_
    ;

// ============================================
// TIPOS DE DATOS ESTRUCTURADOS
// ============================================

// Struct (similar a Rust)
structDeclaration
    : 'struct' identifier typeParameterList? ('where' constraintList)? '{' structField* '}'
    ;

structField
    : visibility? identifier ':' type_
    ;

// Trait (similar a Rust/Haskell)
traitDeclaration
    : 'trait' identifier typeParameterList? (':' identifierList)? '{' traitMethod* '}'
    ;

traitMethod
    : functionDeclaration
    | functionSignature
    ;

functionSignature
    : identifier typeParameterList? functionParameters returnType? ';'
    ;

// Implementación (impl)
implDeclaration
    : 'impl' typeParameterList? type_ ('for' type_)? '{' implMember* '}'
    ;

implMember
    : functionDeclaration
    | constantDeclaration
    ;

// Enum (Algebraic Data Types)
enumDeclaration
    : 'enum' identifier typeParameterList? ('where' constraintList)? '{' enumVariant* '}'
    ;

enumVariant
    : identifier ('(' typeList ')')?
    ;

// Alias de tipo
typeAliasDeclaration
    : 'type' identifier typeParameterList? '=' type_ ';'
    ;

// ============================================
// CONSTANTES Y VARIABLES
// ============================================

constantDeclaration
    : 'const' identifier ':' type_ '=' expression ';'
    ;

// ============================================
// DECLARACIONES EXTERNAS
// ============================================

externDeclaration
    : 'extern' 'func' identifier typeParameterList? functionParameters returnType? ';'
    | 'extern' 'C' '{' externFunction* '}'
    ;

externFunction
    : functionSignature
    ;

// ============================================
// TIPOS
// ============================================

type_
    : primitiveType
    | typeReference
    | genericType
    | functionType
    | tupleType
    | arrayType
    | referenceType
    | ownershipType
    ;

primitiveType
    : 'i8' | 'i16' | 'i32' | 'i64' | 'isize'
    | 'u8' | 'u16' | 'u32' | 'u64' | 'usize'
    | 'f32' | 'f64'
    | 'bool' | 'char' | 'str' | 'void'
    | 'type'
    ;

typeReference
    : qualifiedName typeArgumentList?
    ;

genericType
    : typeReference '<' typeList '>'
    ;

typeList
    : type_ (',' type_)*
    ;

functionType
    : 'fn' '(' typeList? ')' returnType?
    ;

tupleType
    : '(' (type_ (',' type_)+)? ')'
    ;

arrayType
    : '[' type_ ';' expression ']'
    ;

referenceType
    : '&' 'mut'? lifetime? type_
    ;

ownershipType
    : identifier typeParameterList?
    ;

// ============================================
// TIPOS GENÉRICOS Y POLIMORFISMO
// ============================================

typeParameterList
    : '<' typeParameter (',' typeParameter)* '>'
    ;

typeParameter
    : identifier (':' identifierList)?
    ;

constraintList
    : constraint (',' constraint)*
    ;

constraint
    : identifier ( '(' typeList ')' )?
    | '?' type_
    ;

identifierList
    : identifier (',' identifier)*
    ;

lifetime
    : '\'' identifier
    ;

// ============================================
// EXPRESIONES
// ============================================

expression
    : literalExpression
    | identifierExpression
    | blockExpression
    | lambdaExpression
    | tupleExpression
    | arrayExpression
    | structExpression
    | enumVariantExpression
    | callExpression
    | fieldExpression
    | tupleIndexExpression
    | unaryExpression
    | binaryExpression
    | arithmeticExpression
    | comparisonExpression
    | logicalExpression
    | bitwiseExpression
    | assignmentExpression
    | compoundAssignmentExpression
    | ifExpression
    | matchExpression
    | loopExpression
    | breakExpression
    | continueExpression
    | returnExpression
    | awaitExpression
    | rangeExpression
    | castExpression
    | unsafeExpression
    | parenthesizedExpression
    ;

parenthesizedExpression
    : '(' expression ')'
    ;

// Literales
literalExpression
    : integerLiteral
    | floatLiteral
    | booleanLiteral
    | characterLiteral
    | stringLiteral
    | nullLiteral
    ;

integerLiteral
    : DecimalLiteral | HexLiteral | OctalLiteral | BinaryLiteral
    ;

floatLiteral
    : DecimalFloatLiteral
    ;

booleanLiteral
    : 'true' | 'false'
    ;

characterLiteral
    : '\'' (~'\'' | EscapeSequence) '\''
    ;

stringLiteral
    : StringLiteral
    ;

nullLiteral
    : 'null'
    ;

// Identificadores
identifierExpression
    : identifier
    ;

// Bloques
blockExpression
    : block
    ;

block
    : '{' statement* expression? '}'
    ;

statement
    : declarationStatement
    | expressionStatement
    | assignmentStatement
    | ifStatement
    | loopStatement
    | matchStatement
    | jumpStatement
    ;

declarationStatement
    : variableDeclaration
    | constantDeclaration
    ;

variableDeclaration
    : 'mut'? 'let' pattern '=' expression ';'
    | 'mut'? 'let' pattern ':' type_ ('=' expression)? ';'
    ;

pattern
    : identifierPattern
    | tuplePattern
    | structPattern
    | wildcardPattern
    ;

identifierPattern
    : 'mut'? identifier
    ;

tuplePattern
    : '(' pattern (',' pattern)* ')'
    ;

structPattern
    : identifier '{' (identifier ':' pattern (',' identifier ':' pattern)*)? '}'
    ;

wildcardPattern
    : '_'
    ;

expressionStatement
    : expression ';'
    ;

assignmentStatement
    : expression '=' expression ';'
    ;

// Lambdas / Closures
lambdaExpression
    : '|' parameterList? '|' ('->' type_)? block
    ;

// Tuplas
tupleExpression
    : '(' (expression (',' expression)+)? ')'
    ;

// Arrays
arrayExpression
    : '[' (expression (',' expression)*)? ']'
    ;

// Struct initialization
structExpression
    : typeReference '{' (fieldInitializer (',' fieldInitializer)*)? '}'
    ;

fieldInitializer
    : identifier ('=' expression)?
    ;

// Enum variant initialization
enumVariantExpression
    : identifier ('(' expression ')')?
    ;

// Function calls
callExpression
    : expression '(' argumentList? ')'
    ;

argumentList
    : expression (',' expression)*
    ;

// Field access
fieldExpression
    : expression '.' identifier
    ;

// Tuple index
tupleIndexExpression
    : expression '.' DecimalLiteral
    ;

// Operadores unarios
unaryExpression
    : '-' expression
    | '!' expression
    | '*' expression
    | '&' 'mut'? expression
    ;

// Operadores binarios
binaryExpression
    : expression 'as' type_
    ;

// Operadores aritméticos
arithmeticExpression
    : expression ('+' | '-' | '*' | '/' | '%' | '**') expression
    ;

// Operadores de comparación
comparisonExpression
    : expression ('==' | '!=' | '<' | '<=' | '>' | '>=') expression
    ;

// Operadores lógicos
logicalExpression
    : expression ('&&' | '||') expression
    ;

// Operadores bitwise
bitwiseExpression
    : expression ('&' | '|' | '^' | '<<' | '>>') expression
    ;

// Asignación compuesta
compoundAssignmentExpression
    : expression ('+=' | '-=' | '*=' | '/=' | '%=' | '&=' | '|=' | '^=' | '<<=' | '>>=') expression
    ;

// If expressions
ifExpression
    : 'if' condition block ('else' (block | ifExpression))?
    ;

ifStatement
    : 'if' condition block ('else' block)?
    ;

condition
    : expression
    | letCondition
    ;

letCondition
    : 'let' pattern '=' expression
    ;

// Match (Pattern Matching)
matchExpression
    : 'match' expression '{' matchArm* '}'
    ;

matchStatement
    : 'match' expression '{' matchArm* '}'
    ;

matchArm
    : pattern '=>' expression ','
    | pattern '=>' block
    ;

// Loops
loopExpression
    : loopBlock
    | whileBlock
    | forBlock
    ;

loopStatement
    : loopBlock
    | whileBlock
    | forBlock
    ;

loopBlock
    : 'loop' block
    ;

whileBlock
    : 'while' condition block
    ;

forBlock
    : 'for' pattern 'in' expression block
    ;

// Jump statements
jumpStatement
    : breakExpression
    | continueExpression
    | returnExpression
    ;

breakExpression
    : 'break' expression? ';'
    ;

continueExpression
    : 'continue' ';'
    ;

returnExpression
    : 'return' expression? ';'
    ;

// Async/Await
awaitExpression
    : 'await' expression
    ;

// Rangos
rangeExpression
    : expression ('..' | '...') expression?
    ;

// Cast
castExpression
    : expression ':' type_
    ;

// Unsafe blocks
unsafeExpression
    : 'unsafe' block
    ;

// ============================================
// VISIBILIDAD
// ============================================

visibility
    : 'pub' ('(' 'crate' ')' | '(' 'super' ')' | '(' identifier ')')?
    ;

// ============================================
// UTILIDADES
// ============================================

qualifiedName
    : identifier ('::' identifier)*
    ;

identifier
    : Identifier
    | Keyword
    ;

// ============================================
// REGLAS LÉXICAS
// ============================================

// Keywords (ordenados por prioridad)
Keyword
    : 'module' | 'import' | 'use' | 'as'
    | 'func' | 'async' | 'fn'
    | 'struct' | 'trait' | 'impl' | 'enum'
    | 'type' | 'const' | 'let' | 'mut'
    | 'if' | 'else' | 'match' | 'loop' | 'while' | 'for' | 'in'
    | 'return' | 'break' | 'continue' | 'await'
    | 'pub' | 'extern' | 'use' | 'where' | 'super' | 'crate'
    | 'true' | 'false' | 'null'
    | 'void' | 'bool' | 'char' | 'str' | 'type'
    | 'i8' | 'i16' | 'i32' | 'i64' | 'isize'
    | 'u8' | 'u16' | 'u32' | 'u64' | 'usize'
    | 'f32' | 'f64'
    | 'unsafe' | 'C'
    ;

// Identificadores
Identifier
    : [a-zA-Z_][a-zA-Z0-9_]*
    ;

// Literales numéricos
DecimalLiteral
    : [0-9][0-9_]* ('i8' | 'i16' | 'i32' | 'i64' | 'isize' | 'u8' | 'u16' | 'u32' | 'u64' | 'usize')?
    ;

HexLiteral
    : '0x' [0-9a-fA-F][0-9a-fA-F_]* ('i8' | 'i16' | 'i32' | 'i64' | 'isize' | 'u8' | 'u16' | 'u32' | 'u64' | 'usize')?
    ;

OctalLiteral
    : '0o' [0-7][0-7_]* ('i8' | 'i16' | 'i32' | 'i64' | 'isize' | 'u8' | 'u16' | 'u32' | 'u64' | 'usize')?
    ;

BinaryLiteral
    : '0b' [01][01_]* ('i8' | 'i16' | 'i32' | 'i64' | 'isize' | 'u8' | 'u16' | 'u32' | 'u64' | 'usize')?
    ;

DecimalFloatLiteral
    : [0-9][0-9_]* '.' [0-9][0-9_]* ([eE][+-]? [0-9][0-9_]*)? ('f32' | 'f64')?
    | [0-9][0-9_]* ([eE][+-]? [0-9][0-9_]*)? ('f32' | 'f64')?
    ;

// String literals
StringLiteral
    : '"' (~'"' | EscapeSequence)* '"'
    ;

fragment EscapeSequence
    : '\\' ([nrt'"\\] | 'x' HexDigit HexDigit | 'u' HexDigit HexDigit HexDigit HexDigit | 'U' HexDigit HexDigit HexDigit HexDigit HexDigit HexDigit)
    ;

fragment HexDigit
    : [0-9a-fA-F]
    ;

// Comentarios
Comment
    : '//' ~[\r\n]* -> skip
    ;

BlockComment
    : '/*' .*? '*/' -> skip
    ;

// Whitespace
Whitespace
    : [ \t\r\n]+ -> skip
    ;
