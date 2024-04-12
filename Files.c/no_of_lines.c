#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;        // Declare a variable 'ch' to hold characters read from the file
    int count = 0;  // Initialize a counter variable 'count' for lines

    FILE *fp = NULL;    // Declare a file pointer 'fp' and initialize it to NULL

    // Attempt to open the file "abc.txt" in read mode ('r')
    fp = fopen("abc.txt", "r");

    // Check if file opening was unsuccessful (file pointer is NULL)
    if (fp == NULL) {
        printf("Error opening file\n");  // Print an error message
        exit(1);  // Terminate the program with an error status
    }

    // Loop to read characters from the file until EOF is reached
    while ((ch = fgetc(fp)) != EOF) {
        // Check if the current character is a newline character
        if (ch == '\n') {
            count++;  // Increment the line count
        }
    }

    fclose(fp);  // Close the file stream

    // Print the total number of lines counted
    printf("The number of lines in the file is %d\n", count);

    return 0;  // Exit from the program with a success status
}
/*
char ch;: Declares a character variable ch to store characters read from the file.

int count = 0;: Initializes a counter variable count to zero for counting lines.

FILE *fp = NULL;: Declares a file pointer fp and initializes it to NULL.

File Opening and Error Checking:

fp = fopen("abc.txt", "r");: Attempts to open the file "abc.txt" in read mode ("r").
Error Handling:
if (fp == NULL) { ... }: Checks if the file opening was unsuccessful (file pointer fp is NULL).
printf("Error opening file\n");: Prints an error message indicating the failure to open the file.
exit(1);: Terminates the program with a non-zero status (indicating an error).
Counting Lines in the File:

while ((ch = fgetc(fp)) != EOF) { ... }: Loops to read characters from the file until EOF (End of File) is reached.
ch = fgetc(fp): Reads a character from the file and assigns it to ch.
if (ch == '\n') { ... }: Checks if the current character is a newline ('\n') character.
count++;: Increments the line count (count) whenever a newline character is encountered.
File Closing:

fclose(fp);: Closes the file stream associated with the file pointer fp to release system resources.
Printing the Line Count:

printf("The number of lines in the file is %d\n", count);: Prints the total number of lines counted in the file.
return 0;: Exits from the main() function with a success status (indicating successful execution of the program).

Summary:
This C program opens a file named "abc.txt", 
reads characters from it one by one, and counts the number of newline characters 
('\n') encountered, which corresponds to the number of lines in the file. 
The program then prints the total line count at the end. Error handling is 
implemented to deal with cases where the file cannot be opened successfully.
 The file stream is properly closed after use to release resources.
*/