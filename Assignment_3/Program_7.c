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
    scanf("%d%d",&start,&end);
    printf("The numbers in the range %d and %d are:",start,end);
    inrange(start,end);
}