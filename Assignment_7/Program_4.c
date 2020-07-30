/*Accept number from user and check whether it is Armstrong number or not. 
Armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits is same as the given number.
Input : 153
Output : TRUE
*/

#include"stdio.h"
#include"math.h"

void checkArmstrong(int);
int getCount(int);
int power(int,int);

int power(int base, int power){
    int result = 1;
    while (power > 0)
    {
        result = result * base;
        power--;
    }
    return result;
}
int getCount(int no){
    int count = 0;
    while (no > 0)
    {
        count++;
        no = no / 10;
    }
    return count;
}
void checkArmstrong(int no){
    int count,comp = no, temp, addition = 0;
    count = getCount(no); 
   
    while (no > 0)
    {
        temp = no % 10;
        no =no / 10;
        addition = addition + power(temp,count);
    }
    printf("Output :");
    if(comp == addition){
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}
void main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    checkArmstrong(num);
}