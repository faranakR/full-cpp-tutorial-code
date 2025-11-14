/*=============================================================================
 * CHAPTER 29: CONCURRENCY
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 5 code example(s) from Chapter 29.
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
// EXAMPLE 1: Using primary template
// ============================================================================

int main () {
// Using primary template
std :: cout << isEqual (42 , 42) << ’\ n ’;
std :: cout << isEqual (3.14 , 3.14) << ’\ n ’;


// ============================================================================
// EXAMPLE 2: Class: Widget
// ============================================================================

/*
class Widget {
public :
Widget () {
std :: cout << " Widget default constructor \ n " ;
}
*/



// ============================================================================
// EXAMPLE 3: Code Example
// ============================================================================

/*
Widget ( bool enabled ) : enabled ( enabled ) {
std :: cout << " Widget parameterized constructor \ n " ;
}
*/



// ============================================================================
// EXAMPLE 4: Code Example
// ============================================================================

/*
for ( int i = 0; i < 2; ++ i ) {
animals [ i ] - > makeSound () ; // Calls correct version !
}
*/



// ============================================================================
// EXAMPLE 5: Polymorphic behavior
// ============================================================================

/*
// Polymorphic behavior
for ( const auto & animal : animals2 ) {
animal - > makeSound () ; // Calls correct version
}
// Automatic cleanup with smart pointers !
*/



// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 29: Concurrency" << std::endl;
    
    // Your test code here
    
    return 0;
}
