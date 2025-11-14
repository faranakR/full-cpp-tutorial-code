/*=============================================================================
 * CHAPTER 20: INHERITANCE
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 5 code example(s) from Chapter 20.
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
// EXAMPLE 1: Pass by address allows optional parameters
// ============================================================================

/*
// Pass by address allows optional parameters
void getValue ( int input , int * output ) {
if ( output ) { // Check for null
* output = input * 2;
}
9 }
// Comparison of all three methods
void passByValue ( std :: string str ) {
std :: cout << " By value : " << str << ’\ n ’;
str = " Modified " ; // Doesn ’t affect original
15 }
void p as sB yR e fe re nc e ( std :: string & str ) {
std :: cout << " By reference : " << str << ’\ n ’;
str = " Modified by reference " ; // Affects original
20 }
*/



// ============================================================================
// EXAMPLE 2: Function: passByAddress
// ============================================================================

/*
void passByAddress ( std :: string * str ) {
if (! str ) return ; // Safety check
*/



// ============================================================================
// EXAMPLE 3: Using optional output parameter
// ============================================================================

int main () {
// Using optional output parameter
int result {};
getValue (21 , & result ) ;
std :: cout << " Result : " << result << ’\ n ’;


// ============================================================================
// EXAMPLE 4: Function: enable
// ============================================================================

/*
class Widget {
public :
void enable () {
enabled = true ;
}
*/



// ============================================================================
// EXAMPLE 5: Function: disable
// ============================================================================

/*
void disable () {
enabled = false ;
}
*/



// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 20: Inheritance" << std::endl;
    
    // Your test code here
    
    return 0;
}
