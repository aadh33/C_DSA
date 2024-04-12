#include<stdio.h>      // Including standard input-output library for file operations
#include<string.h>     // Including string library for string manipulation functions

void main(){           // Main function definition
    FILE *fp;          // Declaring a file pointer
    fp=fopen("abc.txt","w");  // Opening a file named "abc.txt" in write mode ("w")
    char str[100]="Adithyan Manoj";  // Declaring a character array and initializing it with a string
    int i;             // Declaring an integer variable
    
    if(fp=NULL){
        printf("error");
        exit(1);
    }
    
    // Writing each character of the string to the file using fputc()
 /*    for(i=0;i<strlen(str);i++){  
        fputc(str[i],fp);  // Writing each character of the string 'str' to the file 'fp'
    } */

    fprintf(fp,"%s",str);  // Writing the entire string 'str' to the file using fprintf()

    fclose(fp);            // Closing the file stream
}
