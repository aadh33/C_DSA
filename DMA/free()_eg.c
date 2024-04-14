/*
free() function:
It releases the dynamically allocated memory.It is a readily availa_le function stdli_.h.
syntax:free(pointername);
after using free if the pointer is again dereferenced then it will lead to undefined _ehaviour
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,*ptr;
    printf("Enter the total values:");
    scanf("%d",&n);
    printf("Enter the values:");
    ptr=(int *)malloc(n*sizeof(int));
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