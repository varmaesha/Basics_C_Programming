/*
Write a program which accept N numbers from user and return difference between summation of even numbers and summation of odd numbers.
Input : 7
12 3 7 8 6 3 4
Output : 17 (12+8+6+4) - (3+7+3)
*/

#include"stdio.h"
void getDiff(int arr[], int size){
    int eSum = 0, oSum = 0, Diff = 0;
    printf("The Difference between summation of even and odd numbers is ");
    for (int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0){
            eSum = eSum + arr[i];
        }
        if (arr[i] % 2 != 0)
        {
            oSum = oSum + arr[i];
        }
    }
    Diff = eSum - oSum;
    printf("%d",Diff);
}
void main(){
    int *arr;
    int range;

    printf("Enter size of array :");
    scanf("%d",&range);

    for (int i = 0; i < range; i++)
    {
        scanf("%d",&arr[i]);
    }
    getDiff(arr,range);    
}