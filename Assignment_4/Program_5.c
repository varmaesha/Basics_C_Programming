//Accept one numbers from user and return its reverse number.

#include"stdio.h"

void printRev(int);

void main(){
    int no;
    printf("Enter number to print its reverse:\n");
    scanf("%d",&no);
    printRev(no);
}

void printRev(int no){
    int temp ,rev = 0;
    printf("The required number is:");
    while(no > 0){
    temp = no % 10;
    if(temp == 0)
        printf("%d",temp);
    rev = rev * 10 + temp;
    no = no / 10; 
    }

    printf("%d",rev);

}