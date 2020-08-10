/*Accept N numbers from user and print addition of digits of each number.
Input : 131 23 87 645 74 68 45 977 76 65
Output : 5 15 15 14 9 23 11 5 11 13
*/

#include"stdio.h"

int addition(int no){
    int sum = 0, temp;
    while (no > 0)
    {
        temp = no % 10;
        no = no / 10;
        sum =sum + temp;
    }
    return sum;
}
void getSum(int arr[], int range){
    int add;
    for(int i = 0; i < range; i++){
        add = addition(arr[i]);
        printf("\n%d",add);
    }
}
void main(){
    int *arr;
    int range;

    printf("Enter size of array;");
    scanf("%d",&range);

    for (int i = 0; i < range; i++)
    {
        scanf("%d",&arr[i]);
    }
    getSum(arr,range);
}