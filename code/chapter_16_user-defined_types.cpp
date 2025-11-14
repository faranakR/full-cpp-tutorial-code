/*=============================================================================
 * CHAPTER 16: USER-DEFINED TYPES
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 7 code example(s) from Chapter 16.
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
// EXAMPLE 1: Class: D
// ============================================================================

/*
class D i s t a n c e C o n v e r t e r {
static constexpr double KM_TO_MILES {0.621371};
public :
static Miles toMiles ( Kilometers km ) {
return km * KM_TO_MILES ;
}
static Kilometers toKilometers ( Miles mi ) {
return mi / KM_TO_MILES ;
}
*/



// ============================================================================
// EXAMPLE 2: Code Example
// ============================================================================

/*
std :: cout << " \ nClass scores :\ n " ;
for ( const auto & [ id , score ] : class_scores ) {
std :: cout << " Student " << id << " : " << score << ’\ n ’;
}
*/



// ============================================================================
// EXAMPLE 3: Class: Length
// ============================================================================

/*
class Length {
private :
int value ;
*/



// ============================================================================
// EXAMPLE 4: Class: Length
// ============================================================================

/*
class Length {
private :
int value ;
*/



// ============================================================================
// EXAMPLE 5: Class: Length
// ============================================================================

/*
class Length {
private :
int value ;
*/



// ============================================================================
// EXAMPLE 6: TextBox also has Widget ’s methods !
// ============================================================================

/*
// TextBox also has Widget ’s methods !
nameInput . disable () ;
if (! nameInput . isEnabled () ) {
std :: cout << " Text box is disabled \ n " ;
}
*/



// ============================================================================
// EXAMPLE 7: Function: enable
// ============================================================================

/*
class Widget {
public :
void enable () { enabled = true ; }
*/



// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 16: User-Defined Types" << std::endl;
    
    // Your test code here
    
    return 0;
}
