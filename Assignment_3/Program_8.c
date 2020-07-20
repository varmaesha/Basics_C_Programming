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
    scanf("%d%d",&start,&end);
    printf("The even numbers in the range %d and %d are:",start,end);
    evenInRange(start,end);
}