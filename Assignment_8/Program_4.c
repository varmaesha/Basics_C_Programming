/*
Write a program which accept 5 floats from user and display all such numbers which are greater than 8
Input : 9.3 4.7 7.9 10.8 4.5
Output : 9.3 10.8
*/

#include"stdio.h"
#include"stdlib.h"

void main(){
    float *arr;
    int size, range;

    printf("Enter size of array:");
    scanf("%d",&size);

    arr =(float *)malloc(sizeof(float) * size);

    for(range = 0; range < size; range++){
        scanf(%]"%d",&arr[range]);
    }
    
}