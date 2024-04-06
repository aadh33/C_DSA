//rewind()
#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE *fp=NULL;
    char ch,cc,cv;
    char str[50];
    fp=fopen("abc.txt","r+");
    if (fp==NULL){
        printf("The file is empty");
        exit(1);
    }
    fseek(fp,6,SEEK_SET);
    while(!feof(fp)){
        ch=fgetc(fp);
        printf("%c",ch);
    }
    rewind(fp);
     while(!feof(fp)){
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);



}
