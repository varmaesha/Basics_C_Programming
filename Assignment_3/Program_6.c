//Accept a number and Prints its Binary Equivalent

#include"stdio.h"
#include"math.h"

long binConv(int);

void main(){
    int n1;
    printf("Enter the number to prints it Binary Equivqlent:");
    scanf("%d",&n1);
    printf("%ld",binConv(n1));
}

long binConv(int n1){
    long binEqui = 0;
    int rem, temp = 1;
    while(n1!=0){
        rem = n1 % 2;
        n1 = n1 / 2;
        binEqui = binEqui + rem *temp;
        temp = temp * 10;
    }
    return binEqui;
}