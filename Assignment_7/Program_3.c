/*Write a program which accept principle amount, time and 
rate of interest from user and 
calculate simple interest.
*/

#include"stdio.h"
void simpleIntrest(int, float, float);

void simpleIntrest(int amount, float rateOfIntrest, float time){
    float siIntrest;
    siIntrest = (amount*rateOfIntrest*time)/100;
    printf("The simple intrest on %d for %.2f years at rate of %.2f is %.2f",amount,time,rateOfIntrest,siIntrest);
}
void main(){
    float rOI, time;
    int amount;
    printf("Enter ammount:");
    scanf("%d",&amount);
    printf("\nEnter Rate Of Interest:");
    scanf("%f",&rOI);
    printf("\nEnter No of Years:");
    scanf("%f",&time);  
    simpleIntrest(amount,rOI,time);
}