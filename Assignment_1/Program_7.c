//Accept anumber and print that number of '*'

#include"stdlib.h"
#include"stdio.h"

void print_me(int no);

void print_me(int no){
	do{
		printf("*");
		no--;
		}while(no > 0);
}

void main(){
	int no;
	scanf("%d",&no);
	print_me(no);
}
