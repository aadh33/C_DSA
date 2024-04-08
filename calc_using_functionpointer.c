#include<stdio.h>  // Include standard I/O library for printf and scanf

// Function to perform addition of two integers and print the result
void add(int a, int b){
    printf("Sum=%d", a + b);  // Print the sum of a and b
}

// Function to perform subtraction of two integers and print the result
void sub(int a, int b){
    printf("\nSub=%d", a - b);  // Print the difference of a and b
}

// Function to perform multiplication of two integers and print the result
void mul(int a, int b){
    printf("\nMul=%d", a * b);  // Print the product of a and b
}

// Function to perform division of two integers and print the result
void div(int a, int b){
    if (b != 0) {
        printf("\nDiv=%d", a / b);  // Print the quotient of a and b (handle division by zero)
    } else {
        printf("\nError: Division by zero!");  // Handle division by zero error
    }
}

int main(){
    int a, b, ch;  // Declare variables to store user input
    
    // Display menu options for the user
    printf("\n0 for add\n1 for subtraction\n2 for multiplication\n3 for division\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);  // Read user's choice of operation
    
    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);  // Read two integers from user as input
    
    // Perform operation based on user's choice using a switch statement
    switch(ch) {
        case 0:
            add(a, b);  // Call add function with inputs a and b
            break;
        case 1:
            sub(a, b);  // Call sub function with inputs a and b
            break;
        case 2:
            mul(a, b);  // Call mul function with inputs a and b
            break;
        case 3:
            div(a, b);  // Call div function with inputs a and b
            break;
        default:
            printf("Enter a valid choice");  // Display error message for invalid choice
            break;
    }
    
    return 0;  // Return 0 to indicate successful execution
}
/*
Detailed Explanation:
Include Standard I/O Library (#include<stdio.h>):

This line includes the standard I/O library, which provides functions like printf and scanf used for input and output operations.
Function Definitions (add, sub, mul, div):

These functions perform specific arithmetic operations (addition, subtraction, multiplication, division) on two integers (a and b) and print the result using printf.
Main Function (main):

Declares integer variables a, b, and ch to store user input for numbers and choice of operation.
Displays a menu of arithmetic operations (0 for addition, 1 for subtraction, 2 for multiplication, 3 for division) using printf.
Reads the user's choice (ch) of operation using scanf.
Prompts the user to enter two integers (a and b) and reads them using scanf.
Switch Statement (switch(ch)) - Handling User's Choice:

Executes different cases based on the value of ch (user's choice of operation):
case 0: Calls the add function with a and b as arguments to perform addition.
case 1: Calls the sub function with a and b as arguments to perform subtraction.
case 2: Calls the mul function with a and b as arguments to perform multiplication.
case 3: Calls the div function with a and b as arguments to perform division (checks for division by zero).
default: Displays an error message if the user enters an invalid choice.
Comments:

Comments are added throughout the code to explain the purpose of each line or section for better understanding and readability.
Program Flow:
The program starts execution from the main function.
It displays a menu of arithmetic operations and prompts the user to enter their choice (ch).
The program reads the user's choice and prompts the user to enter two integers (a and b).
Based on the user's choice (ch), the program executes the corresponding arithmetic operation using the switch statement.
The result of the selected operation is printed on the console.
If the user enters an invalid choice (default case), an error message is displayed.
The program terminates after executing the selected operation.
Key Points to Note:
The program uses functions (add, sub, mul, div) to encapsulate specific functionalities (arithmetic operations) for better modularity and code organization.
Error handling is included in the div function to handle division by zero.
Comments are added to explain the purpose and functionality of each line of code, enhancing code readability and comprehension.
The switch statement is used to implement a menu-driven approach, allowing the user to choose among different arithmetic operations.
*/