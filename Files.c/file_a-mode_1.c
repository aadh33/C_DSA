#include<stdio.h>      // Including standard input-output library for file operations
#include<string.h>     // Including string library for string manipulation functions
#include<stdlib.h>     // Including standard library for exit function

void main(){           // Main function definition
    FILE *fp=NULL;          // Declaring a file pointer and initializing it to NULL
    fp=fopen("abc.txt","a");  // Opening a file named "abc.txt" in read mode ("r")
    char str[100], ch;  // Declaring a character array and a single character variable
    int i;             // Declaring an integer variable
    
    if(fp == NULL){  // Check if file pointer is NULL, indicating file open failure
        printf("Error opening file.");  // Print error message
        exit(1);  // Exit the program with a non-zero status
    }
    printf("Enter the content to be appended: ");  // Prompting user to enter content
    gets(str);  // Reading user input (note: gets() is generally unsafe, consider using fgets())

    fprintf(fp, "%s", str);  // Appending user input to the file

    printf("Successfully appended.\n");  // Indicating successful append operation
    fclose(fp);  // Closing the file stream
}