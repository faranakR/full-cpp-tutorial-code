/*=============================================================================
 * CHAPTER 7: CONDITIONALS AND TYPE SYSTEM
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 11 code example(s) from Chapter 7.
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
unsigned short x {65535}; // Maximum value for unsigned short
std :: cout << " x was : " << x << " \ n " ;


// ============================================================================
// EXAMPLE 2: Function: main
// ============================================================================

int main () {
std :: string s { " Hello " };
printString ( s ) ; // Implicit conversion from string to string_view
printString ( " World " ) ; // Works with C - string literals too
return 0;


// ============================================================================
// EXAMPLE 3: Function: main
// ============================================================================

int main () {
std :: cout << " Enter a number : " ;
std :: cin >> x ;
int x {};
if ( x > 0) {
int result { x * 2};
}


// ============================================================================
// EXAMPLE 4: Code Example
// ============================================================================

/*
std :: cout << " Result : " << result << ’\ n ’;
return 0;
*/



// ============================================================================
// EXAMPLE 5: Integer division ( truncates decimal )
// ============================================================================

int main () {
// Integer division ( truncates decimal )
std :: cout << 7 / 2 << ’\ n ’;
// 3
// Floating - point division
std :: cout << 7.0 / 2.0 << ’\ n ’;
std :: cout << 7.0 / 2 << ’\ n ’;
std :: cout << 7 / 2.0 << ’\ n ’;


// ============================================================================
// EXAMPLE 6: Only define y when we ’ re ready to use it
// ============================================================================

}
Better approach:
int main () {
// Only define y when we ’ re ready to use it
int y {};
std :: cin >> y ;
std :: cout << y << std :: endl ;
return 0;
7 }


// ============================================================================
// EXAMPLE 7: Function: main
// ============================================================================

int main () {
std :: cout << " Enter 0 or 1: " ;
int x {};
std :: cin >> x ;


// ============================================================================
// EXAMPLE 8: Function: main
// ============================================================================

int main () {
std :: cout << " Enter a number : " ;
int x {};
std :: cin >> x ;


// ============================================================================
// EXAMPLE 9: Code Example
// ============================================================================

/*
std :: cout << " Price -> Integer ( truncation , not rounding !) \ n " ;
for ( double price : prices ) {
int dollars = price ; // Truncates
std :: cout << price << " -> " << dollars << ’\ n ’;
}
*/



// ============================================================================
// EXAMPLE 10: Classic bug : loop with unsigned and subtraction
// ============================================================================

/*
void d e m o n s t r a t e U n s i g n e d D a n g e r () {
// Classic bug : loop with unsigned and subtraction
std :: vector < int > vec {1 , 2 , 3 , 4 , 5};
// DANGEROUS : size () returns unsigned !
for ( unsigned i = vec . size () - 1; i >= 0; --i ) { // Infinite loop !
// When i becomes 0 and decrements , it wraps to 4294967295
if ( i > vec . size () ) { // Safety check
std :: cout << " Overflow detected !\ n " ;
break ;
}
std :: cout << vec [ i ] << ’ ’;
}
*/



// ============================================================================
// EXAMPLE 11: SAFE : Use signed integer
// ============================================================================

/*
std :: cout << " \ n \ nSafe version :\ n " ;
// SAFE : Use signed integer
for ( int i = static_cast < int >( vec . size () ) - 1; i >= 0; --i ) {
std :: cout << vec [ i ] << ’ ’;
}
std :: cout << ’\ n ’;
*/



// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 7: Conditionals and Type System" << std::endl;
    
    // Your test code here
    
    return 0;
}
