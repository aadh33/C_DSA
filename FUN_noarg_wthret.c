// Function without argumets and with returntype
#include <stdio.h>

int sum(void);
void main(){
    int s;
    s=sum();
    printf("sum=%d",s);
}

int sum(void){
    int a=5,b=9;
    return a+b;
}
