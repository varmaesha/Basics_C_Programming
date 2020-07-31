/*Accept number from user and return its generic root.
Input : 7429
Output : 4 (7+4+2+9 -> 22 -> 2+2 -> 4 )
Input : 90281
Output : 2 (9+0+2+8+1 -> 20 -> 2+0 -> 2)
*/

#include"stdio.h"

void getGenRoot(int);

void getGenRoot(int no){
    int sum = 0, temp;
    while(no > 0){
        temp = no % 10;
        sum = sum + temp;
        no = no / 10;
    }
    if(sum > 9)
        getGenRoot(sum);
    else
    {
        printf("%d",sum);
    }
}
void main(){
    int no;
    scanf("%d",&no);
    getGenRoot(no);
}