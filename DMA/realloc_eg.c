/*
realloc() function:
It is used to reallocate memory once allocated using malloc or calloc.If it cannot reallocat it will return null.

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
    int *ptr1;
    printf("Enter the new values:");
    scanf("%d",&n);    
    ptr1=(int *)realloc(ptr,n*sizeof(int));
    printf("The old address:%d and \n new adress is %d ",ptr,ptr1);
    printf("\nThe entered values are:");
    for(i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    
    free(ptr);
    
 
    return 0;
}