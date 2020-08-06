/*
Write a program which accept 5 numbers from user and return smallest number from them.
Input : 11 -103 67 76 -1
Output : -103
*/

#include"stdio.h"
#include"stdlib.h"

void getaSmallest(int arr[], int size){
    printf("Smallest element is :");
    for(int i = 1; i < size; i++){
            if (arr[i] < arr[0])
                arr[0] = arr[i];
        }
        printf("%d",arr[0]);
}
void main(){
    int *arr;
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    getaSmallest(arr,size);
}