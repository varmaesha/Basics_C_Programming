//Program that retuens Factorial Of Number

#include"stdio.h"

int printFactorial(int);

int printFactorial(int no){
    if(no == 1)
        return no;
    return printFactorial(no - 1) * no ;
}
void main(){

    int no, ans;
    printf("Enter Number to Print its Factorial:");
    scanf("%d",&no);
    ans =printFactorial(no);
    printf("Factorial Of %d is %d",no,ans);
}