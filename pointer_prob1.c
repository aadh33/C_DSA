#include<stdio.h>

void main(){
    // Declare and initialize a character array `str` with a given string
    char str[] = "Welcome to my world, living in the start- King Kong";
    
    // Declare a character pointer `ptr` and point it to the start of the array `str`
    char *ptr = str;
    
    // Print the character pointed to by `ptr` (which is 'W')
    printf("%c \n", *ptr);
    
    // Print the character at `ptr + 1` (which is 'e'), then increment `ptr` afterwards
    printf("%c \n", *(ptr++ + 1));
    
    // Perform pointer arithmetic: move `ptr` back by one, then advance it by 5 positions,
    // then subtract 1, and finally add 3 to reach a character (which is 'm') and print it
    printf("%c \n", *(((ptr-- + 5) - 1) + 3));
    
    // Increment `ptr` by 1, then move it forward by 10 positions,
    // dereference the new position, subtract 32 from the ASCII value (which is 'd' -> 'D'), and print it
    printf("%c \n", *(++ptr + 10) - 32);
    
    // Increment `ptr` by 1, then print the next three characters from `ptr`
    printf("%c %c %c \n", *++ptr, *--ptr, *ptr++);
}
