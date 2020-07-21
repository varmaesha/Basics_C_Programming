//Accept one numbers from user and count digits which are greater than or equal to 5.

#include"stdio.h"

void greaterThanFive(int);

void main(){
    int no;
    printf("Enter the number to count occurance of digits greater than or equal to 5: ");
    scanf("%d",&no);
    greaterThanFive(no);
}

void greaterThanFive(int no){
    int temp, count = 0;
    while( no != 0){
        temp = no % 10;
        no = no / 10;
        if(temp >= 5)
            count++;
    }
    printf("The count is: %d",count);
}