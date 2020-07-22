//Write a program which accept one number from user and return the occurrence of digit 5.

#include"stdio.h"

void countZero(int);

void main(){
    int no;
    printf("Enter number to count the occurance of '0' in it\n");
    scanf("%d",&no);
    countZero(no);
}

void countZero(int no){
    int temp,count = 0;
    while(no > 0){
        temp = no % 10;
        no = no / 10;
        if(temp == 0)
            count++;
    }
    printf("The number of trailing 0's in the above number is %d",count);
}