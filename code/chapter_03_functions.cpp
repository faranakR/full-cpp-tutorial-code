/*=============================================================================
 * CHAPTER 3: FUNCTIONS
 * =============================================================================
 * 
 * C++ Development Course - Consolidated Examples
 * Original Author: Faranak Rajabi
 * 
 * This file contains 13 code example(s) from Chapter 3.
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
// EXAMPLE 1: Forward declaration needed !
// ============================================================================

// Forward declaration needed !
int add ( int x , int y ) ;
int main () {
int x { 5 };
int y { 6 };
std :: cout << add (x , y ) << ’\ n ’;
return 0;
11 }
add.cpp:
int add ( int x , int y ) {
return x + y ;
3 }


// ============================================================================
// EXAMPLE 2: Or as many statements as you want
// ============================================================================

/*
}
// Or as many statements as you want
int x {5};
std :: cout << x ;
x = x + 10;
// ... and so on
// Notice : No semicolon needed after the closing brace !
*/



// ============================================================================
// EXAMPLE 3: Function: doSomething
// ============================================================================

/*
namespace { // No name !
void doSomething () {
std :: cout << " This also has internal linkage \ n " ;
}
int secretValue {42};
*/



// ============================================================================
// EXAMPLE 4: Code Example
// ============================================================================

/*
while ( count <= 10) {
std :: cout << count << ’ ’;
++ count ;
*/



// ============================================================================
// EXAMPLE 5: Code Example
// ============================================================================

/*
std :: cout << " Rolling dice :\ n " ;
for ( int i {0}; i < 10; ++ i ) {
std :: cout << dice ( mt ) << ’ ’;
}
std :: cout << ’\ n ’;
*/



// ============================================================================
// EXAMPLE 6: Can be passed to functions without decay
// ============================================================================

/*
// Can be passed to functions without decay
auto printArray = []( const std :: array < int , 5 >& arr ) {
for ( const auto & elem : arr ) {
std :: cout << elem << " " ;
}
std :: cout << ’\ n ’;
};
*/



// ============================================================================
// EXAMPLE 7: Range - based for works
// ============================================================================

/*
// Range - based for works
for ( const auto & val : v1 ) {
std :: cout << val << " " ;
}
std :: cout << ’\ n ’;
*/



// ============================================================================
// EXAMPLE 8: Class: BankAccount
// ============================================================================

/*
class BankAccount {
private :
static int n e x t A c c o u n t N u m b e r ;
int accountNumber ;
std :: string ownerName ;
double balance ;
*/



// ============================================================================
// EXAMPLE 9: Constructor
// ============================================================================

/*
// Constructor
BankAccount ( const std :: string & name , double i nitialDe posit = 0.0)
: accountNumber ( n e x t A c c o u n t N u m b e r ++) ,
ownerName ( name ) {
if ( i nitialD eposit < 0) {
throw std :: i n v a l i d _ a r g u m e n t ( " Initial deposit cannot be negative " ) ;
}
balance = initi alDepos it ;
}
// Getters
int g e t A c c o u n t N u m b e r () const { return accountNumber ; }
std :: string getOwnerName () const { return ownerName ; }
double getBalance () const { return balance ; }
*/



// ============================================================================
// EXAMPLE 10: Operations
// ============================================================================

/*
// Operations
void deposit ( double amount ) {
if ( amount <= 0) {
throw std :: i n v a l i d _ a r g u m e n t ( " Deposit amount must be positive " ) ;
}
balance += amount ;
std :: cout << " Deposited : $ " << amount << ’\ n ’;
}
*/



// ============================================================================
// EXAMPLE 11: Function: withdraw
// ============================================================================

/*
void withdraw ( double amount ) {
if ( amount <= 0) {
throw std :: i n v a l i d _ a r g u m e n t ( " Withdrawal amount must be positive " ) ;
}
if ( amount > balance ) {
throw std :: runtime_error ( " Insufficient funds " ) ;
}
balance -= amount ;
std :: cout << " Withdrawn : $ " << amount << ’\ n ’;
}
*/



// ============================================================================
// EXAMPLE 12: Function: display
// ============================================================================

/*
void display () const {
std :: cout << " Account # " << accountNumber
<< " ( " << ownerName << " ) : $ "
<< balance << ’\ n ’;
}
*/



// ============================================================================
// EXAMPLE 13: Function: setValue
// ============================================================================

/*
void setValue ( const std :: string & text ) {
value = text ;
}
*/



// ============================================================================
// MAIN FUNCTION
// ============================================================================
// Uncomment the examples above and add your test code here

int main() {
    std::cout << "Chapter 3: Functions" << std::endl;
    
    // Your test code here
    
    return 0;
}
