/*
Write a program which accept N number from user and replace each even number with 0 and odd number with 1.
Input : 5
12 21 3 40 6
Output : 0 1 1 0 1
*/

#include"stdio.h"
void getOutput(int arr[], int size){
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
        }
        printf("%d\t",arr[i]);
    }
}
void main(){
    int *arr;
    int size;

    printf("Enter size of array:");
    scanf("%d",&size);

    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }

    getOutput(arr,size);
}