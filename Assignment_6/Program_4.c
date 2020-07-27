/*
Write a program which accept number of minutes and 
calculate number of hours.
Input : 320
Output : 5 hours 20 minutes
Input : 150
Output : 2 hours 30 minutes
*/

#include"stdio.h"

void minuteToHours(int);

void minuteToHours(int min){
    int remMin, hrs;
    hrs = min / 60;
    remMin = min - (hrs * 60);
    printf("Output : %d hours %d minutes",hrs, remMin);
}

void main(){
    int minutes;
    printf("Input :");
    scanf("%d",&minutes);
    minuteToHours(minutes);
}