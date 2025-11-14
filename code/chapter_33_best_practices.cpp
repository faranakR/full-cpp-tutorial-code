/*=============================================================================
 * CHAPTER 33: BEST PRACTICES
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 4 code example(s) from Chapter 33.
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
// EXAMPLE 1: Code Example
// ============================================================================

/*
if ( pos != nums . end () ) {
std :: cout << " Found number > 4: " << * pos << ’\ n ’;
}
*/



// ============================================================================
// EXAMPLE 2: Rule 4: Overloading vs defaults
// ============================================================================

/*
}
void useDefault ( int size = get DefaultS ize () ) {
std :: cout << " Size is : " << size << ’\ n ’;
24 }
// Rule 4: Overloading vs defaults
void ambiguous ( int x ) {
std :: cout << " One parameter : " << x << ’\ n ’;
29 }
void ambiguous ( int x , int y = 20) {
std :: cout << " Two parameters : " << x << " , " << y << ’\ n ’;
33 }
*/



// ============================================================================
// EXAMPLE 3: Example 1: Coordinate conversion
// ============================================================================

int main () {
// Example 1: Coordinate conversion
P ol ar Co o rd in at e polar {5.0 , M_PI / 4}; // radius =5 , angle =45 degrees
Point cartesian = p o l a r T o C a r t e s i a n ( polar ) ;
std :: cout << " Cartesian : ( " << cartesian . x << " , " << cartesian . y << " ) \ n " ;
// Example 2: Multiple return values
Divi sionResu lt result = divide (17 , 5) ;
std :: cout << " 17 / 5 = " << result . quotient
<< " remainder " << result . remainder << ’\ n ’;


// ============================================================================
// EXAMPLE 4: Output :
// ============================================================================

int main () {
std :: cout << " Creating TextBox with default constructor :\ n " ;
TextBox box1 ;
// Output :
// Widget default constructor
// TextBox default constructor


// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 33: Best Practices" << std::endl;
    
    // Your test code here
    
    return 0;
}
