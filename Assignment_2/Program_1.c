//Accept a number and print even number of that count
#include"stdio.h"

void printEven(int);

void printEven(int count){
	int i = 0;
	while(count > 0 ){
		printf("\n%d",i*2);
		count-=1;
		i++;
	}
}

void main(){
	int no;
	printf("How many Even numbers to print ?\n")
	scanf("%d",&no);
	printEven(no);
}
