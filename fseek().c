//fseek()

#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE *fp=NULL;
    char ch,cc,cv;
    char str[50];
    fp=fopen("abc.txt","r");
    if (fp==NULL){
        printf("The file is empty");
        exit(1);
    }
    fseek(fp,6,SEEK_SET);
    ch=fgetc(fp);
    printf("%c \n",ch);


    fseek(fp,-2,SEEK_CUR);
    cc=fgetc(fp);
    printf("%c \n",cc);

     fseek(fp,-2,SEEK_END);
    cc=fgetc(fp);
    printf("%c \n",cc);


    fclose(fp);



}
