# Custom C++ String Library

A lightweight, custom implementation of a dynamic string class in C++ (similar to `std::string`), built using low-level C-string functions and operator overloading for seamless integration with C++ streams.

## Features
- **Dynamic Memory Management**: Automatically resizes to handle string operations.
- **Common String Operations**: 
  - Concatenation (`+`, `+=`)
  - Comparison (`==`, `!=`, `<`, `>`)
  - Substring extraction (`substr()`)
  - Length/capacity management
- **Stream Support**: 
  - Overloaded `<<` for `std::ostream` (e.g., `std::cout << myString`)
  - Overloaded `>>` for `std::istream` input
- **Iterator Support**: Forward iterators for range-based loops.
- **C-String Compatibility**: Convert to/from `const char*` with `c_str()`.

---

## Installation
This is a **header-only library**. Simply include `String.h` in your project:
```cpp
#include "String.h"
