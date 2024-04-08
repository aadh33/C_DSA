#include<stdio.h>

// Function to calculate and print the sum of two integers
void sum(int a, int b){
    printf("Sum=%d",a+b); // Print the sum of a and b
}

// Function to calculate and print the difference of two integers
void sub(int a, int b){
    printf(" \nSub=%d",a-b); // Print the difference of a and b
}

// Function to display the result of a specified operation using a function pointer
void display(void(*ptr)(int,int)){
    (*ptr)(5,1); // Call the function pointed to by ptr with arguments 5 and 1
}

// Main function
void main(){
   display(&sum); // Call display function with a pointer to sum function
   display(&sub); // Call display function with a pointer to sub function
}
/*
Program Execution Flow
In main:
display(&sum); - Calls display with a pointer to the sum function.
Inside display, (*ptr)(5, 1); calls sum(5, 1);.
Output: Sum=6 (since 5 + 1 = 6).
Again in main:
display(&sub); - Calls display with a pointer to the sub function.
Inside display, (*ptr)(5, 1); calls sub(5, 1);.
Output: Sub=4 (since 5 - 1 = 4).
Output Explanation
The program executes display(&sum); first, which results in the output Sum=6.
Then, it executes display(&sub);, resulting in the output Sub=4.
Conclusion
This program demonstrates how function pointers can be used to dynamically select
 and execute different functions based on the context or requirements of a program. 
 The display function acts as a generic function caller,
  allowing different operations (like sum and sub) to be executed without directly 
  invoking them from main, thus promoting modularity and flexibility in the code structure.
*/