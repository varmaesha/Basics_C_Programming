/*Write a program which accept number from user and print below pattern as.
Input : 6
Output : * $ * $ * $ * $ * $ * $
*/
#include"stdio.h"

void getPattern(int);

void main(){
    int no;
    printf("Enter the number:");
    scanf("%d",&no);
    getPattern(no);
}

void getPattern(int no){
    int count = no * 2;
    for(int i = 1; i <= count; i ++){
        if(i % 2 == 1){
            printf("* ");
        }
        else
        {
            printf("$ ");
        }
    }
}