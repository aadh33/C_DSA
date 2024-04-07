#include<stdio.h>

void main(){

    // Declare a void pointer `vp` which can point to any data type
    void *vp;
    
    // Declare and initialize variables of different data types
    int a = 10;
    float b = 15;
    char c = 'c';

    // Point `vp` to the address of variable `a` (which is an int)
    vp = &a;
    // Dereference `vp` as an int pointer and print the value pointed to by `vp`
    printf("%d \n", *(int*)vp);

    // Point `vp` to the address of variable `b` (which is a float)
    vp = &b;
    // Dereference `vp` as a float pointer and print the value pointed to by `vp`
    printf("%f \n", *(float*)vp);

    // Point `vp` to the address of variable `c` (which is a char)
    vp = &c;
    // Dereference `vp` as a char pointer and print the value pointed to by `vp`
    printf("%c \n", *(char*)vp);

}
