# Notes for C Programming

- C is not Object Oriented.
- C doesn't automatically manage memory (Unlike Python).
- C also follows the common variable naming rules as other languages (Case sensitive, no spaces, etc.)
- Loops in C are indeterminant by nature.

## Operators
### Arithmetic Operators
- +, -, *, /, % all do what they do in most other languages.

### Comparison Operators
==, !=, <>, <=, etc.

### Boolean Operators
`&&` is and, `!` is not, `||` is or.

## Data Types
The different kinds of Data Types in C are:
`int`, `float`, `char`, `byte`, `struct`, `double`, etc.
- However, C does not have `str` class or a string data type.

## Comments
`/* */` is a multiline comment
`//` is a single line comment - Actually, this arrived in a later iteration of C inspired by C++ style comments which are `//`

## Format Specifers
1. `%d` is for an integer
2. `%s` is for a string/character array
3. `%.xf` is for a floating-point number with x precision (ie: x digits after the decimal point)

## Inputs
The function used is `scanf` which is in the `stdio.h` header file.
Syntax: `scanf(<Format Specifier>, &<Variable>);`
Example: `scanf("%d", &a);`
Example: To take input of `char a[100]` which is a character array of 100 length - `scanf("%100s", a);` is used.
Special Example: `scanf("%[^\n]100s", a);` takes the input for character array `a`, but, until it reaches the end of a line (The `[^\n]` part), OR, until it reaches 100 characters (The max. limit).

Using `fgets`:
`fgets` is within the `stdio.h` header.
Syntax: `fgets(<Variable>, <Variable Length>, stdin);`
Example: `fgets(line, 1000, stdin);`
The `stdin` is part of a set of 3 things (idk what to call them), they are: `stdin`, `stdout`, and `stdair`.