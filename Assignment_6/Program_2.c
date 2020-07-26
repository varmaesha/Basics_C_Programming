/*
Parking charges for four wheeler is 30 rupees for first three hours and after every hour it is 5 rupees. 
Accept number of hours and calculate total amount.
Input : 2
Output : 30
Input : 7
Output : 50
*/

#include"stdio.h"
#define FIRST3 30
#define AFTER3 5

void totalRent(int);

void main(){
    int hrs;
    printf("Input:");
    scanf("%d",&hrs);
    totalRent(hrs);
}

void totalRent(int hrs){
    int icost = 0,tcost = 0;
    if(hrs < 4){
        tcost =FIRST3;
    }
    else
    {
 
        icost =((hrs - 3) *AFTER3);
        tcost = icost +  FIRST3;
    }
    printf("Output: %d",tcost);
}