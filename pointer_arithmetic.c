#include <stdio.h>

int main() {
    // Define an integer array 'a' with initial values
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 4, 78, 88, 99, 44, 5, 66, 44, 8, 5};

    // Declare an integer pointer 'p' and point it to the second element of array 'a' (a[1])
    int *p = &a[1];

    // Print the results of multiple expressions using printf
    printf("%d %d %d %d \n", *p++, ++*p, ++(*p), (*p)++);

    // Print the results of more expressions using printf
    printf("%d %d %d %d", *p--, --*p, --(*p), (*p)--);

    return 0;
}
