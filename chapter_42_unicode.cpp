/*=============================================================================
 * CHAPTER 42: UNICODE
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 2 code example(s) from Chapter 42.
 * 
 * USAGE:
 *   - Review each example section
 *   - Uncomment the code you want to test
 *   - Compile: g++ -std=c++17 -Wall thisfile.cpp -o program
 *   - Run: ./program
 * 
 * NOTE:
 *   Some examples are code snippets designed to illustrate specific
 *   concepts and may need additional context to compile.
 * 
 =============================================================================*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


// ============================================================================
// EXAMPLE 1: Bad : What does 30 mean ?
// ============================================================================

int main () {
// Bad : What does 30 mean ?
// setMax (30) ;
// if ( name . length () > 30) { }
// Good : Named constant
constexpr int maxNameLength {30};
setMax ( maxNameLength ) ;
if ( name . length () > maxNameLength ) { }


// ============================================================================
// EXAMPLE 2: Octal ( prefix with 0)
// ============================================================================

int main () {
// Octal ( prefix with 0)
int x {012};
std :: cout << x << std :: endl ;


// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 42: Unicode" << std::endl;
    
    // Your test code here
    
    return 0;
}
