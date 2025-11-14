/*=============================================================================
 * CHAPTER 31: ADVANCED TOPICS
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 4 code example(s) from Chapter 31.
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
// EXAMPLE 1: When modification is needed
// ============================================================================

/*
}
// When modification is needed
void sortVector ( std :: vector < int >& data ) {
// Can modify the original vector
std :: sort ( data . begin () , data . end () ) ;
31 }
*/



// ============================================================================
// EXAMPLE 2: Function: main
// ============================================================================

int main () {
int x {5};
modifyValue ( x ) ;
std :: cout << x << ’\ n ’;


// ============================================================================
// EXAMPLE 3: Prevent inheritance entirely
// ============================================================================

/*
};
// Prevent inheritance entirely
class FinalClass final {
// ...
31 };
// class Derived : public FinalClass {};
*/



// ============================================================================
// EXAMPLE 4: Class: N
// ============================================================================

/*
class N e t w o r k E x c e p t i o n : public std :: exception {
public :
enum ErrorCode {
C O N N E C T I O N _ F A I L E D = 1001 ,
TIMEOUT = 1002 ,
I N V A L I D _ R E S P O N S E = 1003
};
*/



// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 31: Advanced Topics" << std::endl;
    
    // Your test code here
    
    return 0;
}
