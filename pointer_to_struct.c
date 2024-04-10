#include<stdio.h> // Include the Standard Input-Output library for basic I/O operations

// Definition of a structure named 'stud'
struct stud
{
    char name[10]; // Character array to hold the name, maximum 9 characters + 1 null terminator
    int age; // Integer variable to hold the age
    int marks; // Integer variable to hold the marks
};

struct stud s={"Jenny",10,20}; // Declaration and initialization of a structure variable 's' of type 'stud'

// Main function - entry point of the C program
void main(){
   struct stud *ptr=&s; // Declaration of a pointer 'ptr' to 'struct stud' and initializing it with the address of 's'
   printf("The name is %s", ptr->name); // Printing the value of 'name' in 's' using pointer 'ptr'
}

/*
The program starts with including the standard I/O library stdio.h, which is necessary for input and output operations in C, such as printf.

A struct named stud is defined, which serves as a template for creating custom data types. In this case, struct stud consists of three members:

name, which is an array of characters (strings in C are represented as arrays of characters), meant to store names of up to 9 characters plus a null terminator which indicates the end of the string.
age, an integer to represent the age.
marks, an integer to represent the marks or score.
A variable s of type struct stud is declared and initialized. {"Jenny",10,20} initializes s with the values for its fields: name as "Jenny", age as 10, and marks as 20.

In the main function:

A pointer variable ptr of type struct stud* (pointer to struct stud) is declared and initialized with the address of s using the & operator. This allows us to access and manipulate the members of s through ptr.
printf uses the ptr->name syntax to access the name member of the structure that ptr points to, i.e., s. The arrow (->) operator is a shorthand for dereferencing a pointer to a struct and accessing one of its members in a single step. So, ptr->name is equivalent to (*ptr).name. Here, this operation prints the name member of the structure pointed to by ptr, which is "Jenny".
This program demonstrates basic usage of structures, pointer to structures, and how to access members of a structure using pointers in C.
*/