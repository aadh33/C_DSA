#include <stdio.h>

void main () {
    
     int a[50],num,data,i,pos;
    printf("Enter the number of elements in array:");
    scanf("%d",&num);
    printf("Enter the elements of array:");
    if (num<50){
        for(i=0;i<num;i++){
            scanf("%d",&a[i]);
        }
    }
    printf("Enter the position of element to be deleted:");
    scanf("%d",&pos);
    if(pos<=0||pos>num){
        printf("invalid");
    }else{
        for(i=pos-1;i<num;i++){
            a[i]=a[i+1];
        }
        num--;
        for(i=0;i<num;i++){
            printf("%d \t",a[i]);
        }
    }
}