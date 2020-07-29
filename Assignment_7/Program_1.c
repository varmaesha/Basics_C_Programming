/*Write a program which accept two numbers from user and calculate its power.
Input : 3 4
Output : 81
Input : 7 3
Output : 343
*/

#include"stdio.h"
void powerUp(int,int);

void powerUp(int base, int power){
    int result = 1;
    while (power > 0)
    {
        result = result * base;
        power--;
    }
    printf("Output : %d",result);
}
void main(){
    int base,power;
    printf("Input Base Value:");
    scanf("%d",&base);
    printf("Power :");
    scanf("%d",&power);
    powerUp(base,power);
}