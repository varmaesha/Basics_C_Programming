/*
Write a program which accept one number from user addition of factorial of each digit of that number.
Input : 324
Output : 32 (3! + 2! + 4!)
Input : 524
Output : 146 (5! + 2! + 4!)
*/
 #include"stdio.h"

void addFact(int);
int Fact(int); 

int Fact(int digit){
    if(digit == 1)
        return digit;
    return Fact(digit- 1) * digit ;
}

void addFact(int no){
    int temp, sum = 0;
    while (no > 0)
    {
        temp = no % 10;
        sum = sum + Fact(temp);
        no = no / 10;
    }
    printf("%d",sum);
}

 void main(){
    int no;
    printf("Input :");
    scanf("%d",&no);
    addFact(no);
 }