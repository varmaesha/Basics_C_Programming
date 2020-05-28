//Print a message 5 times

#include"stdlib.h"
#include"stdio.h"
#include"string.h"

void print_msg(char*, int);

void print_msg(char* str, int no){
	
	printf("Output:");
	while(no > 0){
		printf("\n%s",str);
		no--;
	}
}

void main(){
	char str[100];
	char *str1;
	printf("Enter String:");
	scanf("%[^\n]",str);
	str1=(char*)malloc(strlen(str)*sizeof(char));
	strcpy(str1,str);
	print_msg(str1,5);
}

