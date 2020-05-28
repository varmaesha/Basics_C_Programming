// Accept two integers from user and swap contents of that two integers with    out using temporary variable.

#include"stdio.h"

void swapInt(int*, int*);

void swapInt(int *no1 ,int *no2){
	*no1 = *no1 + *no2;
	*no2 = *no1 - *no2;
	*no1 = *no1 - *no2;
}

int main(){
	int no1,no2;
	printf("Enter number to swap:");
	scanf("%d%d",&no1,&no2);
	printf("\nNumbers before swapping:");
	printf("\n%d %d",no1,no2);
	swapInt(&no1,&no2);
	printf("\nNumbers after swapping:");
	printf("\n%d %d",no1,no2);
	return 0;
}
