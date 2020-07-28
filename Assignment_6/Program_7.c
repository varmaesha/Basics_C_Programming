/*Accept range from user and display below output.
Input : 5 12
Output : 5 6 7 8 9 10 11 12
*/

#include"stdio.h"

void getRange(int, int);

void getRange(int start,int end){
    while(start <= end){
        printf("%d\t",start);
        start++;
    }
}

void main(){
    int start, end;
    printf("Input :");
    scanf("%d%d",&start,&end);
    getRange(start,end);
}