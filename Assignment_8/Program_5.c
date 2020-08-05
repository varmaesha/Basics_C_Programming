/*Write a program which accept 8 numbers from user and print prime numbers from them.
Input : 7 45 29 31 71 91 11 28
Output : 7 29 31 71 11
*/

#include"stdio.h"
#include"stdlib.h"

void getPrime(int[],int);

void getPrime(int arr[],int size){
    printf("Prime numbers are:\n");
    for(int i = 0; i < size; i++){
	int j = 1;
    int c = 0;
    while (j <= arr[i])
    {
        if(arr[i] % j == 0){
            c++;
        }
        j++;
    }
    if(c == 2){
        printf("%d\n",arr[i]);
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
