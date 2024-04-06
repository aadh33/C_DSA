//Returning strings from a function
#include<stdio.h>
char* display();

void main(){
    char *str;
    str=display();
    printf("string is %s \n",str);
}
char* display(){
    static char str[]="adh";
    return str;
}
