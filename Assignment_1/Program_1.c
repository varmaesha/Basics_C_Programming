//Program to divide two numbers
#include"stdio.h"

float divTwo(int,int);

float divTwo(int no1, int no2){
    float res;

    res =(float) no1/no2;
   
    return res;
}
int main(){
    int dividend, divisor;
    printf("Enter the Dividend and Divisor:");
    scanf("%d%d",&dividend,&divisor);
    if(divisor == 0){
    printf("Divide by Zero Error!!");
}
    printf("Result is:%f ",divTwo(dividend,divisor));
    
    return 0;
}
