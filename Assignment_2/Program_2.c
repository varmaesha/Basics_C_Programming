//Print even factors of number

#include"stdio.h"

void prtinEvenFact(int);

void printEvenFact(int no){
	for(int i = 1; i <= no; i++){
	if(no % i == 0 && i % 2 == 0){
		printf("\n%d",i);
	}
	}
	
}

void main(){
	int no;
	printf("Enter number to print its even factors: ")
	scanf("%d",&no);
	printEvenFact(no);
}
