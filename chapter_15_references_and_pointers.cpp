/*=============================================================================
 * CHAPTER 15: REFERENCES AND POINTERS
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 3 code example(s) from Chapter 15.
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
// EXAMPLE 1: Calls Widget ’s default constructor implicitly
// ============================================================================

/*
class TextBox : public Widget {
public :
// Calls Widget ’s default constructor implicitly
TextBox () {
std :: cout << " TextBox default constructor \ n " ;
}
*/



// ============================================================================
// EXAMPLE 2: Function: setWidth
// ============================================================================

/*
class Rectangle {
private :
int width , height ;
public :
void setWidth ( int w ) {
if ( w < 0) {
throw std :: i n v a l i d _ a r g u m e n t ( " Width cannot be negative " ) ;
}
if ( w > 1000) {
throw std :: out_of_range ( " Width too large " ) ;
}
width = w ;
}
15 };
*/



// ============================================================================
// EXAMPLE 3: Function: main
// ============================================================================

int main () {
Rectangle rect ;
try {
int w ;
std :: cin >> w ;
rect . setWidth ( w ) ;
std :: cout << " Width set successfully \ n " ;
}
catch ( const std :: out_of_range & e ) {
std :: cerr << " Range error : " << e . what () << ’\ n ’;
}
catch ( const std :: i n v a l i d _ a r gu m e n t & e ) {
std :: cerr << " Invalid input : " << e . what () << ’\ n ’;
}
catch ( const std :: exception & e ) {
std :: cerr << " Unexpected error : " << e . what () << ’\ n ’;
}


// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 15: References and Pointers" << std::endl;
    
    // Your test code here
    
    return 0;
}
