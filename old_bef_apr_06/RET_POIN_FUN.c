//Returning pointer from a function
#include<stdio.h>

int* returnpointer(int[]);

void main(){
    int a[]={1,2,3,4,5,6},*p;
    //a=a+2 will not be allowed here as it is a array in the main function
    p=returnpointer(a);
    printf("valus is %p \n",*p);

}

int* returnpointer(int a[]){
    a=a+2;// this is possible as it is a pointer here in this function
    return a;
}
