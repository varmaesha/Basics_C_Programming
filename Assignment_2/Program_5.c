//Swap character contents

#include"stdio.h"

void swapChar(char*, char*);

void swapChar(char *c1, char *c2){
	char temp='\0';
	
	temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

int main(){
	char c1,c2;
	printf("Enter character to swap:\n");
	scanf("%c %c",&c1,&c2);
	swapChar(&c1,&c2);
	printf("Characters after swapping:\n");
	printf("%c \n%c",c1,c2);
	return 0;
}
