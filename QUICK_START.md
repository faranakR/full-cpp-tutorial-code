# Quick Start Guide

Get started with C++ examples in 3 minutes!

## Step 1: Pick a Chapter (30 seconds)

Start with these beginner-friendly chapters:
- `chapter_03_functions.cpp` - Learn about functions
- `chapter_06_data_types.cpp` - Basic data types
- `chapter_08_strings.cpp` - String manipulation

## Step 2: Compile (1 minute)

```bash
# Basic compilation
g++ -std=c++17 chapter_03_functions.cpp -o myfirst

# Or with warnings (recommended)
g++ -std=c++17 -Wall chapter_03_functions.cpp -o myfirst
```

## Step 3: Run (30 seconds)

```bash
./myfirst
```

## That's It!

You just compiled and ran your first example!

## Next Steps

### Explore Examples

Each file has multiple examples. Open any file and look for:
```cpp
// ============================================================================
// EXAMPLE 1: Function basics
// ============================================================================
```

### Modify Code

Try changing values:
```cpp
// Original
std::string name = "World";

// Your version
std::string name = "Alice";
```

### Test in main()

Add your code to the `main()` function:
```cpp
int main() {
    std::string greeting = "Hello";
    std::cout << greeting << std::endl;
    return 0;
}
```

### Recompile and Run

```bash
g++ -std=c++17 chapter_03_functions.cpp -o test
./test
```

## Common Commands Cheat Sheet

```bash
# Compile
g++ -std=c++17 file.cpp -o program

# Compile with warnings
g++ -std=c++17 -Wall file.cpp -o program

# Compile for debugging
g++ -std=c++17 -g file.cpp -o program

# Run
./program

# Clean up
rm program
```

## File Organization

```
cpp-course-examples/
├── chapter_03_functions.cpp          ← Start here!
├── chapter_06_data_types.cpp         ← Then this
├── chapter_08_strings.cpp             ← Good for practice
├── chapter_18_oop.cpp                 ← When ready for classes
└── README.md                          ← Full documentation
```

## Troubleshooting

### Problem: "g++ command not found"

**Linux (Ubuntu/Debian):**
```bash
sudo apt-get install build-essential
```

**macOS:**
```bash
xcode-select --install
```

**Windows:**
Install MinGW or use WSL

### Problem: "Permission denied"

**Linux/Mac:**
```bash
chmod +x program
./program
```

### Problem: Compilation errors

1. Check for syntax errors
2. Make sure all brackets `{}` and parentheses `()` match
3. Ensure you have `return 0;` in `main()`
4. Verify you included necessary headers like `<iostream>`

## Tips for Success

1. **Type code yourself** - Don't just copy-paste
2. **Start small** - Begin with simple examples
3. **Experiment** - Change things and see what happens
4. **Read errors** - Error messages help you learn
5. **Practice daily** - Even 15 minutes helps!

## What's Next?

After you're comfortable with basics:

1. **Try more chapters** - Work through sequentially
2. **Combine examples** - Mix concepts from different chapters
3. **Build projects** - Create your own programs
4. **Read README.md** - For comprehensive guide

## Need Help?

- Check README.md for detailed info
- Search error messages on Google
- Visit [cppreference.com](https://cppreference.com)
- Ask on [Stack Overflow](https://stackoverflow.com/questions/tagged/c++)

---

**Ready? Pick a chapter and start coding!** 🚀

```bash
g++ -std=c++17 -Wall chapter_03_functions.cpp -o test && ./test
```
