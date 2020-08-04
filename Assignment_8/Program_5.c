/*Write a program which accept 8 numbers from user and print prime numbers from them.
Input : 7 45 29 31 71 91 11 28
Output : 7 29 31 71 11
*/

#include"stdio.h"
#include"stdlib.h"

void getPrime(int[],int);

void getPrime(int arr[],int size){
    for(int i = 0; i < size; i++){
	if(count == 2){
		printf("%d",arr[i]);
	}
    }
}

void main(){
    int *arr = NULL;
    int size;

    printf("Enter the size:");
    scanf("%d",&size);

    arr = (int *)malloc(sizeof(int)*size);

    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }

    getPrime(arr,size);
}
