//Calculate Simple Intrest

#include"stdio.h"

void main(){
    int pAmount, rateOfIntrest, time;
    float simpleIntrest;
    printf("Enter Principal Amount, Time and Rate Of Intrest");
    scanf("%d%d%d",&pAmount,&rateOfIntrest,&time);
    simpleIntrest = (pAmount*rateOfIntrest*time)/100;
    printf("The Simple Intrest Is %.2f",simpleIntrest);
}
