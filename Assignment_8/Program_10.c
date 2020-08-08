/*
Write a program which accept 7 number from user and return number which is nearest to 90 .
Input : 45 67 99 88 91 102 93
Output : 91
*/

#include"stdio.h"
#include"stdlib.h"
#include"limits.h"

void getClosestTo90(int arr[],int size){
    int diff, cdiff = INT_MAX, closest;
    printf("The number closest to 90 is :");
    for(int i = 0; i < size; i++){
        diff = abs(arr[i] - 90);
        
        if(diff < cdiff)
        {
            cdiff = diff;
            closest = arr[i];
        }
    }
    printf("\n%d",closest);
}

void main(){
    int *arr;
    int size,range;

    printf("Enter size of array: ");
    scanf("%d",&size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    getClosestTo90(arr,size);
}