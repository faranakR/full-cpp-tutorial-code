/*=============================================================================
 * CHAPTER 5: PROGRAM ORGANIZATION
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 16 code example(s) from Chapter 5.
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
// EXAMPLE 1: constexpr int f { five () };
// ============================================================================

int main () {
constexpr double gravity {9.8};
constexpr int sum {4 + 5};
constexpr int something { sum };
// constexpr int f { five () };
return 0;


// ============================================================================
// EXAMPLE 2: Function: print
// ============================================================================

/*
namespace foo {
void print () {
std :: cout << " Hello \ n " ;
}
*/



// ============================================================================
// EXAMPLE 3: Function: main
// ============================================================================

int main () {
foo :: p ri nt He l lo Th er e () ;
return 0;


// ============================================================================
// EXAMPLE 4: Function: main
// ============================================================================

int main () {
using namespace foo ;
std :: cout << value << ’\ n ’;


// ============================================================================
// EXAMPLE 5: int 5 converts to bool true
// ============================================================================

/*
if (5) {
// int 5 converts to bool true
std :: cout << " This executes because 5 is non - zero \ n " ;
}
*/



// ============================================================================
// EXAMPLE 6: int 0 converts to bool false
// ============================================================================

/*
if (0) {
// int 0 converts to bool false
std :: cout << " This never executes \ n " ;
*/



// ============================================================================
// EXAMPLE 7: Method 1: Traditional for loop
// ============================================================================

/*
// Method 1: Traditional for loop
std :: cout << " Scores : " ;
for ( int i = 0; i < num_scores ; ++ i ) {
*/



// ============================================================================
// EXAMPLE 8: Calculate average
// ============================================================================

/*
// Calculate average
int total = 0;
for ( int i = 0; i < num_scores ; ++ i ) {
total += scores [ i ];
}
double average = static_cast < double >( total ) / num_scores ;
std :: cout << " Average : " << average << ’\ n ’;
*/



// ============================================================================
// EXAMPLE 9: Find maximum
// ============================================================================

/*
// Find maximum
int max_score = scores [0]; // Start with first element
for ( int i = 1; i < num_scores ; ++ i ) {
if ( scores [ i ] > max_score ) {
max_score = scores [ i ];
}
}
std :: cout << " Maximum : " << max_score << ’\ n ’;
*/



// ============================================================================
// EXAMPLE 10: Use auto for type deduction
// ============================================================================

/*
// Use auto for type deduction
for ( auto score : scores ) {
// score is a copy of each element
score = 100; // This doesn ’t modify the array !
}
*/



// ============================================================================
// EXAMPLE 11: To modify array elements , use reference
// ============================================================================

/*
// To modify array elements , use reference
for ( auto & score : scores ) {
score += 5; // Add 5 to each score
}
*/



// ============================================================================
// EXAMPLE 12: For read - only access , use const reference ( best practice )
// ============================================================================

/*
// For read - only access , use const reference ( best practice )
for ( const auto & score : scores ) {
std :: cout << score << " " ;
}
*/



// ============================================================================
// EXAMPLE 13: Works with other types too
// ============================================================================

/*
// Works with other types too
std :: string names []{ " Alice " , " Bob " , " Charlie " , " Diana " };
for ( const auto & name : names ) {
std :: cout << " Hello , " << name << " !\ n " ;
}
*/



// ============================================================================
// EXAMPLE 14: Arrays decay to pointers when passed to functions
// ============================================================================

/*
// Arrays decay to pointers when passed to functions
void printArray ( int arr [] , int size ) {
for ( int i = 0; i < size ; ++ i ) {
std :: cout << arr [ i ] << " " ;
}
std :: cout << ’\ n ’;
*/



// ============================================================================
// EXAMPLE 15: Finding elements
// ============================================================================

/*
// Finding elements
auto it = std :: find ( arr . begin () , arr . end () , 60) ;
if ( it != arr . end () ) {
std :: cout << " Found 60 at position "
<< std :: distance ( arr . begin () , it ) << ’\ n ’;
}
*/



// ============================================================================
// EXAMPLE 16: Typo in function name - but compiles without override !
// ============================================================================

/*
class Derived : public Base {
public :
// Typo in function name - but compiles without override !
void fooo ( int x ) {} // Creates new function , doesn ’t override
// With override , compiler catches the error
void fooo ( int x ) override {} // ERROR : no function to override
*/



// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 5: Program Organization" << std::endl;
    
    // Your test code here
    
    return 0;
}
