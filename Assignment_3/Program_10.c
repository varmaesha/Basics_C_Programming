//Program tp pritn all the number between a given range

#include"stdio.h"
void inrange(int, int);

void inrange(int start, int end){
    for(int i = end; i >= start; i --){
        printf("\n%d",i);
    }
}
void main(){
    int start, end;
    printf("Enter range to print numbers in reverse order");
    printf("\nStart of Range");
    scanf("%d",&start);
    printf("\nEnd of the range");
    scanf("%d",&end);
    printf("\nThe reverse order of the range %d and %d is:",start,end);
    inrange(start,end);
}