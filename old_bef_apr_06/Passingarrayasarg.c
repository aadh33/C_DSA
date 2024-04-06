//Passing array as arguments
#include<stdio.h>

int avg(int [],int);
void main(){
    int marks[5]={10,20,30,40,50},size,average;
    size=sizeof(marks)/sizeof(marks[0]);
    average=avg(marks,size);
    printf("average==%d \n",average);
    printf("size of array in main function:%d \n",sizeof(marks));
}
int avg(int marks[],int size){
    int i,sum=0,average=0;
    for(i=0;i<size;i++){
        sum=sum+marks[i];
    }
    average=sum/size;
    printf("size of array in avg function:%d \n",sizeof(marks));
    return average;
    //here array is acting as a pointer size difference proves that but in main function there is no such difference.
}
