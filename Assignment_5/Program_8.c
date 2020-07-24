/* Cost of land is 560 rupees per square feet.
Accept number of square feet from user and calculate total cost.
*/
 
#include"stdio.h"
#define PSF 560

void totalCost(int);

void main(){
    int squareFeet;
    printf("Enter the land requirement in square feet:");
    scanf("%d",&squareFeet);
    totalCost(squareFeet);
}

void totalCost(int area){
    int totalCost;
    totalCost = PSF * area;
    printf("Total cost of land is %d",totalCost);
}