#include<stdio.h>

// Function prototype declarations
void fun(int *, int *);  // Prototype for fun function

// Main function
void main(){
    int x, y;
    x = 7;  // Assigning 7 to variable x
    y = 5;  // Assigning 5 to variable y

    // Call the fun function with addresses of x and y (passing by reference)
    fun(&x, &y);

    // Printing values of x and y in the main function after fun call
    printf("in main function x=%d y=%d \n", x, y);
}

// Definition of fun function which takes pointers as parameters
void fun(int *x, int *y){
    *x = 5;  // Dereferencing and assigning 5 to the value pointed by x (modifies x in main)
    *y = 7;  // Dereferencing and assigning 7 to the value pointed by y (modifies y in main)

    // Printing values of x and y inside the fun function
    printf("in the function x=%d y=%d \n", *x, *y);
}
