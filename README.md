# CPP06

A C++ project covering the sixth module of the 42 curriculum, focused on type conversion, serialization, and runtime type identification in C++98.

## Project Overview

This repository contains three exercises:

- ex00: Scalar conversion utility
- ex01: Serialization with uintptr_t
- ex02: Runtime type identification

Each exercise is implemented as a separate program and built with its own Makefile.

## Repository Structure

```text
CPP06/
├── ex00/
│   ├── main.cpp
│   ├── ScalarConverter.cpp
│   ├── ScalarConverter.hpp
│   ├── convertion.cpp
│   ├── detect_type.cpp
│   ├── makefile
│   └── ...
├── ex01/
│   ├── main.cpp
│   ├── Serialization.cpp
│   ├── Serialization.hpp
│   ├── makefile
│   └── ...
├── ex02/
│   ├── main.cpp
│   ├── Identify.cpp
│   ├── Identify.hpp
│   ├── makefile
│   └── ...
└── README.md
```

## Exercise Details

### ex00 - Scalar Converter

This exercise implements a program that converts a scalar value from a string literal into its corresponding char, int, float, and double representations.

Example:

```bash
cd ex00
make
./converter 42
```

It can print:

- char conversion
- integer conversion
- float conversion
- double conversion
- error handling for invalid inputs

### ex01 - Serialization

This exercise demonstrates object serialization by converting a pointer to a Data structure into a uintptr_t and back again.

Example:

```bash
cd ex01
make
./serialize
```

### ex02 - Identify

This exercise uses inheritance and polymorphism to identify the actual derived type of an object at runtime.

Example:

```bash
cd ex02
make
./Identify
```

## Build Instructions

Each exercise has its own Makefile.

To build an exercise:

```bash
cd ex00
make
```

To clean build artifacts:

```bash
make clean
make fclean
```

To rebuild everything:

```bash
make re
```

## Requirements

- C++98 compatible compiler
- GNU Make

## Notes

This project follows the 42 coding standard and emphasizes:

- strict memory safety
- proper class design
- avoidance of modern C++ features outside the allowed standard
- clean, readable, and modular implementation

## Author

Created as part of the C++ Module 06 exercises.
