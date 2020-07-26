/*Rent of car is 15 rupees per kilometre for first 120 kilometres and after that it is 10 rupees per kilometre. 
Accept total number of kilometres and calculate rent.
Input : 80
Output : 1200
Input : 145
Output : 2050
*/

#include"stdio.h"
#define FIRST120 15
#define AFTER120 10

void totalRent(int);

void main(){
    int kms;
    printf("Input:");
    scanf("%d",&kms);
    totalRent(kms);
}

void totalRent(int kms){
    int icost = 0,tcost = 0;
    if(kms < 121){
        tcost = kms * FIRST120;
    }
    else
    {
 
        icost =((kms - 120) * AFTER120);
        tcost = icost + (120 * FIRST120);
    }
    printf("Output: %d",tcost);
}