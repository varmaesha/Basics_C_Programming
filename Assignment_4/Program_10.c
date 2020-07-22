//Write a program which accept one number from user and return difference between addition of its even digits and addition of odd digits.

#include"stdio.h"

int addEvenDigits(int);
int addOddDigits(int);

int addEvenDigits(int no){
    int sum = 0, temp;
    printf("The Even digits are:");
    while(no> 0){
        temp = no % 10;
        if(temp % 2 == 0){
            printf("\t%d",temp);
            sum = sum + temp;
        }
        no = no / 10;
    }   
    printf("\nThe sum of even digits is %d",sum);
    return sum;
}

int addOddDigits(int no){
    int sum = 0, temp;
    printf("\nThe Odd digits are:");
    while(no> 0){
        temp = no % 10;
        if(temp % 2 != 0){
            printf("\t%d",temp);
            sum = sum + temp;
        }
        no = no / 10;
    }   
    printf("\nThe sum of odd digits is %d",sum);
    return sum;
}


void main(){
    int no,eveSum,oddSum;
    printf("Enter the number :\n");
    scanf("%d",&no);
    eveSum = addEvenDigits(no);
    oddSum = addOddDigits(no);
    printf("\nThe differernce between the sum of even and odd digits is %d",(eveSum-oddSum));
}