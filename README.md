# C++ Development Course - Code Examples

> Complete collection of C++ code examples extracted from comprehensive course notes by **Faranak Rajabi**

## 📦 What's Inside

This repository contains **29 consolidated chapter files** with **204 carefully extracted C++ code examples** covering everything from basics to advanced topics.

### ✨ Key Features

- ✅ **One file per chapter** - Easy to navigate and find examples
- ✅ **Well-organized** - Examples grouped by topic with clear headers
- ✅ **Ready to compile** - Each file is self-contained
- ✅ **Properly commented** - Explanations and usage instructions included
- ✅ **Clean code** - Filtered to include only actual C++ code (not table of contents)

## 📚 Chapter List

| File | Chapter | Examples | Topics |
|------|---------|----------|--------|
| `chapter_03_functions.cpp` | **Functions** | 13 | Function basics, parameters, overloading |
| `chapter_04_running_c++_programs.cpp` | **Running Programs** | 6 | Compilation, execution |
| `chapter_05_program_organization.cpp` | **Program Organization** | 16 | Headers, multiple files, build process |
| `chapter_06_data_types.cpp` | **Data Types** | 6 | Fundamental types, sizes, ranges |
| `chapter_07_conditionals_and_type_system.cpp` | **Conditionals** | 11 | if/else, switch, type conversions |
| `chapter_08_strings.cpp` | **Strings** | 34 | std::string, operations, manipulation |
| `chapter_09_additional_fundamentals.cpp` | **More Fundamentals** | 22 | Additional basic concepts |
| `chapter_10_operators.cpp` | **Operators** | 7 | Arithmetic, logical, bitwise |
| `chapter_11_bitwise_operations.cpp` | **Bitwise** | 3 | Bit manipulation techniques |
| `chapter_12_scope_and_linkage.cpp` | **Scope & Linkage** | 3 | Variable scope, namespaces |
| `chapter_13_control_flow.cpp` | **Control Flow** | 5 | Loops, break, continue |
| `chapter_14_type_conversion_and_templates.cpp` | **Type Conversion** | 15 | Casts, auto, templates intro |
| `chapter_15_references_and_pointers.cpp` | **References & Pointers** | 3 | Memory, addresses, references |
| `chapter_16_user-defined_types.cpp` | **User-Defined Types** | 7 | Enums, structs, type aliases |
| `chapter_17_arrays.cpp` | **Arrays** | 1 | Array fundamentals |
| `chapter_18_object-oriented_programming.cpp` | **OOP** | 8 | Classes, objects, encapsulation |
| `chapter_20_inheritance.cpp` | **Inheritance** | 5 | Derived classes, polymorphism |
| `chapter_23_smart_pointers.cpp` | **Smart Pointers** | 4 | unique_ptr, shared_ptr, RAII |
| `chapter_24_templates.cpp` | **Templates** | 8 | Generic programming |
| `chapter_25_stl_containers.cpp` | **STL Containers** | 2 | vector, map, set |
| `chapter_26_algorithms.cpp` | **Algorithms** | 2 | STL algorithms |
| `chapter_29_concurrency.cpp` | **Concurrency** | 5 | Threading, async |
| `chapter_31_advanced_topics.cpp` | **Advanced** | 4 | Advanced C++ features |
| `chapter_32_design_patterns.cpp` | **Design Patterns** | 1 | Common patterns |
| `chapter_33_best_practices.cpp` | **Best Practices** | 4 | Modern C++ idioms |
| `chapter_34_memory_management.cpp` | **Memory Management** | 4 | new/delete, RAII |
| `chapter_38_performance_optimization.cpp` | **Performance** | 2 | Optimization techniques |
| `chapter_42_unicode.cpp` | **Unicode** | 2 | Unicode handling |
| `chapter_45_additional_topics.cpp` | **More Topics** | 1 | Additional concepts |

**Total: 204 code examples across 29 chapters**

## 🚀 Quick Start

### 1. Compile a Chapter

```bash
# Choose any chapter file
g++ -std=c++17 -Wall chapter_08_strings.cpp -o strings_demo

# Run it
./strings_demo
```

### 2. Try Specific Examples

Each file has multiple examples. To use one:

1. Open the chapter file
2. Find the example you want (e.g., "EXAMPLE 5")
3. Uncomment the code if it's commented out
4. Modify the `main()` function at the bottom to test it
5. Compile and run

### 3. Example Workflow

```cpp
// In chapter_08_strings.cpp

// Find this example (uncommented):
// EXAMPLE 12: String concatenation
std::string first = "Hello";
std::string second = "World";
std::string combined = first + " " + second;

// In main() function, add:
int main() {
    std::string first = "Hello";
    std::string second = "World";
    std::string combined = first + " " + second;
    std::cout << combined << std::endl;
    return 0;
}
```

## 📖 Learning Path

### Beginner (Start Here!)
1. **chapter_06** - Data Types
2. **chapter_03** - Functions
3. **chapter_07** - Conditionals
4. **chapter_08** - Strings
5. **chapter_13** - Control Flow

### Intermediate
1. **chapter_15** - References & Pointers
2. **chapter_16** - User-Defined Types
3. **chapter_17** - Arrays
4. **chapter_18** - OOP
5. **chapter_14** - Templates

### Advanced
1. **chapter_20** - Inheritance
2. **chapter_23** - Smart Pointers
3. **chapter_24** - Templates (Advanced)
4. **chapter_29** - Concurrency
5. **chapter_33** - Best Practices

## 🛠️ Compilation Guide

### Basic Compilation
```bash
g++ -std=c++17 filename.cpp -o program
./program
```

### With Warnings (Recommended)
```bash
g++ -std=c++17 -Wall -Wextra filename.cpp -o program
```

### With Debugging
```bash
g++ -std=c++17 -g -Wall filename.cpp -o program
gdb ./program
```

### Optimized Build
```bash
g++ -std=c++17 -O2 -Wall filename.cpp -o program
```

## 💡 Important Notes

### About the Code

1. **Some examples are snippets** - They illustrate specific concepts and may need context
2. **Commented code** - Examples without `main()` are commented out by default
3. **Mix and match** - Feel free to combine examples in the `main()` function
4. **Experiment** - Modify examples to learn better!

### Making Examples Work

If you see commented code like this:
```cpp
/*
std::string text = "Hello";
std::cout << text << std::endl;
*/
```

Just uncomment it and add to `main()`:
```cpp
int main() {
    std::string text = "Hello";
    std::cout << text << std::endl;
    return 0;
}
```

## 📝 File Structure

Each chapter file has this structure:

```cpp
/*=============================================================================
 * CHAPTER X: TOPIC NAME
 * - Header with info
 * - Usage instructions
 * - Compilation commands
 =============================================================================*/

#include <iostream>
// ... common includes

// ============================================================================
// EXAMPLE 1: Title
// ============================================================================
// Code here...

// ============================================================================
// EXAMPLE 2: Title
// ============================================================================
// More code...

// ============================================================================
// MAIN FUNCTION
// ============================================================================
int main() {
    // Your test code here
    return 0;
}
```

## 🔧 Working with Examples

### Method 1: Direct Compilation
```bash
# Pick a chapter
g++ -std=c++17 chapter_18_object-oriented_programming.cpp -o oop_demo
./oop_demo
```

### Method 2: Copy & Modify
```bash
# Create your own file
cp chapter_08_strings.cpp my_string_practice.cpp

# Edit it
nano my_string_practice.cpp  # or use your favorite editor

# Compile your version
g++ -std=c++17 my_string_practice.cpp -o my_program
```

### Method 3: Extract Single Example
```bash
# Create a new file with just one example
cat > single_example.cpp << 'EOF'
#include <iostream>
#include <string>

int main() {
    std::string text = "Hello, C++!";
    std::cout << text << std::endl;
    return 0;
}
EOF

g++ -std=c++17 single_example.cpp -o test
./test
```

## 🎯 Practice Suggestions

### For Each Chapter:

1. **Read through all examples** - Understand what they demonstrate
2. **Compile and run** - See the output
3. **Modify the code** - Change values, add features
4. **Break it** - See what causes errors
5. **Fix it** - Learn from mistakes
6. **Combine examples** - Create something new

### Mini Projects

- **Strings**: Build a text analyzer
- **Functions**: Create a calculator
- **OOP**: Design a simple game
- **STL**: Build a contact manager
- **Templates**: Write generic utilities

## 📚 Additional Resources

### Documentation
- [cppreference.com](https://cppreference.com) - Complete C++ reference
- [learncpp.com](https://learncpp.com) - Free C++ tutorials
- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/)

### Tools
- [Compiler Explorer](https://godbolt.org) - See assembly output
- [Quick Bench](https://quick-bench.com) - Performance testing
- [C++ Insights](https://cppinsights.io) - See what compiler does

### Communities
- [r/cpp](https://reddit.com/r/cpp) - C++ subreddit
- [Stack Overflow](https://stackoverflow.com/questions/tagged/c++) - Q&A
- [C++ Slack](https://cpplang.slack.com) - Chat with developers

## 🤝 Contributing

Found an error? Want to add examples? Contributions welcome!

1. Fix incomplete examples
2. Add better comments
3. Create additional examples
4. Improve documentation

## 📄 License

MIT License - See LICENSE file for details

Original course material by **Faranak Rajabi** (November 14, 2025)  
Code extraction and organization by Claude (November 13, 2025)

## 🎓 Credits

- **Course Author**: Faranak Rajabi
- **Course Date**: November 14, 2025
- **Total Examples**: 204 across 29 chapters
- **Format**: Consolidated single-file-per-chapter

## ⚡ Quick Reference

### Compilation Flags
- `-std=c++17` - Use C++17 standard
- `-std=c++20` - Use C++20 standard  
- `-Wall` - All warnings
- `-Wextra` - Extra warnings
- `-O2` - Optimization level 2
- `-g` - Debug symbols
- `-o name` - Output filename

### Running Programs
```bash
./program           # Linux/Mac
program.exe         # Windows
```

### Common Issues

**"undefined reference to main"**
→ Make sure you have a `main()` function

**"error: 'cout' was not declared"**
→ Add `#include <iostream>` and `using namespace std;` or use `std::cout`

**"permission denied"**
→ On Linux/Mac: `chmod +x program`

---

## 🌟 Getting Started Right Now

1. **Download this repository**
2. **Open `chapter_03_functions.cpp`** (good starting point)
3. **Compile it**: `g++ -std=c++17 chapter_03_functions.cpp -o functions`
4. **Run it**: `./functions`
5. **Start learning!**

---

**Happy Coding! 🚀**

For questions or issues, refer to the documentation or search online resources.
