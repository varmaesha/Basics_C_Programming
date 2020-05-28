//Display common factors of Two numbers

#include"stdio.h"

void pritnCommanFactores(int, int);

void pritnCommanFactors(int no1, int no2){
	int largest;
	int smaller_no=(no1<no2)?no1:no2;
	for(int i = 1; i <= smaller_no; i++){
	if(no1 % i == 0 && no2 % i == 0){
		largest=i;
		}
	}
	printf("%d",largest);
}
void main(){
	int no1, no2;
	printf("Enter 2 numbers to display their common factors:\n")
	scanf("%d%d",&no1,&no2);
	pritnCommanFactors(no1,no2);
}
