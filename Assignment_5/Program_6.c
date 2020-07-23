//Accept distance in centimetre and convert into meter. 1 meter = 100 Centimeter

#include"stdio.h"

void main(){
    int cm;
    printf("Input :");
    scanf("%d",&cm);
    float meter = cm / 100;
    printf("Output : %.4f",meter);
}