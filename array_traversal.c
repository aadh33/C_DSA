#include <stdio.h>

void main(){
    int a[50],num,i,pos;
    printf("Enter the number of elements in array:");
    scanf("%d",&num);
    printf("Enter the elements of array:");
    if (num<50){
        for(i=0;i<num;i++){
            scanf("%d",&a[i]);
        }
    }
    printf("Elemets of array:");
    for(i=0;i<num;i++){
        printf("%d \n",a[i]);
    }
    
    
}