// Program to print the address of the elements in an array

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array:"); // Prompt user for array size
    scanf("%d", &n); // Read the number of elements from user input
    int a[n]; // Declare an integer array 'a' with 'n' elements
    printf("Enter the elements of the array:"); // Prompt user to enter array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); // Read each element from user input and store in array 'a'
    }
    int *p = a; // Declare a pointer 'p' and initialize it to point to the first element of 'a'
    printf("The address of the elements in the order is:"); // Print header for memory addresses
    for (int i = 0; i < n; i++) {
        printf("\n%dth element's address: %p", i, (void *)p); // Print the memory address of the current element
        p++; // Move the pointer 'p' to the next element
    }

    return 0; // Return 0 for successful execution
}

/*
Pointer Casting:
(void *) p is an example of pointer casting. It converts the pointer p (which originally points to an int) into a generic pointer of type void *.
The (void *) cast allows us to treat the pointer p as a generic pointer without specifying its original data type.
The void * type is a special pointer type that can hold any data type. It’s often used when we want to work with pointers in a more generic way.
Why Use (void *)?
In this specific case, the program is printing the memory addresses of the elements in the array.
By using (void *), the program avoids specifying the exact data type of the pointer. This is useful because the array a contains integers (int), but we want to print their memory addresses without any type-specific formatting.
When we use %p in the printf format string, it expects a void * argument. By casting p to (void *), we satisfy this requirement.
Benefits of Using (void *):
Flexibility: By using (void *), we can print the memory addresses of any data type (not just int). For example, if we had an array of double or a custom struct, we could still use the same code to print their addresses.
Avoiding Warnings: Without the cast, some compilers might issue warnings about incompatible pointer types. Casting to (void *) suppresses these warnings.
Remember that (void *) is a powerful tool for working with pointers in a more generic manner. It allows us to handle different data types uniformly when dealing with memory addresses
*/