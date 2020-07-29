/*Accept three numbers from user and return difference between
largest and smallest digit.
Input : 543
Output : 2 (5 - 3)
Input : 7309
Output : 7 (9 - 3)
Input : 7319
Output : 8 (9 - 1)
*/

#include"stdio.h"
int diffBetNos(int);

int diffBetNos(int no){
    int min = no, max = 0, temp = 0, temp2 = no;
    while (temp2 > 0)
    {
        temp =  temp2 % 10;
        if(temp > max){
            max = temp;
        }
        if(temp < min && temp != 0){
            min = temp;
        }
        temp2 = temp2 / 10;
    }
    int res = max-min;
    return res;
}
void main(){
    int no, res;
    printf("Input:");
    scanf("%d",&no);
    res = diffBetNos(no);
    printf("%d",res);
}