//Accept range from user and addition of all numbers between that range.
#include"stdio.h"

void additionOfRange(int, int);

void additionOfRange(int start, int end){
    int no = 0;
    for(int i = start; i <= end; i ++){
        no = no + i;
    }
    printf("%d",no);
}

void main(){
    int start, end;    
    printf("Enter range to print numbers in");
    printf("\nStart of Range");
    scanf("%d",&start);
    printf("\nEnd of the range");
    scanf("%d",&end);
    printf("\nAddition of the range is:");
    additionOfRange(start,end);
}