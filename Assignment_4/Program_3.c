//Write a program which accept one number from user and return the occurrence of digit 5.

#include"stdio.h"

void countFive(int);

void main(){
    int no;
    printf("Enter number to count the occurance of '5' in it\n");
    scanf("%d",&no);
    countFive(no);
}

void countFive(int no){
    int temp,count = 0;
    while(no > 0){
        temp = no % 10;
        if(temp == 5)
            count++;
        no = no / 10;
    }
    printf("The number of 5 in the above number is %d",count);
}