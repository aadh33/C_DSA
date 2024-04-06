//Passing strings as arguments
#include<stdio.h>

void modify(char* ,char*);
void main(){
    char s1[]="adithyan";
    char s2[]="manoj";
    modify(s1,s2);
}
void modify(char* s1,char* s2){
    int i,l=0;
    l=strlen(s1);
    printf("lenght of the first string is %d \n",l);
    printf("both the strings are:%s %s",s1,s2);
}
