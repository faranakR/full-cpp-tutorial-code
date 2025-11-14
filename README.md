# C++ Development Course - Code Examples

A comprehensive collection of C++ code examples extracted from a complete development course, organized by topic and complexity level.

## Overview

This repository contains 204 curated C++ code examples spanning 29 chapters, covering fundamental concepts through advanced topics. Each chapter is consolidated into a single, well-documented source file for ease of navigation and compilation.

**Course Author:** Faranak Rajabi  
**Original Material Date:** November 14, 2025  
**Repository Structure:** One file per chapter  
**Total Examples:** 204 across 29 chapters  

## Repository Structure

```
cpp-course-examples/
├── README.md
├── QUICK_START.md
├── CHAPTER_INDEX.md
├── LICENSE
├── .gitignore
│
├── chapter_03_functions.cpp                     (13 examples)
├── chapter_04_running_c++_programs.cpp          (6 examples)
├── chapter_05_program_organization.cpp          (16 examples)
├── chapter_06_data_types.cpp                    (6 examples)
├── chapter_07_conditionals_and_type_system.cpp  (11 examples)
├── chapter_08_strings.cpp                       (34 examples)
├── chapter_09_additional_fundamentals.cpp       (22 examples)
├── chapter_10_operators.cpp                     (7 examples)
├── chapter_11_bitwise_operations.cpp            (3 examples)
├── chapter_12_scope_and_linkage.cpp             (3 examples)
├── chapter_13_control_flow.cpp                  (5 examples)
├── chapter_14_type_conversion_and_templates.cpp (15 examples)
├── chapter_15_references_and_pointers.cpp       (3 examples)
├── chapter_16_user-defined_types.cpp            (7 examples)
├── chapter_17_arrays.cpp                        (1 example)
├── chapter_18_object-oriented_programming.cpp   (8 examples)
├── chapter_20_inheritance.cpp                   (5 examples)
├── chapter_23_smart_pointers.cpp                (4 examples)
├── chapter_24_templates.cpp                     (8 examples)
├── chapter_25_stl_containers.cpp                (2 examples)
├── chapter_26_algorithms.cpp                    (2 examples)
├── chapter_29_concurrency.cpp                   (5 examples)
├── chapter_31_advanced_topics.cpp               (4 examples)
├── chapter_32_design_patterns.cpp               (1 example)
├── chapter_33_best_practices.cpp                (4 examples)
├── chapter_34_memory_management.cpp             (4 examples)
├── chapter_38_performance_optimization.cpp      (2 examples)
├── chapter_42_unicode.cpp                       (2 examples)
└── chapter_45_additional_topics.cpp             (1 example)
```

## Topics Covered

### Fundamentals
- **Functions** - Declaration, definition, parameters, overloading, templates
- **Data Types** - Fundamental types, type modifiers, type safety
- **Control Flow** - Conditionals, loops, switch statements
- **Strings** - std::string operations, manipulation, comparison
- **Operators** - Arithmetic, logical, bitwise operations

### Intermediate
- **Memory Management** - Pointers, references, dynamic allocation
- **Program Organization** - Headers, source files, compilation units
- **Type System** - Conversions, casting, type deduction
- **User-Defined Types** - Enumerations, structures, type aliases
- **Arrays and Containers** - C-style arrays, std::array

### Advanced
- **Object-Oriented Programming** - Classes, inheritance, polymorphism
- **Templates** - Function templates, class templates, specialization
- **Smart Pointers** - unique_ptr, shared_ptr, RAII principles
- **STL** - Containers, algorithms, iterators
- **Concurrency** - Threading, synchronization, async operations
- **Modern C++** - C++11/14/17/20 features and best practices

## Prerequisites

- C++ compiler supporting C++17 or later (GCC 7+, Clang 5+, MSVC 2017+)
- Basic understanding of programming concepts
- Command-line familiarity (optional but recommended)

## Quick Start

### Compilation

```bash
# Basic compilation
g++ -std=c++17 -Wall -Wextra chapter_03_functions.cpp -o functions

# With debugging symbols
g++ -std=c++17 -g -Wall -Wextra chapter_03_functions.cpp -o functions

# Optimized build
g++ -std=c++17 -O2 -Wall -Wextra chapter_03_functions.cpp -o functions
```

### Execution

```bash
./functions
```

### Compiler Flags

| Flag | Purpose |
|------|---------|
| `-std=c++17` | Enable C++17 standard |
| `-Wall` | Enable all standard warnings |
| `-Wextra` | Enable additional warnings |
| `-g` | Include debugging information |
| `-O2` | Enable optimization level 2 |
| `-o <name>` | Specify output filename |

## File Organization

Each chapter file follows a consistent structure:

```cpp
/*=============================================================================
 * CHAPTER N: TOPIC NAME
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains X code example(s) from Chapter N.
 * 
 * USAGE:
 *   - Review each example section
 *   - Uncomment the code you want to test
 *   - Compile: g++ -std=c++17 -Wall thisfile.cpp -o program
 *   - Run: ./program
 =============================================================================*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// ============================================================================
// EXAMPLE 1: Title
// ============================================================================
// Example code with inline documentation

// ============================================================================
// EXAMPLE 2: Title
// ============================================================================
// Additional examples...

// ============================================================================
// MAIN FUNCTION
// ============================================================================
int main() {
    // Test code here
    return 0;
}
```

## Usage Guidelines

### Working with Examples

1. **Review** - Examine the example code and comments
2. **Uncomment** - Activate examples that are commented out
3. **Modify** - Adapt the main() function to test specific examples
4. **Compile** - Use appropriate compiler flags
5. **Execute** - Run and verify output

### Example Workflow

```cpp
// Locate desired example in chapter file
// Example: chapter_08_strings.cpp

// In main() function, add test code:
int main() {
    std::string text = "Example";
    std::cout << text << std::endl;
    return 0;
}
```

Compile and run:
```bash
g++ -std=c++17 -Wall chapter_08_strings.cpp -o test && ./test
```

## Learning Path

### Beginner Track
Recommended sequence for those new to C++:

1. chapter_06_data_types.cpp
2. chapter_03_functions.cpp
3. chapter_07_conditionals_and_type_system.cpp
4. chapter_13_control_flow.cpp
5. chapter_08_strings.cpp

### Intermediate Track
For developers with basic C++ knowledge:

1. chapter_15_references_and_pointers.cpp
2. chapter_16_user-defined_types.cpp
3. chapter_17_arrays.cpp
4. chapter_18_object-oriented_programming.cpp
5. chapter_14_type_conversion_and_templates.cpp

### Advanced Track
For experienced C++ developers:

1. chapter_20_inheritance.cpp
2. chapter_23_smart_pointers.cpp
3. chapter_24_templates.cpp
4. chapter_29_concurrency.cpp
5. chapter_33_best_practices.cpp

## Important Notes

### Code Extraction

Examples were extracted from PDF course materials using automated parsing. Some considerations:

- **Snippets** - Some examples are illustrative code fragments rather than complete programs
- **Context** - Certain examples may require additional headers or supporting code
- **Formatting** - Minor formatting adjustments may be needed for compilation
- **Completeness** - Examples without main() functions are commented out by default

### Making Examples Compilable

If an example is commented out:

```cpp
/*
std::string message = "Hello";
std::cout << message << std::endl;
*/
```

Add to main():

```cpp
int main() {
    std::string message = "Hello";
    std::cout << message << std::endl;
    return 0;
}
```

## Technical Specifications

### Compiler Compatibility

Tested with:
- GCC 9.0 and later
- Clang 10.0 and later
- MSVC 2019 and later

### Standard Requirements

- Minimum: C++17
- Recommended: C++20
- Some examples may use earlier standards (C++11/14)

### Platform Support

- Linux (Ubuntu 18.04+, Debian 10+, Fedora 30+)
- macOS (10.15+)
- Windows (10/11 with MinGW or MSVC)

## Documentation

- `README.md` - This file
- `QUICK_START.md` - Rapid getting-started guide
- `CHAPTER_INDEX.md` - Comprehensive chapter reference with detailed topic breakdowns
- Inline comments in source files

## Build Systems

While not required, these examples can be integrated into larger build systems:

### CMake Example

```cmake
cmake_minimum_required(VERSION 3.15)
project(CPPExamples CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(functions chapter_03_functions.cpp)
add_executable(strings chapter_08_strings.cpp)
```

### Makefile Example

```makefile
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

functions: chapter_03_functions.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

strings: chapter_08_strings.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f functions strings
```

## Contributing

Contributions to improve code quality, fix errors, or add clarifying comments are welcome. Please ensure:

- Code compiles without errors or warnings
- Changes maintain consistency with existing structure
- Comments are clear and concise
- Commit messages follow conventional format

## References

### C++ Standards Documentation
- [ISO C++ Standard](https://isocpp.org/)
- [cppreference.com](https://en.cppreference.com/) - Comprehensive C++ reference
- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)

### Additional Resources
- [Compiler Explorer](https://godbolt.org/) - Online compiler with assembly output
- [Quick C++ Benchmark](https://quick-bench.com/) - Performance measurement tool
- [C++ Insights](https://cppinsights.io/) - Source code transformation visualization

## License

MIT License - See LICENSE file for complete terms.

Original course material by Faranak Rajabi (2025).  
Code extraction and organization performed November 13, 2025.

## Acknowledgments

- Original course author: Faranak Rajabi
- Course publication date: November 14, 2025
- Examples extracted from comprehensive C++ development course materials

## Support

For issues related to:
- **Code errors** - Open an issue with compiler output and environment details
- **Documentation** - Suggest improvements via pull request
- **General C++ questions** - Consult [Stack Overflow](https://stackoverflow.com/questions/tagged/c++)

---

**Repository Metadata**

- Language: C++
- Standards: C++11, C++14, C++17, C++20
- Total Examples: 204
- Chapter Files: 29
- Documentation Files: 3
- Total Size: ~136 KB
