/*
Write a program which accept number from user and check whether that number is strong number or not. 
When the sum of the factorial of a number's individual digits are equal to the number itself, then that number is called a strong number.
Input : 145 since 1! + 4! + 5! = 1 + 24 + 120 = 145
Output : TRUE
*/

#include"stdio.h"

void strong(int);
int fact(int);

int fact(int temp){
    if(temp == 1)
        return temp;
    return fact(temp - 1) * temp;
}
void strong(int no){
   int temp, res = 0,comp;
   comp = no;
   while (no > 0)
   {
       temp = no % 10;
       res = res + fact(temp);
       no = no / 10;
   }
    if (comp == res)
    {
        printf("\nTrue");
    }
    else
    {
        printf("\nFalse");
    }
    
}

void main(){
    int no;
    printf("Input :");
    scanf("%d",&no);
    strong(no);
}