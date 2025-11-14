/*=============================================================================
 * CHAPTER 14: TYPE CONVERSION AND TEMPLATES
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 15 code example(s) from Chapter 14.
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

void i n c r e m e n t A n d P r i n t () {
static int s_value {1}; // Born on FIRST call only !
++ s_value ;
std :: cout << s_value << ’\ n ’;
7 }
// s_value doesn ’t die ! It just becomes inaccessible until next call
int main () {
i n c r e m e n t A n d P r i n t () ;
i n c r e m e n t A n d P r i n t () ;
i n c r e m e n t A n d P r i n t () ;
return 0;
14 }


// ============================================================================
// EXAMPLE 2: Each unique type causes instantiation
// ============================================================================

int main () {
// Each unique type causes instantiation
std :: cout << square (5) << ’\ n ’;
std :: cout << square (5) << ’\ n ’;
std :: cout << square (3.14) << ’\ n ’;
std :: cout << square (3.14 f ) << ’\ n ’;


// ============================================================================
// EXAMPLE 3: Create pairs of different types
// ============================================================================

int main () {
// Create pairs of different types
Pair < int > intPair {5 , 10};
Pair < double > doublePair {3.14 , 2.71};
Pair < char > charPair { ’A ’ , ’Z ’ };
std :: cout << " Max of int pair : " << getMax ( intPair ) << ’\ n ’;
std :: cout << " Max of double pair : " << getMax ( doublePair ) << ’\ n ’;
std :: cout << " Max of char pair : " << getMax ( charPair ) << ’\ n ’;


// ============================================================================
// EXAMPLE 4: Function: getArea
// ============================================================================

class Rectangle {
private :
int width ;
int height ;
public :
int getArea () { return width * height ; }
8 };
int main () {
Rectangle rect ;
std :: cout << rect . getArea () << ’\ n ’;
return 0;
14 }


// ============================================================================
// EXAMPLE 5: Class: Rectangle
// ============================================================================

/*
class Rectangle {
private :
int width ;
int height ;
*/



// ============================================================================
// EXAMPLE 6: Function: main
// ============================================================================

int main () {
Rectangle rect (10 , 20) ; // Calls constructor
std :: cout << rect . getArea () << ’\ n ’; // 200


// ============================================================================
// EXAMPLE 7: Class: Rectangle
// ============================================================================

/*
class Rectangle {
private :
int width ;
int height ;
*/



// ============================================================================
// EXAMPLE 8: Default constructor : 1 x1
// ============================================================================

int main () {
Rectangle rect1 ;
// Default constructor : 1 x1
Rectangle rect2 (5 , 10) ; // Parameterized : 5 x10
return 0;


// ============================================================================
// EXAMPLE 9: Class: Rectangle
// ============================================================================

/*
class Rectangle {
private :
int width ;
int height ;
std :: string color ;
*/



// ============================================================================
// EXAMPLE 10: Class: Rectangle
// ============================================================================

/*
class Rectangle {
private :
int width ;
int height ;
std :: string color ;
*/



// ============================================================================
// EXAMPLE 11: Class: Rectangle
// ============================================================================

/*
class Rectangle {
private :
int width ;
int height ;
*/



// ============================================================================
// EXAMPLE 12: Class: Rectangle
// ============================================================================

/*
class Rectangle {
private :
int width ;
int height ;
*/



// ============================================================================
// EXAMPLE 13: Function: setHeight
// ============================================================================

/*
void setHeight ( int height ) {
if ( height <= 0) {
throw std :: i n v a l i d _ a r g u m e n t ( " Height must be positive " ) ;
}
this - > height = height ;
}
*/



// ============================================================================
// EXAMPLE 14: Class: Rectangle
// ============================================================================

/*
class Rectangle {
private :
int width ;
int height ;
*/



// ============================================================================
// EXAMPLE 15: Code Example
// ============================================================================

/*
Rectangle ( int w , int h ) : width ( w ) , height ( h ) {
std :: cout << " Constructor called \ n " ;
}
*/



// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 14: Type Conversion and Templates" << std::endl;
    
    // Your test code here
    
    return 0;
}
