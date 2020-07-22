//Write a program which accept one number from user and return addition of its odd digits.

#include"stdio.h"

void addOddDigits(int);

void addOddDigits(int no){
    int sum = 0, temp;
    printf("The Odd digits are:");
    while(no> 0){
        temp = no % 10;
        if(temp % 2 != 0){
            printf("\t%d",temp);
            sum = sum + temp;
        }
        no = no / 10;
    }   
    printf("\nThe sum of odd digits is %d",sum);
}

void main(){
    int no;
    printf("Enter the number to print sum of odd digits:\n");
    scanf("%d",&no);
    addOddDigits(no);
}