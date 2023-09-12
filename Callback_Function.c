//Callback Function
#include<stdio.h>

void sum (int a, int b){
    printf("SUM=%d \n",a+b);
}
void sub(int a, int b){
    printf("DIFFERENCE=%d \n",a-b);
}
void display (void(*fptr)(int , int) ){
    int a,b;
    printf("Enter the values to perform operations: \n");
    scanf("%d %d",&a,&b);
    (*fptr)(a,b);
}
void main(){
    display(&sum);
    display(&sub);
}
