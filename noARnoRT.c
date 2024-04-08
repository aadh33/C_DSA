#include<stdio.h>

// Function prototype declaration for sum function
void sum(void);

// Main function
void main(){
    sum();  // Call the sum function
}

// Definition of sum function
void sum(){
    int a = 5, b = 7, sum = 0;  // Declare and initialize local variables: a, b, and sum
    sum = a + b;  // Calculate the sum of a and b and store the result in sum

    // Print the calculated sum
    printf("The sum of %d and %d is: %d\n", a, b, sum);
}
/* In summary, the program demonstrates the usage 
of a function (sum) with no arguments 
(void) and a return type of void (indicating no return value). 
The sum function calculates the sum of two integers (a and b) 
and prints the result using printf within the same program. 
This example illustrates the concept of function declaration, definition, 
and usage in C programming without involving function return values or arguments */