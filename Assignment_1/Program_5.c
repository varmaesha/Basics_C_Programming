//Accept a number and print that number of '*'

//#include"stdlib.h"
#include"stdio.h"

void printMe(int);

void printMe(int no){
	for(int i = 0; i < no; i++){
	printf("*");
	}
}

void main(){
	int no;
	scanf("%d",&no);
	printMe(no);
}
