
#include <stdio.h>

void main(){
    int a[50],num,data,i,pos;
    printf("Enter the number of elements in array:");
    scanf("%d",&num);
    printf("Enter the elements of array:");
    if (num<50){
        for(i=0;i<num;i++){
            scanf("%d",&a[i]);
        }
    }
    printf("Enter the data:");
    scanf("%d",&data);
    printf("Enter the position:");
    scanf("%d",&pos);
    if (pos>num+1||pos <=0){
      printf("INVALID");
    }else{
          for(i=num-1;i>=pos-1;i--){
            a[i+1]=a[i];
        }
        a[pos-1]=data;
        num++;
    }
    printf("The new Array:");
    for(i=0;i<num;i++){
        printf("%d  \t",a[i]);
    }
    
    
}