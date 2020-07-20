//Accept range from user and print all even numbers between that range.

#include"stdio.h"

void evenInRange(int, int);

void evenInRange(int start, int end){
    for(int i = start; i <= end; i ++){
        if(i % 2 ==0){
        printf("\n%d",i);
        }
    }
}
void main(){
    int start, end;
    printf("Enter range to print even numbers in that range");
    printf("\nStart of Range");
    scanf("%d",&start);
    printf("\nEnd of the range");
    scanf("%d",&end);    \
    printf("\nThe even numbers in the range %d and %d are:",start,end);
    evenInRange(start,end);
}