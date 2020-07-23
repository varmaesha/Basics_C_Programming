//Write a program which accept one number from user and return smallest digit.

#include"stdio.h"

void retSmallestDig(int);

void main(){
    int no;
    printf("Enter no to get smallest digit:");
    scanf("%d",&no);
    retSmallestDig(no);
}
void retSmallestDig(int no){
    int temp, smallest = 9;
    while (no > 0)
    {
        temp = no % 10;
        if(temp <= smallest){
        smallest = temp;
        }
        no = no / 10;
    }
    //return smallest;
    printf("The smallest digit is %d",smallest);
}