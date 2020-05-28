//Accept number from user and return by substracting 5

#include"stdlib.h"
#include"stdio.h"

int returmBySub(int no);

int returnBySub(int no){
	return(no-5);
}

void main(){
	int no;
	scanf("%d",&no);
	int res = returnBySub(no); 
	printf("Number after substracting 5 from %d is %d",no,res);
}
