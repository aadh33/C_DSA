/*
calloc() function:
It is used to allocate memory in multiple _locks of same size.Intialize memory with zero apart from random value. 

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,*ptr;
    printf("Enter the total values:");
    scanf("%d",&n);
    printf("Enter the values:");
    ptr=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    printf("The entered values are:");
    for(i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    
    free(ptr);
    
 
    return 0;
}