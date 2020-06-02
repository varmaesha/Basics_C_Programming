//Accept 3 numbers and return its Average

#include"stdio.h"

void main(){
    int n1, n2, n3;
    float avg;
    printf("Enter 3 numbers to get their average:");
    scanf("%d%d%d",&n1,&n2,&n3);
    avg = (n1+n2+n3)/3;
    printf("\nThe average of %d, %d and %d is %.3f",n1, n2, n3, avg);
}