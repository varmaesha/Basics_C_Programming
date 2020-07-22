//Write a program which accept one number from user and return the occurrence of digit 5.
/*
Input : 543
Output : 0
Input : 7309
Output : 1
Input : 73008
Output : 2
*/

#include"stdio.h"

int countZero(int);

int main(){
    int no1,no2, no3, res;
    printf("Input:");
    scanf("%d",&no1);
    res = countZero(no1);
    printf("Output : %d",res);
    printf("\nInput:");
    scanf("%d",&no2);
    res = countZero(no2);
    printf("Output : %d",countZero(no2));
    printf("\nInput:");
    scanf("%d",&no3);
    res = countZero(no3);
    printf("Output : %d",countZero(no3));
    return 0;
}

int countZero(int no){
    int temp,count = 0;
    while(no > 0){
        temp = no % 10;
        no = no / 10;
        if(temp == 0)
            count++;
    }
    return (count);
}