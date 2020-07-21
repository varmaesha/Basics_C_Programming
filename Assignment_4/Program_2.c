//Write a program which accept one number from user and return addition of its even digits.

#include"stdio.h"

void addEvenDigits(int);

void addEvenDigits(int no){
    int sum = 0, temp;
    while(no> 0){
        temp = no % 10;
        if(temp % 2 == 0){
            printf("%d",temp);
            sum = sum + temp;
        }
        no = no / 10;
    }   
    printf("\nThe sum of even digits is %d",sum);
}

void main(){
    int no;
    printf("Enter the number to print sum of even digits:\n");
    scanf("%d",&no);
    addEvenDigits(no);
}