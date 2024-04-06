// Function with argumets and with returntype
#include <stdio.h>

int sum(int ,int);
void main(){
    int a,b,s;
    printf("enter the values:");
    scanf("%d %d",&a,&b);
    s=sum(a,b);
    printf("sum=%d",s);
}
int sum(int a,int b){
    int s;
    s=a+b;
    return s;
}
