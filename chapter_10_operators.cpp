/*=============================================================================
 * CHAPTER 10: OPERATORS
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 7 code example(s) from Chapter 10.
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
// EXAMPLE 1: ERROR : defined a variable twice
// ============================================================================

int main () {
// ERROR : defined a variable twice
int x ;
int x { 5 }; // Compiler error : redefinition
int y { 6 };
std :: cout << add (x , y ) << ’\ n ’;
return 0;


// ============================================================================
// EXAMPLE 2: Function: main
// ============================================================================

int main () {
for ( int i {1}; i <= 10; ++ i ) {
if ( i == 4)
break ; // Exit loop when i reaches 4
std :: cout << i << ’\ n ’;
}
std :: cout << " After the loop \ n " ;
return 0;


// ============================================================================
// EXAMPLE 3: Function: main
// ============================================================================

int main () {
for ( int i {1}; i <= 10; ++ i ) {
if ( i == 4)
continue ; // Skip printing 4
std :: cout << i << ’\ n ’;
}
std :: cout << " After the loop \ n " ;
return 0;


// ============================================================================
// EXAMPLE 4: Function: main
// ============================================================================

int main () {
tryAgain : // This is a label
std :: cout << " Enter a non - negative number : " ;
double x {};
std :: cin >> x ;


// ============================================================================
// EXAMPLE 5: Function: main
// ============================================================================

int main () {
int x {5};
modifyValue ( x ) ;
std :: cout << x << ’\ n ’;


// ============================================================================
// EXAMPLE 6: Shorter way ( null pointers convert to false )
// ============================================================================

/*
// Shorter way ( null pointers convert to false )
if (! ptr2 ) {
std :: cout << " ptr2 is null \ n " ;
}
*/



// ============================================================================
// EXAMPLE 7: Always check before dereferencing
// ============================================================================

/*
// Always check before dereferencing
if ( ptr1 ) {
* ptr1 = 42; // Safe only if not null
}
*/



// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 10: Operators" << std::endl;
    
    // Your test code here
    
    return 0;
}
