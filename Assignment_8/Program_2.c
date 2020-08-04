/*
Write a program which accept 10 numbers from user and display in reverse order.
Input : 78 23 29 99 34 89 76 90 11 20
Output : 20 11 90 76 89 34 99 29 23 78
*/

#include"stdio.h"
#include"stdlib.h"

void getRev(int[],int);

void getRev(int arr[], int size){
    printf("Reverse of Array\n");
    for(int i = size-1; i >= 0; i--)
    {
        printf("\n%d",arr[i]);
    }
    
}

void main(){
    int *arr = NULL;
    int size,range;
    printf("Enter size of Array :");
    scanf("%d",&size);
    
    arr = (int *)malloc(sizeof(int)*size);
    for(range = 0; range < size; range++)
    {
       scanf("%d",&arr[range]); 
    }
    
    getRev(arr,size);
}