#include<stdio.h>
void main(){
    //substraction
    int a[]={10,11,58,66,87,55,4,899,557,55,7};
    int *p,*q;
    p=a;
    q=&a[3];
    printf(" value of q-p =%d \n",q-p);
    printf(" value of p-q =%d \n",p-q);
    //increment&decrement
    printf(" value is =%d \n",*(p++));
    printf(" value is =%d \n",*(q++));
    printf(" value is =%d \n",*++p);
    printf(" value is =%d \n",*++q);
    printf(" value is =%d \n",*p--);
    printf(" value is =%d \n",*--p);

}
