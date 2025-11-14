/*=============================================================================
 * CHAPTER 18: OBJECT-ORIENTED PROGRAMMING
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 8 code example(s) from Chapter 18.
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
// EXAMPLE 1: Data members ( attributes )
// ============================================================================

/*
class Rectangle {
private :
// Data members ( attributes )
int width ;
int height ;
*/



// ============================================================================
// EXAMPLE 2: Member functions ( methods )
// ============================================================================

/*
// Member functions ( methods )
void setWidth ( int w ) {
if ( w > 0) {
width = w ;
}
}
void setHeight ( int h ) {
if ( h > 0) {
height = h ;
}
}
*/



// ============================================================================
// EXAMPLE 3: Function: draw
// ============================================================================

/*
void draw () {
std :: cout << " Drawing a " << width << " x " << height
<< " rectangle \ n " ;
}
*/



// ============================================================================
// EXAMPLE 4: Class: Rectangle
// ============================================================================

/*
class Rectangle {
private : // Only accessible within the class
int width ;
int height ;
*/



// ============================================================================
// EXAMPLE 5: Accessible from outside the class
// ============================================================================

/*
// Accessible from outside the class
void setDimensions ( int w , int h ) {
width = w ;
// OK : accessing private member from within class
height = h ;
}
int getArea () {
return width * height ;
}
*/



// ============================================================================
// EXAMPLE 6: OK : getArea is public
// ============================================================================

/*
std :: cout << rect . getArea () << ’\ n ’;
// OK : getArea is public
18.4. CONSTRUCTORS: INITIALIZING OBJECTS
return 0;
*/



// ============================================================================
// EXAMPLE 7: Override virtual function
// ============================================================================

/*
};
class Dog : public Animal {
public :
// Override virtual function
void makeSound () const override {
std :: cout << " Woof !\ n " ;
}
18 };
*/



// ============================================================================
// EXAMPLE 8: Function: draw
// ============================================================================

/*
void draw () const override {
std :: cout << " Drawing widget \ n " ;
}
*/



// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 18: Object-Oriented Programming" << std::endl;
    
    // Your test code here
    
    return 0;
}
