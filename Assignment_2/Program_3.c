//Display common factors of Two numbers

#include"stdio.h"

void pritnCommansFactores(int, int);

void pritnCommansFactors(int no1, int no2){
	int smaller_no=(no1<no2)?no1:no2;
	int i = 1;
	while(i <= smaller_no){
	if(no1 % i == 0 && no2 % i == 0){
		printf("\n%d",i);
	}
	i++;
}
}
void main(){
	int no1, no2;
	printf("Enter 2 numbers to print their comman factors:\n");
	scanf("%d%d",&no1,&no2);
	pritnCommansFactors(no1,no2);
}
