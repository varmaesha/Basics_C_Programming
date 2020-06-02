//Calculate Simple Intrest

#include"stdio.h"

void main(){
    int pAmount, time;
    float simpleIntrest,rateOfIntrest;
    printf("Enter Principal Amount:");
    scanf("%d",&pAmount);
    printf("\nEnter Time in Years"");
    scanf("%d",&time);
    printf("\nRate Of Intrest:");
    scanf("%f",&rateOfIntrest);
    simpleIntrest = (pAmount*rateOfIntrest*time)/100;
    printf("\nThe Simple Intrest on %d for %d months at %f rate of intrest is %.2f",pAmount,time,rateOfIntrest,simpleIntrest);
}
