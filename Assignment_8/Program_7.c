/*
Write a program which accept 5 numbers from user and print addition of digits of each number.
Input : 124 6789 453 102 45
Output : 7 30 12 3 9
*/

#include"stdio.h"
#include"stdlib.h"

int singleCount(int);
void getCount(int[],int);

int singleCount(int no){
    int count = 0,temp = 0;
    while (no>0)
    {
        temp = no % 10;
        no = no / 10;
        count = count + temp;
    }
    return count;
}
void getCount(int arr[], int size){
    printf("Digits Sum is:\n");
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