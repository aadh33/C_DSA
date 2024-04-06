// Application of Function Pointer
#include <stdio.h>

void add(int a, int b){
    printf("Result of the operation is %d \n",a+b);
}
void sub(int a, int b){
    printf("Result of the operation is %d \n",a-b);
}
void mul(int a, int b){
    printf("Result of the operation is %d \n",a*b);
}
void diff(int a, int b){
    printf("Result of the operation is %d \n",a/b);
}
void main(){
int ch,a,b;
printf("enter the choice: \n 0 for add \n 1 for sub \n 2 for mul \n 3 for div \n");
scanf("%d",&ch);
printf("Enter the numbers:");
scanf("%d %d",&a,&b);
switch(ch){
case 0:add(a,b);break;
case 1:sub(a,b);break;
case 2:mul(a,b);break;
case 3:div(a,b);break;
default:printf("Enter a valid choice");

}
}
