//Reading a file
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    char ch;
    FILE *ptr=NULL;
    int i;
    ptr=fopen("abc.txt","r");

    if (ptr==NULL){
        printf("error");
        exit(1);
    }
  /* for writing
    printf("enter  the string--");
    gets(ch);
    for(i=0;i<strlen(ch);i++){
       fputc(ch[i],ptr);
    }
    */


     printf("content of this file are \n");

    while (!feof(ptr)) {
        ch = fgetc(ptr);
        printf("%c", ch);
    }

      fclose(ptr);
}
