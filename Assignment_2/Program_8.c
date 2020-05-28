//Case converseion

#include"stdio.h"
#include"ctype.h"

void swapCase(char *);

void swapCase(char *ch){
	if(*ch >= 65 && *ch <=90){
		*ch = *ch + 32; 
	}
	else{
		*ch = *ch -32;
	}
}

void main(){
	char ch;
	printf("Enter character to convert case:");
	scanf("%c",&ch);
	printf("Before Conversion: ");
	printf("%c",ch);
	if(!isalpha(ch)){
		printf("Enter character for conversion!!");
	
	
	}
	swapCase(&ch);
	printf("\nAfter Conversion:");
	printf("%c",ch);

}
