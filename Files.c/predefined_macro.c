#include <stdio.h>

int main() {
    // Display the current source file name
    printf("File : %s\n", __FILE__);

    // Display the current date when the program was compiled
    printf("Date : %s\n", __DATE__);

    // Display the current time when the program was compiled
    printf("Time : %s\n", __TIME__);

    // Display the current line number within the source file
    printf("Line : %d\n", __LINE__);
    
    // Check if the compiler supports the standard C library (STDC)
    #ifdef __STDC__
    printf("Standard C is supported.\n");
    #else
    printf("Standard C is not fully supported.\n");
    #endif
    
    // Check if the compiler is GCC (GNU Compiler Collection)
    #ifdef __GNUC__
    printf("Compiler : GCC\n");
    #else
    printf("Compiler : Unknown\n");
    #endif

    return 0;
}
