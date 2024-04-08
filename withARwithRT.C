#include<stdio.h>

// Function prototype declaration for sum function
int sum(int, int);

// Main function
int main(){
    int a, b, s;  // Declare integer variables a, b, and s

    printf("Enter the value of the variables:");  // Prompt the user to enter values
    scanf("%d %d", &a, &b);  // Read integers entered by the user and store in a and b

    s = sum(a, b);  // Call the sum function with arguments a and b and store the result in s

    printf("\nThe value of the sum = %d", s);  // Print the calculated sum

    return 0;  // Return 0 to indicate successful completion of the program
}

// Definition of sum function
int sum(int a, int b){
    int sum;  // Declare integer variable sum

    sum = a + b;  // Calculate the sum of a and b

    return sum;  // Return the calculated sum back to the caller (main function)
}
/*
Explanation:
Function Prototype (int sum(int, int);):

This line declares a function prototype for the sum function. The sum function takes two integer arguments (int a, int b) and returns an integer (int).
Main Function (int main()):

The main function is the starting point of the program. It returns an integer (int) to indicate the status of program execution (usually 0 for successful execution).

int a, b, s;:

Declares integer variables a, b, and s to store user inputs and the calculated sum.
printf("Enter the value of the variables:");:

Displays a message prompting the user to enter values for a and b.
scanf("%d %d", &a, &b);:

Reads two integers entered by the user and stores them in variables a and b.
s = sum(a, b);:

Calls the sum function with arguments a and b.
The return value of sum (the sum of a and b) is stored in s.
printf("\nThe value of the sum = %d", s);:

Displays the calculated sum (s) using printf.
return 0;:

Returns 0 from the main function, indicating successful program execution.
Sum Function (int sum(int a, int b)):

This function definition calculates the sum of two integer parameters (a and b).

int sum;:

Declares an integer variable sum to hold the result of the addition.
sum = a + b;:

Calculates the sum of a and b and assigns it to the variable sum.
return sum;:

Returns the calculated sum (sum) back to the caller (the main function).
Function Explanation:
Function Type:

The sum function is defined with a return type of int, indicating that it returns an integer value (sum of a and b).
Function Invocation:

The sum function is invoked (called) from the main function with two arguments (a and b).
The result of the sum function (the calculated sum) is assigned to the variable s in main.
Parameter Passing:

The sum function accepts two integer parameters (a and b) passed from the main function.
These parameters are used to perform a specific task (calculating the sum).
Return Value:

The sum function returns the calculated sum (sum = a + b;) back to the caller (main function) using return sum;.
In summary, 
this program demonstrates the use of functions with parameters
 (int a, int b) and a return type (int) in C programming.
  The sum function calculates the sum of two integers (a and b)
   and returns the result to the main function, 
   which then displays the sum using printf.
    This example highlights the modularity and reusability of functions in C, 
    allowing specific tasks (like arithmetic operations) to be encapsulated 
    and invoked from different parts of the program.


*/