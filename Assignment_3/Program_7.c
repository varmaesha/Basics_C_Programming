//Program tp pritn all the number between a given range

#include"stdio.h"
void inrange(int, int);

void inrange(int start, int end){
    for(int i = start; i <= end; i ++){
        printf("\n%d",i);
    }
}
void main(){
    int start, end;
    printf("Enter range to print numbers in");
    printf("\nStart of Range");
    scanf("%d",&start);
    printf("\nEnd of the range");
    scanf("%d",&end);
    printf("\nThe numbers in the range %d and %d are:",start,end);
    inrange(start,end);
}