#include"stdio.h"
#include"ctype.h"

void char_vowel(char);

void char_vowel(char c){
	//bool state = false;
	int lower_case, upper_case;
	lower_case=(c=='a'|| c=='e'||c=='i'||c=='o'||c=='u');
	upper_case=(c=='A'|| c=='E'||c=='O'||c=='I'||c=='U');
	if(upper_case||lower_case){
	//state = true;
	printf("Is Char vowel ? \n True");
	}
}

void main(){
	char c;
	scanf("%c",&c);
	if(!isalpha(c)){
	printf("Enter a alphabet");
	}
	else{
	char_vowel(c);
	}
}
