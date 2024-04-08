#include<stdio.h>

// Function prototype declarations
void fun(int, int);  // Prototype for fun function


// Main function
void main(){
    int x, y;
    x = 7;  // Assigning 7 to variable x
    y = 5;  // Assigning 5 to variable y

    // Call the fun function with arguments x and y
    fun(x, y);

    // Printing values of x and y in the main function after fun call
    printf("in main function x=%d y=%d \n", x, y);
}

// Definition of fun function
void fun(int x, int y){
    x = 5;  // Assigning 5 to the local variable x (does not affect the x in main)
    y = 7;  // Assigning 7 to the local variable y (does not affect the y in main)

    // Printing values of x and y inside the fun function
    printf("in the function x=%d y=%d \n", x, y);
}
