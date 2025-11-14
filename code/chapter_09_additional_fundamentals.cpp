/*=============================================================================
 * CHAPTER 9: ADDITIONAL FUNDAMENTALS
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 22 code example(s) from Chapter 9.
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

# define DEBUG // Defining nothing ( used for conditional compilation )
int main () {
std :: cout << MY_NAME << " \ n " ;
return 0;
9 }


// ============================================================================
// EXAMPLE 2: Function: main
// ============================================================================

int main () {
# ifdef PRINT_JOE
std :: cout << " Hi Joe \ n " ;
# endif


// ============================================================================
// EXAMPLE 3: Function: main
// ============================================================================

int main () {
std :: cout << " Enter a radius : " ;
double radius {};
std :: cin >> radius ;


// ============================================================================
// EXAMPLE 4: Function: value
// ============================================================================

/*
class Celsius {
double temp ;
public :
explicit Celsius ( double t ) : temp ( t ) {}
double value () const { return temp ; }
*/



// ============================================================================
// EXAMPLE 5: Basic conversions
// ============================================================================

int main () {
// Basic conversions
double pi {3.14159};
int whole_part { static_cast < int >( pi ) };
std :: cout << " Pi truncated : " << whole_part << ’\ n ’;
// Converting for correct division
int numerator {22};
int denominator {7};


// ============================================================================
// EXAMPLE 6: Range - based for loops
// ============================================================================

/*
// Range - based for loops
for ( auto num : numbers ) {
std :: cout << num << ’ ’;
}
std :: cout << ’\ n ’;
*/



// ============================================================================
// EXAMPLE 7: With references
// ============================================================================

/*
// With references
for ( auto & num : numbers ) {
num *= 2; // Modifies the vector
}
*/



// ============================================================================
// EXAMPLE 8: With const references ( most common )
// ============================================================================

/*
// With const references ( most common )
for ( const auto & num : numbers ) {
std :: cout << num << ’ ’;
}
std :: cout << ’\ n ’;
*/



// ============================================================================
// EXAMPLE 9: Simulated file reading logic
// ============================================================================

/*
File ReadResu lt readFile ( const std :: string & filename ) {
// Simulated file reading logic
if ( filename . empty () ) {
return r e a d E r r o r F i l e O p e n ; // Can ’t open file with no name
}
if ( filename == " corrupt . txt " ) {
return r e a d E r r o r F i l e C o r r u p t ;
}
*/



// ============================================================================
// EXAMPLE 10: Code Example
// ============================================================================

/*
if ( std :: cin ) { // Check if input was successful
std :: cout << " You entered : " << temp << ’\ n ’;
} else {
std :: cout << " Invalid input format \ n " ;
}
*/



// ============================================================================
// EXAMPLE 11: Class: Vector2D
// ============================================================================

/*
class Vector2D {
private :
double x , y ;
*/



// ============================================================================
// EXAMPLE 12: Division by scalar
// ============================================================================

/*
// Division by scalar
Vector2D operator /( double scalar ) const {
if ( scalar == 0) {
throw std :: i n v a l i d _ a r g u m e n t ( " Division by zero " ) ;
}
return Vector2D ( x / scalar , y / scalar ) ;
}
*/



// ============================================================================
// EXAMPLE 13: Class: Simple
// ============================================================================

/*
class Simple {
private :
int value ;
std :: string name ;
public :
Simple ( int v , const std :: string & n ) : value ( v ) , name ( n ) {}
// Compiler provides : Simple & operator =( const Simple & other )
9 };
*/



// ============================================================================
// EXAMPLE 14: Class: DynamicArray
// ============================================================================

/*
class DynamicArray {
private :
int * data ;
size_t size ;
*/



// ============================================================================
// EXAMPLE 15: Class: Counter
// ============================================================================

/*
class Counter {
private :
int value ;
*/



// ============================================================================
// EXAMPLE 16: Class: SafeArray
// ============================================================================

/*
class SafeArray {
private :
int * data ;
size_t size ;
*/



// ============================================================================
// EXAMPLE 17: Non - const version : allows modification
// ============================================================================

/*
SafeArray ( size_t s ) : size ( s ) , data ( new int [ s ]() ) {}
~ SafeArray () { delete [] data ; }
// Non - const version : allows modification
int & operator []( size_t index ) {
if ( index >= size ) {
throw std :: out_of_range ( " Index out of bounds " ) ;
}
return data [ index ];
}
*/



// ============================================================================
// EXAMPLE 18: Const version : for const objects
// ============================================================================

/*
// Const version : for const objects
const int & operator []( size_t index ) const {
if ( index >= size ) {
throw std :: out_of_range ( " Index out of bounds " ) ;
}
return data [ index ];
}
*/



// ============================================================================
// EXAMPLE 19: Bounds checking
// ============================================================================

/*
// Bounds checking
try {
arr [20] = 0; // Throws exception
} catch ( const std :: out_of_range & e ) {
std :: cout << " Error : " << e . what () << ’\ n ’;
}
*/



// ============================================================================
// EXAMPLE 20: Class: BankAccount
// ============================================================================

/*
class BankAccount {
private :
double balance ;
*/



// ============================================================================
// EXAMPLE 21: Strong guarantee : balance unchanged on failure
// ============================================================================

/*
// Strong guarantee : balance unchanged on failure
void withdraw ( double amount ) {
if ( amount < 0) {
throw std :: i n v a l i d _ a r g u m e n t ( " Negative withdrawal " ) ;
}
if ( amount > balance ) {
throw std :: runtime_error ( " Insufficient funds " ) ;
}
balance -= amount ; // Only executed if no exception
}
*/



// ============================================================================
// EXAMPLE 22: Class: FileException
// ============================================================================

/*
class FileException : public std :: runtime_error {
public :
FileException ( const std :: string & filename )
: std :: runtime_error ( " File error : " + filename ) ,
filename_ ( filename ) {}
*/



// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 9: Additional Fundamentals" << std::endl;
    
    // Your test code here
    
    return 0;
}
