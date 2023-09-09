// Function with argumets and without returntype
#include <stdio.h>

void sum(float ,float);
void main(){
    float a,b,su;
    printf("enter the values:");
    scanf("%f %f",&a,&b);
    sum(a,b);

}
void sum(float a,float b){
    float su;
    su=a+b;
    printf("SUM=%f",su);
}
