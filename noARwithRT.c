#include<stdio.h>

// Function prototype declaration for sum function
int sum(void);

// Main function
void main(){
    int s;  // Declare an integer variable s
    s = sum();  // Call the sum function and store the return value in s
    printf("sum= %d", s);  // Print the value of s
}

// Definition of sum function
int sum(){
    int x, y, sum = 0;  // Declare integer variables x, y, and sum and initialize sum to 0
    printf("Enter the value of x and y=\n");  // Prompt the user to enter values for x and y
    scanf("%d %d", &x, &y);  // Read integers entered by the user and store them in x and y
    sum = x + y;  // Calculate the sum of x and y
    return sum;  // Return the calculated sum
}
/* In summary, this program demonstrates the usage of a simple function (sum) 
to calculate the sum of two integers (x and y) entered by the user. 
The main function calls the sum function to perform this calculation,
 and then prints the result using printf.
 This example highlights the concepts of function declaration,
  definition, return type, and function invocation with user input,
   working of function without argument and with returntype  
  and output in C programming. */