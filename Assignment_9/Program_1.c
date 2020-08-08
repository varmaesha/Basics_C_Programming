/*
Write a program which accept N number from user and 
increase by 1 if it is divisible by 3 and 
increase by 2 if it is divisible by 3 and 5.
Input : 6
12 21 25 70 30 34
Output : 13 22 25 70 32 34
*/

#include"stdio.h"
void getOutput(int arr[], int size){
    for(int i = 0; i < size; i++){
        if(arr[i] % 3 == 0){
            arr[i] = arr[i]+1;
        }
        else
        {
            if (arr[i] % 3 == 0 && arr[i] % 5 == 0)
            {
                arr[i] = arr[i] + 2;
            }
            
        }
        printf("%d\t",arr[i]);
    }
} 
void main(){
    int *arr;
    int size;

    printf("Enter the range:");
    scanf("%d",&size);

    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }

    getOutput(arr,size);
}