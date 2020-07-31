/*
Accept one numbers from user and display frequency of each digit.
Input : 543457
Output : 
3 -> 1
4 -> 2
5 -> 2
7 -> 1
*/

#include"stdio.h"

void getFrequency(int);

void getFrequency(int no){
    int arr[10] = {0};
    int temp;
    while (no > 0)
    {
        temp = no % 10;
        arr[temp]++;
        no = no / 10;
    }
    for (int i = 0; i < 9; i++)
    {
        if(arr[i] != 0){
            printf("%d -> %d\n",i,arr[i]);
        }
    }
}


void main(){
    int no;
    printf("Enter numbere :");
    scanf("%d",&no);
    getFrequency(no);
}