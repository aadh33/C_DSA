#include <stdio.h>
//Factorial using indirect recursion
// Function prototypes
int fun1(int); // Declaration of fun1 function
int fun2(int); // Declaration of fun2 function

// Main function
void main() {
    int a = 5; // Declare and initialize variable 'a' with value 5

    // Print the result of fun1(a)
    printf("The answer is: %d", fun1(a));
}

// Function definition for fun2
int fun2(int n) {
    if (n <= 1) {
        return n; // Base case: Return n if n is 0 or 1
    } else {
        return n * fun1(n - 1); // Recursive call to fun1 with n-1
    }
}

// Function definition for fun1
int fun1(int n) {
    if (n <= 1) {
        return n; // Base case: Return n if n is 0 or 1
    } else {
        return n * fun2(n - 1); // Recursive call to fun2 with n-1
    }
}

/*
Explanation of Each Line:
#include <stdio.h>: Includes the standard input-output library, 
which is required for using printf() and other functions.

Function Prototypes:

int fun1(int);: Declares the fun1 function, specifying its return type (int) 
and parameter type (int).
int fun2(int);: Declares the fun2 function in a similar manner.
void main() {: Defines the main function, which returns void (nothing).

int a = 5;: Declares an integer variable a and initializes it with the value 5.

printf("The answer is: %d", fun1(a));:

Uses printf to print the result of calling fun1(a).
%d in the format string indicates that printf will replace
 it with the integer value returned by fun1(a).
Function Definitions:

int fun2(int n) {: Starts the definition of the fun2 function, 
which takes an integer parameter n.

if (n <= 1) { return n; }: Checks if n is less than or equal to 1. If true, returns n.
else { return n * fun1(n - 1); }: If n is greater than 1, calls fun1(n - 1) recursively and multiplies the result by n.
int fun1(int n) {: Starts the definition of the fun1 function, which also takes an integer parameter n.

if (n <= 1) { return n; }: Checks if n is less than or equal to 1. If true, returns n.
else { return n * fun2(n - 1); }: If n is greater than 1, calls fun2(n - 1) recursively and multiplies the result by n.
Program Flow:
fun1 and fun2 are two recursive functions that compute factorial using indirect recursion.
fun1 calls fun2 recursively.
fun2 calls fun1 recursively.
The recursion stops when n becomes 1, and the functions return the factorial value accordingly.
In main, fun1(5) is called initially with a = 5, which triggers a series of recursive calls between fun1 and fun2 to compute 5! (factorial of 5).
The result (5!) is printed using printf.
recursive function calls and their interaction in this program is key
 to comprehending how indirect recursion works and how functions in C c
 an call each other to solve complex problems recursively.
  Each function relies on the other to compute factorial through a series of recursive steps.
*/