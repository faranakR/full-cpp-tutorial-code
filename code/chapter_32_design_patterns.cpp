/*=============================================================================
 * CHAPTER 32: DESIGN PATTERNS
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 1 code example(s) from Chapter 32.
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
// EXAMPLE 1: Using static reference
// ============================================================================

int main () {
// Using static reference
getStaticInt () = 100; // Can assign to function call !
std :: cout << getStaticInt () << ’\ n ’; // 100
// Using max
int x {5} , y {10};
max (x , y ) = 20; // Modifies y ( the larger value )
std :: cout << " x = " << x << " , y = " << y << ’\ n ’;


// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 32: Design Patterns" << std::endl;
    
    // Your test code here
    
    return 0;
}
