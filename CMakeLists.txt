cmake_minimum_required(VERSION 3.10)
project(ArithmeticCompiler)

# Set the C standard
set(CMAKE_C_STANDARD 99)

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/main.c
    src/tokenizer.c
    src/parser.c
    src/assembly.c
)

# Add executable
add_executable(ArithmeticCompiler ${SOURCES})
