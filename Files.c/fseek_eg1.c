#include<stdio.h>
#include<stdlib.h>

int main() {
    char ch;            // Declare a variable 'ch' to hold characters read from the file
    FILE *fp = NULL;    // Declare a file pointer 'fp' and initialize it to NULL

    // Attempt to open the file "abc.txt" in read mode ('r')
    fp = fopen("abc.txt", "r");

    // Check if file opening was unsuccessful (file pointer is NULL)
    if (fp == NULL) {
        printf("Error opening file\n");  // Print an error message
        exit(1);  // Terminate the program with an error status
    }

    // Move the file pointer to the second byte in the file (offset = 1 from the beginning)
    fseek(fp, 1, SEEK_SET);

    // Read a character from the current position of the file pointer
    ch = fgetc(fp);

    // Print the character read from the file after seeking to the second byte
    printf("The output of SEEK_SET is: %c", ch);

    // Move the file pointer 3 bytes forward from the current position (relative seek)
    fseek(fp, 3, SEEK_CUR);

    // Read a character from the current position of the file pointer
    ch = fgetc(fp);

    // Print the character read from the file after seeking 3 bytes forward
    printf("\nThe output of SEEK_CUR is: %c", ch);

    // Move the file pointer 2 bytes backward from the end of the file (relative to end)
    fseek(fp, -2, SEEK_END);

    // Read a character from the current position of the file pointer
    ch = fgetc(fp);

    // Print the character read from the file after seeking 2 bytes backward from end
    printf("\nThe output of SEEK_END is: %c", ch);

    // Close the file stream to release resources
    fclose(fp);

    return 0;  // Exit from the program with a success status
}
/*
#include<stdio.h> and #include<stdlib.h>: Include necessary header files for standard input/output and memory allocation functions.

int main() {: Begin the main() function.

char ch;: Declare a character variable ch to store characters read from the file.

FILE *fp = NULL;: Declare a file pointer fp and initialize it to NULL.

File Opening and Error Checking:

fp = fopen("abc.txt", "r");: Attempt to open the file named "abc.txt" in read mode ("r").
if (fp == NULL) { ... }: Check if the file opening was unsuccessful (file pointer fp is NULL).
printf("Error opening file\n");: Print an error message indicating the failure to open the file.
exit(1);: Terminate the program with a non-zero status (indicating an error).
File Seeking and Character Reading:

fseek(fp, 1, SEEK_SET);: Move the file pointer fp to the second byte in the file (offset = 1 from the beginning).

ch = fgetc(fp);: Read a character from the current position of the file pointer fp.

printf("The output of SEEK_SET is: %c", ch);: Print the character read after seeking to the second byte.

fseek(fp, 3, SEEK_CUR);: Move the file pointer fp 3 bytes forward from the current position.

ch = fgetc(fp);: Read a character from the new position of the file pointer fp.

printf("\nThe output of SEEK_CUR is: %c", ch);: Print the character read after seeking 3 bytes forward.

fseek(fp, -2, SEEK_END);: Move the file pointer fp 2 bytes backward from the end of the file.

ch = fgetc(fp);: Read a character from the new position of the file pointer fp.

printf("\nThe output of SEEK_END is: %c", ch);: Print the character read after seeking 2 bytes backward from the end.

File Closing:

fclose(fp);: Close the file stream associated with the file pointer fp to release resources.
return 0;: Exit from the main() function with a success status (indicating successful execution of the program).

Summary:
This C program demonstrates file operations using fseek() 
to move the file pointer to different positions within a file 
(SEEK_SET, SEEK_CUR, SEEK_END) and fgetc() to read characters from those positions. 
The program also performs error checking to ensure that the file is 
successfully opened before proceeding with file operations. 
Each operation is followed by printing the character read from the 
specified file position along with appropriate messages. 
Finally, the file stream is closed to release system resources.
*/