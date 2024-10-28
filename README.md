# Arithmetic Compiler

This project is a simple Arithmetic Compiler written in C, designed to tokenize, parse, and generate assembly-like instructions for basic arithmetic expressions. The compiler can handle addition, subtraction, multiplication, and division operations on integers.

## Table of Contents

1. [Project Structure](#project-structure)
2. [Features](#features)
3. [Requirements](#requirements)
4. [Installation](#installation)
5. [Usage](#usage)
6. [Example](#example)
7. [Code Overview](#code-overview)
8. [License](#license)

## Project Structure

The project is organized as follows:

```
ArithmeticCompiler/
├── CMakeLists.txt       # Build configuration file for CMake
├── include/
│   ├── tokenizer.h      # Header file for the tokenizer
│   ├── parser.h         # Header file for the parser
│   └── assembly.h       # Header file for the assembly generator
├── src/
│   ├── main.c           # Main entry point of the program
│   ├── tokenizer.c      # Implementation of the tokenizer
│   ├── parser.c         # Implementation of the parser
│   └── assembly.c       # Implementation of the assembly generator
└── README.md            # Project documentation
```

### Features

- **Tokenization**: Breaks down an arithmetic expression into individual tokens.
- **Parsing**: Parses tokens in a structured way to calculate a result.
- **Assembly Code Generation**: Generates a simple assembly-like code to represent the computation steps.

## Requirements

To compile and run the project, you’ll need:

- GCC or any C compiler
- CMake version 3.10 or higher

## Installation

Clone the repository and navigate to the project directory:

```bash
git clone <repository-url>
cd ArithmeticCompiler
```

### Building the Project with CMake

1. Create a build directory:

    ```bash
    mkdir build
    cd build
    ```

2. Run CMake to configure the project:

    ```bash
    cmake ..
    ```

3. Compile the project:

    ```bash
    make
    ```

4. After compilation, an executable named `ArithmeticCompiler` will be generated in the `build` directory.

## Usage

To use the compiler:

1. Run the executable:

    ```bash
    ./ArithmeticCompiler
    ```

2. Enter an arithmetic expression (e.g., `3 + 4 * 2`), and the compiler will display the parsed result and generated assembly-like instructions.

## Example

Here’s an example of using the compiler:

```bash
$ ./ArithmeticCompiler
Enter an arithmetic expression (e.g., 3 + 4 - 2): 3 + 4 * 2
Parsed result: 11
Assembly Code:
LOAD 3
ADD 4
MUL 2
```

## Code Overview

The code is divided into three main modules: **Tokenization**, **Parsing**, and **Assembly Generation**. Here’s a quick overview of each module:

1. ### Tokenization (`tokenizer.c` / `tokenizer.h`)
   The tokenizer processes an input string and breaks it down into tokens representing numbers, operators (`+`, `-`, `*`, `/`), and the end of the expression. Each token is defined by a `TokenType` and may hold a numerical value.

   ```c
   typedef enum { TOKEN_NUMBER, TOKEN_PLUS, TOKEN_MINUS, TOKEN_MULTIPLICATION, TOKEN_DIVISION, TOKEN_END } TokenType;

   typedef struct {
     TokenType type;
     int value;
   } Token;

   Token *tokenize(const char *input);
   ```

2. ### Parsing (`parser.c` / `parser.h`)
   The parser processes the list of tokens to compute the result of the arithmetic expression. It interprets operators and numbers and returns the final result.

   ```c
   int parse(Token *tokens, int *result);
   ```

3. ### Assembly Generation (`assembly.c` / `assembly.h`)
   The assembly generator creates simple assembly-like instructions for each arithmetic operation. These instructions simulate loading a value and applying operations (addition, subtraction, etc.).

   ```c
   void generate_assembly(Token *tokens);
   ```

4. ### Main (`main.c`)
   The main file initializes the program, takes user input, calls the tokenizer, parser, and assembly generator, and then displays the results to the user.

   ```c
   int main() {
     // User input handling, calling modules, and displaying results
   }
   ```

## Contributing
Contributions are welcome! If you'd like to improve this compiler, feel free to fork the repository, make your changes, and submit a pull request. Whether it's optimizing the code, adding new features, or improving documentation, all contributions are valued.

If you find any issues or have suggestions, please open an issue to help me improve.