//example of dangling pointer situation in function call
#include<stdio.h>
#include<stdlib.h>


int* fun(){
    static int x=5;// if static was not used dangling pointer will arrive;
    return &x;
}
int main(){
    int *ptr=fun();
    printf("%d \n",*ptr);
return 0;    
}

