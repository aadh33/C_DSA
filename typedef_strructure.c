// Include the standard input output library header
// This header is necessary for performing input/output operations in C
#include<stdio.h>

// Definition of a custom structure named 'demo'
// Structures allow the grouping of variables of different types under a single name
// typedef is used to create our own variable and hence a new variable dem is possible
typedef struct demo
{
    int a;    // Integer type member variable "a"
    char b;   // Character type member variable "b"
    float c;  // Float type member variable "c"
}dem;        // 'dem' is the new name for the 'struct demo'

// The main function: execution begins from here
void main(){
   // Initialize the 'dem' structure variable 's' with specific values for its members
   dem s={55,'a',55.02478}; // assigns 55 to 'a', 'a' to 'b', and 55.02478 to 'c'
   
   // Print the values of 's' members to the standard output
   // Uses %d for integer, %c for char, and %f for float
   printf("The info in the structure is: %d %c %f \n",s.a,s.b,s.c);
}

/*
The first #include<stdio.h> line is including the standard input and output library which is necessary for input/output operations in C, such as printf.

A structure named 'demo' is defined using the struct keyword. A structure allows us to group variables of different types under a single name. This can be a convenient way to keep related data together.

The typedef keyword assigns a new name ('dem') to our structure 'struct demo' for ease of use. Using 'dem' rather than 'struct demo' throughout the rest of the code is purely for convenience and readability.

The void main() is the entry point of the program. In some environments, main should return an int, but here it's defined to return nothing (void).

Inside the main function, we initialize a variable 's' of type 'dem' (our defined structure) with predetermined values for its members.

Finally, printf is used to output the members of 's' to the console. The %d is a placeholder for an int value, %c is for a character, and %f is for a float. So, this line prints the values contained within the 's' instance of our 'dem' structure.
*/