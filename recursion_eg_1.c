#include<stdio.h>

void count(int n){
    static int d=1;
    printf("The value of d is %d",d);
    printf("\nThe value of n is %d",n);
    d++;
    if (n<1) {count(n-1);}
    printf("\nThe new value of d is %d",d);

}

void main(){
count(3);   
}