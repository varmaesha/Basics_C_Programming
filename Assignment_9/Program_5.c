/*Accept N numbers from user and reverse the contents of that array.
Input : 76 73 47 61 23 67
Output : 67 23 61 47 73 76
*/

#include"stdio.h"

void getRev(int arr[], int size){
    printf("Revers array is:");
    for(int i = size - 1; i >= 0; i --){
        printf("\n%d",arr[i]);
    }
}
void main(){
    int *arr;
    int size;

    printf("Enter sizr of array:");
    scanf("%d",&size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    getRev(arr,size);
    
}