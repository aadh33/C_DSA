//Writing a file
#include <stdio.h>
#include<stdlib.h>

void main(){
    char ch[10]={"adh"};
    FILE *ptr=NULL;
    ptr=fopen("abc.txt","w");

    if (ptr==NULL){
        printf("error");
        exit(1);
    }
    fputs(ch,ptr);
    fclose(ptr);
}
