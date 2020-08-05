/*
Write a program which accept 8 numbers from user and print number of digits of each number.
Input : 7 45 2991 31 91 23467 324 7
Output : 1 2 4 2 2 5 3 1
*/

#include"stdio.h"
#include"stdlib.h"

int singleCount(int);
void getCount(int[],int);

int singleCount(int no){
    int count = 0;
    while (no>0)
    {
        no = no / 10;
        count++;
    }
    return count;
}
void getCount(int arr[], int size){
    printf("Digits Count is:\n");
    int range = 0, count;
    while (range < size)
    {
        count = singleCount(arr[range]);
        range++;
        printf("\n%d",count);
    }
    
}

void main(){
    int *arr;
    int size,range;

    printf("Enter size of array :");
    scanf("%d",&size);

    arr=(int *)malloc(sizeof(int)*size);

    for(range = 0; range < size; range++){
        scanf("%d",&arr[range]);
    }

    getCount(arr,size);
}