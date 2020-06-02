//Accept the radius and get circumference of th circle

#include"stdio.h"

#define PI  3.14

void main(){
    int radius;
    float circumference;
    printf("Enter the rasius:");
    scanf("%d",&radius);
    circumference=2*PI*radius;
    printf("The circumference of circle is: %.2f",circumference);
}