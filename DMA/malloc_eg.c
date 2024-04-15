/*
malloc() function:
It will allocate the memory from the heap section from the memory stack.The memory can typecasted.
eg- ptr=(int*)malloc(sizeof(int))
like in files use free() function to free the memory allocated. We can access the dynamically allocated memory only using the defined pointer.

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