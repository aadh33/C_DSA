#include<stdio.h>

// Function prototype declaration for sum function
void sum(int, int);

// Main function
void main(){
    int a, b;  // Declare integer variables a and b
    a = 50;  // Assign the value 50 to variable a
    b = 865;  // Assign the value 865 to variable b
    sum(a, b);  // Call the sum function with arguments a and b
}

// Definition of sum function
void sum(int a, int b){
    int sum = 0;  // Declare and initialize an integer variable sum to 0
    sum = a + b;  // Calculate the sum of a and b
    printf("sum= %d", sum);  // Print the calculated sum
}
/*
Program Summary:
This C program demonstrates the usage of functions with arguments and no return type (void return type).

Function Declarations and Definitions:

The program starts with #include<stdio.h> to include the standard input/output library for using printf and other functions.
The sum function is declared with the prototype void sum(int, int); before main(). This informs the compiler about the existence of the sum function and its parameter types (int, int) before its actual definition.
The sum function is defined later in the program. It takes two integer parameters (int a, int b) and does not return any value (void return type).
Main Function:

Inside main(), two integer variables a and b are declared and initialized with values (a = 50; and b = 865;).
The sum function is called with a and b as arguments (sum(a, b);).
Sum Function:

The sum function calculates the sum of two integers (a and b) passed to it as parameters.
It initializes a local integer variable sum to 0.
It calculates the sum of a and b (sum = a + b;).
Finally, it prints the calculated sum using printf.
Concepts Covered:
Function with Arguments:

Functions in C can accept arguments (values passed to them) which are specified within parentheses after the function name in both the declaration and definition.
In this program, the sum function accepts two integer arguments (int a, int b) which are used to perform a specific task (calculating the sum of two numbers).
No Return Type Function:

Functions in C can have different return types (void indicates no return value).
The sum function in this program is declared with a return type of void, meaning it does not return any value.
Instead of returning a value, the sum function performs its task (calculating the sum) and then exits without returning a value to the caller (main function in this case).
Function Prototypes:

A function prototype declares the function's name, return type, and parameters (if any) before the function is defined or used.
Function prototypes are used to inform the compiler about the existence and signature (return type and parameters) of functions that are defined later in the program or in separate files.
In summary, this program showcases the use of functions with arguments and no return type in C programming. The sum function demonstrates how to perform a specific task (calculating the sum of two numbers) using parameters passed to it, and the main function demonstrates how to call this function with appropriate arguments. This example highlights the modularity and reusability of functions in C, which can accept inputs (arguments) and perform tasks without necessarily returning a value.

*/