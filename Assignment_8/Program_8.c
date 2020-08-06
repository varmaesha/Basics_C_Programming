/*
Write a program which accept 5 numbers from user and return largest number from them.
Input : 9 -33 27 -103 23
Output : 27
*/

#include"stdio.h"
#include"stdlib.h"

void getaLargest(int arr[], int size){
    printf("Largets element is :");
    for(int i = 1; i < size; i++){
            if (arr[i] > arr[0])
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
    
    getaLargest(arr,size);
}