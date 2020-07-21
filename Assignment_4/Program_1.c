//Write a program which accept one number from user and return multiplication of its digits. (If number contains 0 then ignore that 0)

#include"stdio.h"

void multDigit(int);

void multDigit(int no){
    int temp, mult = 1;
    while(no > 0){
        temp = no % 10;
        if(temp == 0){
            break;
        }
        else{
        mult = mult * temp;
        }
        no = no / 10;
    }
    printf("\nThe multiplication of digit is %d ",mult);

}

void main(){
    int no;
    printf("\nEnter number you want print digit sum of");
    scanf("\n%d",&no);
    multDigit(no);
}
