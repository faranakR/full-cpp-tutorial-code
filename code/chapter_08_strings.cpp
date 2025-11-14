/*=============================================================================
 * CHAPTER 8: STRINGS
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 34 code example(s) from Chapter 8.
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
unsigned
unsigned
unsigned
unsigned
short us ;
int ui ;
long ul ;
long long ull ;
return 0;


// ============================================================================
// EXAMPLE 2: Least types - minimum guaranteed size
// ============================================================================

int main () {
// Least types - minimum guaranteed size
std :: cout << " Least types ( bits ) :\ n " ;
std :: cout << sizeof ( std :: int_least8_t ) * 8 << ’\ n ’;
std :: cout << sizeof ( std :: int_least16_t ) * 8 << ’\ n ’;
std :: cout << sizeof ( std :: int_least32_t ) * 8 << ’\ n ’;


// ============================================================================
// EXAMPLE 3: Function: main
// ============================================================================

int main () {
std :: cout << " Enter a number : \ n " ;
int x {};
std :: cin >> x ;


// ============================================================================
// EXAMPLE 4: Function: main
// ============================================================================

int main () {
std :: cout << " Enter a number : \ n " ;
int x {};
std :: cin >> x ;


// ============================================================================
// EXAMPLE 5: Function: main
// ============================================================================

int main () {
std :: cout << " Enter a number : \ n " ;
int x {};
std :: cin >> x ;


// ============================================================================
// EXAMPLE 6: Function: main
// ============================================================================

int main () {
std :: cout << " Enter your name : " ;
std :: string name {};
std :: cin >> name ;


// ============================================================================
// EXAMPLE 7: Function: main
// ============================================================================

int main () {
std :: cout << " Enter your name : " ;
std :: string name {};
std :: getline ( std :: cin >> std :: ws , name ) ;


// ============================================================================
// EXAMPLE 8: Function: main
// ============================================================================

int main () {
int x {5}; // This creates a variable x
std :: string s { " Hello , world ! " }; // This creates a copy of the literal
std :: cout << s << " \ n " ;
std :: cout << x << " \ n " ;
return 0;


// ============================================================================
// EXAMPLE 9: Code Example
// ============================================================================

/*
std :: cout << large << " \ n " ;
return 0;
*/



// ============================================================================
// EXAMPLE 10: Prints 3
// ============================================================================

int main () {
doSomething () ;
// Prints 3
std :: cout << g_mode << ’\ n ’; // Also prints 3


// ============================================================================
// EXAMPLE 11: Function: main
// ============================================================================

int main () {
while ( true ) {
std :: cout << " Loop again ( y / n ) ? " ;
char c {};
std :: cin >> c ;


// ============================================================================
// EXAMPLE 12: Code Example
// ============================================================================

/*
std :: cout << " You selected : " << selection << ’\ n ’;
return 0;
*/



// ============================================================================
// EXAMPLE 13: Class: Rectangle
// ============================================================================

/*
class Rectangle {
private :
int width ;
int height ;
int * data ; // Dynamic memory
*/



// ============================================================================
// EXAMPLE 14: Code Example
// ============================================================================

/*
Rectangle ( int w , int h )
: width ( w ) , height ( h ) {
data = new int [ width * height ]; // Allocate memory
std :: cout << " Constructor : allocated memory \ n " ;
}
*/



// ============================================================================
// EXAMPLE 15: Destructor called automatically at end of scope
// ============================================================================

int main () {
Rectangle rect (10 , 20) ;
// Destructor called automatically at end of scope
return 0;


// ============================================================================
// EXAMPLE 16: Class: Rectangle
// ============================================================================

/*
class Rectangle {
private :
int width ;
int height ;
*/



// ============================================================================
// EXAMPLE 17: Non - const function
// ============================================================================

/*
// Non - const function
void doubleSize () {
width *= 2;
height *= 2;
}
*/



// ============================================================================
// EXAMPLE 18: Class: Rectangle
// ============================================================================

/*
class Rectangle {
private :
int width ;
int height ;
static int objectCount ;
*/



// ============================================================================
// EXAMPLE 19: Function: main
// ============================================================================

int main () {
std :: cout << " Objects : " << Rectangle :: ge tObject Count () << ’\ n ’; // 0


// ============================================================================
// EXAMPLE 20: Class: Rectangle
// ============================================================================

/*
class Rectangle {
private :
int width , height ;
*/



// ============================================================================
// EXAMPLE 21: Code Example
// ============================================================================

/*
Rectangle ( int w , int h ) : width ( w ) , height ( h ) {
std :: cout << " Rectangle created \ n " ;
}
*/



// ============================================================================
// EXAMPLE 22: Function: display
// ============================================================================

/*
void display () const {
std :: cout << width << " x " << height << ’\ n ’;
}
*/



// ============================================================================
// EXAMPLE 23: stackRect and smartRect automatically cleaned up
// ============================================================================

/*
}
return 0;
// stackRect and smartRect automatically cleaned up
*/



// ============================================================================
// EXAMPLE 24: All smart pointers automatically clean up
// ============================================================================

/*
}
return 0;
// All smart pointers automatically clean up
*/



// ============================================================================
// EXAMPLE 25: Class: Point
// ============================================================================

/*
class Point {
private :
int x , y ;
*/



// ============================================================================
// EXAMPLE 26: Default constructor ( required for arrays )
// ============================================================================

/*
// Default constructor ( required for arrays )
Point () : x (0) , y (0) {
std :: cout << " Default constructor \ n " ;
}
Point ( int x , int y ) : x ( x ) , y ( y ) {
std :: cout << " Parameterized constructor \ n " ;
}
*/



// ============================================================================
// EXAMPLE 27: Function: display
// ============================================================================

/*
void display () const {
std :: cout << " ( " << x << " , " << y << " ) \ n " ;
}
*/



// ============================================================================
// EXAMPLE 28: Array of objects : calls default constructor
// ============================================================================

int main () {
// Array of objects : calls default constructor
Point points1 [3]; // 3 default constructors called
// Array with in itializa tion
Point points2 [] = {
Point (1 , 2) ,
// Parameterized
Point (3 , 4) ,
// Parameterized
Point ()
// Default
};


// ============================================================================
// EXAMPLE 29: C ++11: Uniform ini tializat ion
// ============================================================================

/*
// C ++11: Uniform ini tializat ion
Point points3 [] = {
{5 , 6} ,
{7 , 8} ,
{} // Default
};
*/



// ============================================================================
// EXAMPLE 30: Iterate through array
// ============================================================================

/*
// Iterate through array
for ( const Point & p : points3 ) {
p . display () ;
}
*/



// ============================================================================
// EXAMPLE 31: Class: Widget
// ============================================================================

/*
class Widget {
public :
Widget ( int w , int h ) : width ( w ) , height ( h ) {}
Widget ( int size ) : Widget ( size , size ) {} // Delegating constructor
protected :
int width , height ;
8 };
*/



// ============================================================================
// EXAMPLE 32: Inherit all Widget constructors
// ============================================================================

/*
class TextBox : public Widget {
public :
// Inherit all Widget constructors
using Widget :: Widget ;
*/



// ============================================================================
// EXAMPLE 33: Class: TextBox
// ============================================================================

/*
class TextBox : public Widget {
public :
*/



// ============================================================================
// EXAMPLE 34: When box goes out of scope :
// ============================================================================

int main () {
TextBox box ;
// When box goes out of scope :
// Output :
// TextBox destructor
// Widget destructor
return 0;


// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 8: Strings" << std::endl;
    
    // Your test code here
    
    return 0;
}
