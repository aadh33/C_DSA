#include<stdio.h>      // Including standard input-output library for file operations
#include<string.h>     // Including string library for string manipulation functions
#include<stdlib.h>     // Including standard library for exit function

void main(){           // Main function definition
    FILE *fp;          // Declaring a file pointer
    fp = fopen("abc.txt", "w+");  // Opening a file named "abc.txt" in write mode ("w+")

    if(fp == NULL){  // Check if file pointer is NULL, indicating file open failure
        printf("Error opening file.\n");  // Print error message
        exit(1);  // Exit the program with a non-zero status
    }

    fputs("Jenny", fp);  // Writing the string "Jenny" to the file using fputs()

    // Uncomment the following block if you want to write a string character by character
    /*
    char str[] = "Jenny";  // Declaring and initializing a character array
    for(int i = 0; i < strlen(str); i++){  
        fputc(str[i], fp);  // Writing each character of the string 'str' to the file 'fp'
    }
    */

    fclose(fp);  // Closing the file stream
}
