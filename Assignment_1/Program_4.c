//Check a numbers divisibility

#include"stdlib.h"
#include"stdio.h"

void checkDiv(int no1, int no2){
	if(no1 % no2 == 0)
		printf("%d is divisible by %d",no1,no2);
	else
		printf("NON DIVISIBLE");
}

void main(){
	int no1,no2;
	printf("Enter number to check divisiblity:");
	scanf("%d%d",&no1,&no2);
	checkDiv(no1,no2);
}
