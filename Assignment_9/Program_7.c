/*Accept N numbers from user and display such a digit which occurs maximum number of time in array.
Input : 565 7456 46 664 376 513 65 76 3 73 7663 568 136
Output : 6 occurs 12 times
*/

#include"stdio.h"
int six(int no){
    int six= 0, temp;
    while (no > 0)
    {
        temp = no % 10;
        no = no / 10;
        if (temp == 6)
        {
            six++;
        }
        
    }
    return six;
}
void getCount(int arr[], int range){
    int sixS,sum=0;
    for(int i = 0; i < range; i++){
        sixS = six(arr[i]);
        sum = sum + sixS;
    }
    printf("%d",sum);
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
    getCount(arr,range);
}