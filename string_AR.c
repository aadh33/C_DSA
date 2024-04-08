#include<stdio.h>
#include<string.h>

// Function prototype declaration for modify function
void modify(char[], char[]);

// Main function
void main(){
    char str1[] = "Adithyan";  // Declare and initialize string str1
    char str2[] = "Manoj";  // Declare and initialize string str2

    modify(str1, str2);  // Call the modify function with str1 and str2
}

// Definition of modify function
void modify(char str1[], char str2[]){
    int i;  // Declare integer variable i for loop iteration

    // Calculate the length of string str1 using strlen function
    int len = strlen(str1);
    printf("The length of string 1 is %d \n", len);  // Print the length of str1

    str2[1] = 'h';  // Modify the character at index 1 of str2 to 'h'

    // Print the modified strings str1 and str2
    printf("The new strings are: %s %s", str1, str2);
}
/*
Explanation:
Header Files:

#include<stdio.h>: Includes the standard input/output library for using printf.
#include<string.h>: Includes the string manipulation library for using functions like strlen.
Function Prototype (void modify(char[], char[]);):

Declares a function prototype for the modify function. It specifies that modify takes two char arrays (strings) as arguments.
Main Function (void main()):

The main function is the starting point of the program.
char str1[] = "Adithyan";: Declares and initializes a character array str1 with the string "Adithyan".
char str2[] = "Manoj";: Declares and initializes a character array str2 with the string "Manoj".
modify(str1, str2);: Calls the modify function passing str1 and str2 as arguments.
Modify Function (void modify(char str1[], char str2[])):

Definition of the modify function that takes two character arrays (char[]) as parameters (str1 and str2).

int i;: Declares an integer variable i for loop iteration (not currently used).

int len = strlen(str1);: Calculates the length of the string str1 using the strlen function and stores it in len.

printf("The length of string 1 is %d \n", len);: Prints the length of str1 using printf.

str2[1] = 'h';: Modifies the character at index 1 of str2 to the character 'h'.

printf("The new strings are: %s %s", str1, str2);: Prints the modified strings str1 and str2 using printf.

Additional Notes:
Array Passing:

Strings (char arrays) are passed to functions in C as pointers (or references), allowing the functions to modify the original strings.
String Manipulation:

The program demonstrates basic string manipulation, such as obtaining string length (strlen) and modifying individual characters within a string.
Output:

The program outputs the length of str1 and the modified version of str2 after changing a character, showcasing the use of string operations and array manipulation in C.
This program illustrates how to work with strings (character arrays) and pass them to functions for manipulation in C. The modify function showcases basic string operations and the ability to modify strings passed as arguments.
*/