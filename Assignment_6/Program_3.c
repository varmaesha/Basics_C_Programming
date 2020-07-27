/*Write a program which accept number   hours 
and calculate number of minutes.
Input : 5
Output : 300
*/

#include"stdio.h"

int hrsToMinutes(int);

int hrsToMinutes(int hrs){
    int minutes = 0;
    minutes = hrs * 60;
    return minutes;
}

void main(){
    int hrs, minutes;
    printf("Input : ");
    scanf("%d",&hrs);
    minutes = hrsToMinutes(hrs);
    printf("Output : %d",minutes);
}

