/*=============================================================================
 * CHAPTER 13: CONTROL FLOW
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 5 code example(s) from Chapter 13.
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
// EXAMPLE 1: Function: process
// ============================================================================

/*
namespace mylib {
inline namespace v2 { // Current version
void process () { /* new implem entation */ }
}
namespace v1 { // Old version still available
void process () { /* old implem entation */ }
}
*/



// ============================================================================
// EXAMPLE 2: 3. dynamic_cast - safe runtime downcasting
// ============================================================================

/*
// 3. dynamic_cast - safe runtime downcasting
Base * base = new Derived () ;
Derived * derived = dynamic_cast < Derived * >( base ) ;
if ( derived ) {
derived - > derivedOnly () ; // Safe !
}
delete base ;
*/



// ============================================================================
// EXAMPLE 3: Class: Complex
// ============================================================================

/*
class Complex {
private :
double real , imag ;
*/



// ============================================================================
// EXAMPLE 4: Can access protected members
// ============================================================================

/*
class TextBox : public Widget {
public :
void resize ( int w , int h ) {
// Can access protected members
width = w ;
// OK : protected member
height = h ; // OK : protected member
*/



// ============================================================================
// EXAMPLE 5: Outside the class hierarchy , protected acts like private
// ============================================================================

int main () {
TextBox box ;
// Outside the class hierarchy , protected acts like private
// box . width = 200;
// ERROR : protected member
// box . enabled = false ; // ERROR : private member


// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 13: Control Flow" << std::endl;
    
    // Your test code here
    
    return 0;
}
