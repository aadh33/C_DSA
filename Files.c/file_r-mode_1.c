#include<stdio.h>      // Including standard input-output library for file operations
#include<string.h>     // Including string library for string manipulation functions
#include<stdlib.h>     // Including standard library for exit function

void main(){           // Main function definition
    FILE *fp=NULL;          // Declaring a file pointer and initializing it to NULL
    fp=fopen("abc.txt","r");  // Opening a file named "abc.txt" in read mode ("r")
    char str[100], ch;  // Declaring a character array and a single character variable
    int i;             // Declaring an integer variable
    
    if(fp == NULL){  // Check if file pointer is NULL, indicating file open failure
        printf("Error opening file.");  // Print error message
        exit(1);  // Exit the program with a non-zero status
    }

    /* Reading file character by character until EOF (End of File)
    while (!feof(fp)) {
        ch = fgetc(fp);  // Read a character from the file
        printf("%c", ch);  // Print the character to the console
    }
    */

    fgets(str, 20, fp);  // Read a line from the file (up to 19 characters) and store in 'str'
    printf("%s", str);   // Print the read string to the console

    fclose(fp);            // Closing the file stream
}
