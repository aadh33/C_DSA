#include <stdio.h>

void main() {
    int i,j,r,c,a[1000][1000];
    printf("Enter the no of rows of array:");
    scanf("%d",&r);
    printf("Enter the no of columns of array: ");
    scanf("%d",&c);
    printf("Enter the elements of array:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The elements of array:");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",a[i][j]);
        }
    }
}