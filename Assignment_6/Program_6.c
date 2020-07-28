/*
Accept numbered one character from user and display below
pattern as.
Input : 5 M
Output : M M M M M
*/
#include"stdio.h"

void pattern(int, char);

void pattern(int count, char ch){
    printf("Output : ");
    while (count > 0){
        printf("%c\t",ch);
        count--;
    }
}

void main(){
    int count = 0;
    char ch = '\0' ;
    printf("Input : ");
    scanf("%d\n",&count);
    scanf("%c",&ch);
    pattern(count,ch);
}