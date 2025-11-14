/*=============================================================================
 * CHAPTER 34: MEMORY MANAGEMENT
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 4 code example(s) from Chapter 34.
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
// EXAMPLE 1: Pure virtual function
// ============================================================================

/*
class Shape { // Abstract class
public :
// Pure virtual function
virtual double area () const = 0;
*/



// ============================================================================
// EXAMPLE 2: Regular virtual function ( has imple mentati on )
// ============================================================================

/*
// Regular virtual function ( has imple mentati on )
virtual void display () const {
std :: cout << " Shape with area : " << area ()
<< " and perimeter : " << perimeter () << ’\ n ’;
}
*/



// ============================================================================
// EXAMPLE 3: Class: Rectangle
// ============================================================================

/*
class Rectangle : public Shape {
private :
double width , height ;
*/



// ============================================================================
// EXAMPLE 4: Class: Circle
// ============================================================================

/*
class Circle : public Shape {
private :
double radius ;
*/



// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 34: Memory Management" << std::endl;
    
    // Your test code here
    
    return 0;
}
