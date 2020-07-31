/*
Accept one character from user and depends on that character display its type.
Input : A
Output : It is Capital
Input : d
Output : It is Small
Input : 5
Output : It is Digit
*/

#include"stdio.h"
void getType(char ch){
    int res=0;
    if(ch >= '0' && ch <= '9'){
        printf("It is Digit");
    }
    else{
        //printf("here");
        res =((ch >= 'A' && ch <= 'Z')?printf("It is Capital"):(ch >= 'a' && ch <= 'z')?printf("It is Small"):printf("Invalid Input"));
    }
    
}
void main(){
    char ch='\0';
    printf("Input :");
    scanf("%c",&ch);
    getType(ch);    
}