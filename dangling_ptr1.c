#include<stdio.h>
#include<stdlib.h>

void main(){
    // Declare a pointer `ptr` to an integer and allocate memory for it dynamically
    int *ptr = (int*)malloc(sizeof(int));

    // Assign a value of 10 to the memory location pointed to by `ptr`
    *ptr = 10;

    // Print the value stored at the memory location pointed to by `ptr`
    printf("%d \n", *ptr);

    // Free the dynamically allocated memory pointed to by `ptr`
    free(ptr);

    // Set `ptr` to NULL after freeing the memory (good practice to avoid dangling pointers)
    ptr = NULL;
}
