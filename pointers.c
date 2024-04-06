#include<stdio.h>

void main()
{
    // Declare and initialize an integer variable 'a' with value 10
    int a = 10;

    // Declare an integer pointer 'p' and point it to the address of variable 'a'
    int *p = &a;

    // Print the value pointed to by 'p' (which is the value of 'a')
    printf("%d \n", *p);

    // Print the value of variable 'a' directly
    printf("%d \n", a);

    // Print the hexadecimal representation of the pointer 'p' (address of 'a')
    printf("%x \n", p);

    // Print the hexadecimal representation of the address of variable 'a'
    printf("%x \n", &a);

    // Print the hexadecimal representation of the address of pointer 'p'
    printf("%x \n", &p);

    // Note: In C, 'main' should return an 'int', so using 'void main()' is non-standard
    // A correct signature for 'main' would be: int main()
}
