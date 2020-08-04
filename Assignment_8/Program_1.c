/*.Write a program which accept 10 numbers from user and display only even numbers from them.
Input : 21 78 32 12 89 67 62 55 33 10
Output : 78 32 12 62 10
*/

#include"stdio.h"
#include"stdlib.h"

void getEvenArray(int[],int);

void getEvenArray(int arr[], int size){
    int comp;
    printf("Even Elements of array are:\n");
    for(comp = 0; comp < size; comp++)
    {
        if(arr[comp] % 2 == 0){
        printf("%d\n",arr[comp]);
        }
    }
}

void main(){
    int *arr = NULL;
    int size,comp;

    printf("Enter the number of Elements:");
    scanf("%d",&size);

    arr = (int *)malloc(sizeof(int)*size);

    for(comp = 0; comp < size; comp++)
    {
        scanf("%d",&arr[comp]);
    }

    getEvenArray(arr,size);
    /*
    */
    
}

