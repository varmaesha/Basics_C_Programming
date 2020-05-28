//Accept a number and print '*' that number of times
//#include"stdlib.h"
#include"stdio.h"

void printMe(int no);

void printMe(int no){
	while(no > 0){
	printf("*");
	no--;
	}
}

void main(){
	int no;
	scanf("%d",&no);
	printMe(no);
}
