/*Write a program which accept N numbers from user and one number. 
Display all elements of array which are divisible by that number.
Input : 4 12
12 33 45 60
Output : 12 60
*/

#include"stdio.h"
void getDivisibility(int arr[], int no, int size){
    printf("The number divisible by %d are:",no);
    for(int i = 0; i < size; i++){
        if(arr[i] % no == 0){
            printf("\n%d",arr[i]);
        }
    }
}
void main(){
    int *arr;
    int size, no;

    printf("Enter size of array :");
    scanf("%d",&size);

    printf("Enter number to find divisibility for:");
    scanf("%d",&no);

    printf("Enter array elements:\n");
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    getDivisibility(arr,no,size);
}