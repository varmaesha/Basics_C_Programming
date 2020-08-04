/*
Write a program which accept 5 floats from user and display all such numbers which are greater than 8
Input : 9.3 4.7 7.9 10.8 4.5
Output : 9.3 10.8
*/

#include"stdio.h"
#include"stdlib.h"

void getNumbers(float[],int);

void getNumbers(float arr[],int size){
    printf("\nNumber grater than 8 are :\n");
    for(int i = 0; i < size; i++){
        if(arr[i] > 8.0){
            printf("%.2f\n",arr[i]);
        }
    }
}
void main(){
    float *arr;
    int size, range;

    printf("Enter size of array:");
    scanf("%d",&size);

    arr =(float *)malloc(sizeof(float) * size);

    for(range = 0; range < size; range++){
        scanf("%f",&arr[range]);
    }

    getNumbers(arr,size);   
}