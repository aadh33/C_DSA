//Structure padding and packing
#include<stdio.h>
#pragma pack(1)   // comment this line to provide padding
struct demo{
    int a;
    char b;
}s;

void main()
{
    printf("%ld",sizeof(s));
}
