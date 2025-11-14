/*=============================================================================
 * CHAPTER 24: TEMPLATES
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 8 code example(s) from Chapter 24.
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
// EXAMPLE 1: Old way
// ============================================================================

int main () {
// Old way
std :: cout << maxInt (10 , 20) << ’\ n ’;
std :: cout << maxDouble (3.14 , 2.71) << ’\ n ’;


// ============================================================================
// EXAMPLE 2: Without our helper function
// ============================================================================

int main () {
Color shirtColor { blue };
// Without our helper function
std :: cout << " Shirt color code : " << static_cast < int >( shirtColor ) << ’\ n ’;


// ============================================================================
// EXAMPLE 3: Better : Use const to prevent modification
// ============================================================================

/*
}
// Better : Use const to prevent modification
void p ri nt Ar r ay Co ns t ( const int arr [] , int size ) {
for ( int i = 0; i < size ; ++ i ) {
std :: cout << arr [ i ] << " " ;
}
std :: cout << ’\ n ’;
17 }
// Arrays are passed by reference ( not copied )
void modifyArray ( int arr [] , int size ) {
for ( int i = 0; i < size ; ++ i ) {
arr [ i ] *= 2; // Double each element
}
24 }
*/



// ============================================================================
// EXAMPLE 4: 2 D array : 3 rows , 4 columns
// ============================================================================

int main () {
// 2 D array : 3 rows , 4 columns
int matrix [3][4]{
{1 , 2 , 3 , 4} ,
// Row 0
{5 , 6 , 7 , 8} ,
// Row 1
{9 , 10 , 11 , 12}
// Row 2
};


// ============================================================================
// EXAMPLE 5: Iterate through 2 D array
// ============================================================================

/*
// Iterate through 2 D array
std :: cout << " Matrix contents :\ n " ;
for ( int row = 0; row < 3; ++ row ) {
for ( int col = 0; col < 4; ++ col ) {
std :: cout << matrix [ row ][ col ] << " \ t " ;
}
std :: cout << ’\ n ’;
}
*/



// ============================================================================
// EXAMPLE 6: Iterate using pointer
// ============================================================================

/*
// Iterate using pointer
std :: cout << " Using pointer : " ;
for ( int i = 0; i < 5; ++ i ) {
std :: cout << *( ptr + i ) << " " ;
}
std :: cout << ’\ n ’;
*/



// ============================================================================
// EXAMPLE 7: Get size at runtime
// ============================================================================

int main () {
// Get size at runtime
std :: cout << " How many scores ? " ;
int count ;
std :: cin >> count ;
// Allocate array on heap
int * scores = new int [ count ]{};


// ============================================================================
// EXAMPLE 8: Calculate average
// ============================================================================

/*
// Calculate average
int total = 0;
for ( int i = 0; i < count ; ++ i ) {
total += scores [ i ];
}
double average = static_cast < double >( total ) / count ;
std :: cout << " Average : " << average << ’\ n ’;
*/



// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 24: Templates" << std::endl;
    
    // Your test code here
    
    return 0;
}
