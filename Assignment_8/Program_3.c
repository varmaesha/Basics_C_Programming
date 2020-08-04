/*
Write a program which accept 10 numbers from user and return addition of even numbers from them.
Input : 12 23 43 99 67 102 45 34 54 10
Output : 489
*/

#include"stdio.h"
#include"stdlib.h"

void getEvenArray(int[],int);

void getEvenArray(int arr[], int size){
    int range,sum = 0;
    printf("Sum of Even Elements of array are:\n");
    for(range = 0; range < size; range++)
    {
        if(arr[range] % 2 == 0)
            sum = sum + arr[range];
    }
    printf("%d",sum);
}

void main(){
    int *arr = NULL;
    int size,range;

    printf("Enter the number of Elements:");
    scanf("%d",&size);

    arr = (int *)malloc(sizeof(int)*size);

    for(range = 0; range < size; range++)
    {
        scanf("%d",&arr[range]);
    }

    getEvenArray(arr,size);
    
}

