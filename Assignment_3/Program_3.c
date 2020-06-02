//Enter Two Numbers And Display Its Largest Common Factors

#include"stdio.h"

void printLargestCommonFactor(int, int);

void main(){
    int no1, no2;
    printf("ENter two numbers to find their largest common factor");
    scanf("%d%d",&no1,&no2);
    printLargestCommonFactor(no1,no2);
}

printLargestCommonFactor(int no1, int no2){
   int smaller=(no1>no2)?no1:no2;
   int i = 1;
   int max;
   while (i <= smaller)
   {
       if(no1 % i == 0 && no2 % i == 0){
           max  = i;
       }
       i++;
   }
    printf("%d",max);
}