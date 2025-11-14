/*=============================================================================
 * CHAPTER 12: SCOPE AND LINKAGE
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 3 code example(s) from Chapter 12.
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
// EXAMPLE 1: Function: main
// ============================================================================

int main () {
constexpr int x { someFunction (1 , 2) };
std :: cout << x << ’\ n ’;


// ============================================================================
// EXAMPLE 2: Promises not to throw
// ============================================================================

/*
class SafeArray {
public :
// Promises not to throw
size_t size () const noexcept {
return size_ ;
}
*/



// ============================================================================
// EXAMPLE 3: Conditional noexcept
// ============================================================================

/*
// Conditional noexcept
void swap ( SafeArray & other ) noexcept (
std :: is_nothrow_swappable_v < int * >
) {
std :: swap ( data_ , other . data_ ) ;
std :: swap ( size_ , other . size_ ) ;
}
*/



// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 12: Scope and Linkage" << std::endl;
    
    // Your test code here
    
    return 0;
}
