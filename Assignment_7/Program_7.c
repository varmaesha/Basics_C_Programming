/*Accept one numbers from user and display below pattern as.
Input : 3
Output :  3###2##1#
*/

#include"stdio.h"
void printHash(int no){
    if(no > 0){
        printf("#");
    printHash(no-1);
    }
}
void getPattern(int no){
    while (no>0)
    {
        printf("%d",no);
        printHash(no);
        no--;
    }
    
}
void main(){
    int input;
    printf("Input:");
    scanf("%d",&input);
    getPattern(input);
}
