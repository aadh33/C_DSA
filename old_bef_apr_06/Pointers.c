#include<stdio.h>

void main(){
//pointer_initialization
int a=10,b=9;
int *p,*q;
p=&a;
q=&b;
int w=*p;
printf("value of a=%d \n",a);
printf("value of a=%d \n",*p);
 printf("address of a=%x \n",&a);
 printf("address of a=%x \n",p);
 printf("address of p=%x \n",&p);
     printf("value of w=%d \n",w);


//double_pointer
int c=10;
int *r;
int **s;
int ***t;
r=&c;
s=&r;
t=&s;
printf("Value of c=%d \n",c);
printf("Value of c=%d \n",*r);
printf("Value of c=%d \n",**s);
printf("Value of c=%d \n",***t);
printf("address of c=%x \n",&c);
printf("address of c=%x \n",r);
printf("address of c=%x \n",*s);
printf("address of c=%x \n",**t);
printf("address of r=%x \n",&r);
printf("address of s=%x \n",&s);
printf("address of t=%x \n",&t);


//pointer_arithmetic
//addition
int d[50]={10,11,145,45,789,23,54};
int *u=&d[0];
printf("value of d=%d \n",*u);
u=u+2;
printf("value of d=%d \n",*u);


}

