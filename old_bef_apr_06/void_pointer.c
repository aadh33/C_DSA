#include<stdio.h>
void main(){
int a=5;
void *vp;
float b=5.05;
char c='d';
vp=&a;
printf("value is %d \n",*(int*)vp );//int typecasting
vp=&b;
printf("value is %f \n",*(float*)vp );
vp=&c;
printf("value is %c \n",*(char*)vp);

}
