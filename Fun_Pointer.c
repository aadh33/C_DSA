//Function Pointer
#include<stdio.h>
int sum (int , int);//function prototype
void main(){
    int s=0;
    int a,b;
    printf("Enter the values to be summed:");
    scanf("%d %d",&a,&b);
    int (*ptr)(int , int)=&sum;//Function pointer initialization
    //Fun_Pointer can be used to store the address of the code
    s=(*ptr)(a,b);
    printf("The sum is %d \n",s);
}
//Function definiton
int sum (int a, int b){
return a+b;
}
