/*
Write a program which accept range from user and display all prime numbers between that range.
Input : 5 20
Output : 5 7 11 13 17 19
*/

#include"stdio.h"
void getPrimes(int start, int end){
    while(start <= end){
        int i = 1;
        int c = 0;
        while(i <= start){
            if( start % i == 0){
                c++;
            }   
            i++;
        }
        if(c == 2){
            printf("%d\t",start);
        }
        start++;
    }
}
void main(){
    int start, end;
    printf("Enter start of range :");
    scanf("%d",&start);
    printf("Enter end of range :");
    scanf("%d",&end);
    printf("Output:");
    getPrimes(start,end);
}