/*Accept range from user and perform addition of all elements form that range.
Input : 10 15
Output : 75
(n/2)*(start+end)=sum, n = no of integers
*/

#include"stdio.h"
void getSum(int,int,int);

void getSum(int start, int end, int n){
    int sum = 0;
    sum = (n/2)*(start+end);
    printf("Sum is %d",sum);
}
void main(){
    int count, start, end;
    printf("Enter start of range:");
    scanf("%d",&start);
    printf("Enter end of range:");
    scanf("%d",&end);
    count = (end - start) + 1;
    getSum(start,end,count);
}