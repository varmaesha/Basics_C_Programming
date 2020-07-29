/**
Accept range from user and display below output.
Input : 5 20
Output : 6 8 10 12 14 16 18 20
*/
#include"stdio.h"
void evenRange(int, int);

void evenRange(int start, int end){
    while (start <= end)
    {
        if(start % 2 == 0){
            printf("%d\t",start);
        }
        start++;
    }
    
}
void main(){
    int start, end;
    printf("Input :");
    scanf("%d%d",&start,&end);
    evenRange(start,end);
}