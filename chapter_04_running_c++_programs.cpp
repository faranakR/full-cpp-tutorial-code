/*=============================================================================
 * CHAPTER 4: RUNNING C++ PROGRAMS
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 6 code example(s) from Chapter 4.
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
std :: cout << " Enter your age : " ;
int age ;
std :: cin >> age ;
std :: cout << " You are " << age << " years old .\ n " ;
return 0;


// ============================================================================
// EXAMPLE 2: Function: main
// ============================================================================

int main () {
std :: cout << " Enter your name and age : " ;
std :: string name ;
int age ;
std :: cin >> name >> age ;


// ============================================================================
// EXAMPLE 3: Code Example
// ============================================================================

/*
std :: cout << " Enter a 32 - bit RGBA value in hex : " ;
std :: uint32_t pixel {};
std :: cin >> std :: hex >> pixel ;
*/



// ============================================================================
// EXAMPLE 4: Class: Bird
// ============================================================================

/*
class Bird : public Animal {
public :
*/



// ============================================================================
// EXAMPLE 5: Function: move
// ============================================================================

/*
void move () override {
fly () ;
}
*/



// ============================================================================
// EXAMPLE 6: void fly () override {}
// ============================================================================

/*
class Penguin : public Bird {
public :
// void fly () override {}
*/



// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 4: Running C++ Programs" << std::endl;
    
    // Your test code here
    
    return 0;
}
