//Prints Fibonacci Series Upto Given Number
#include"stdio.h"

int fibo(int no){
	if(no <= 1)
		return no;
	return fibo(no-1) + fibo(no-2);
}

void printSeries(int no){
	int strt = 0, prev = 1, nxt;
	printf("%d %d",strt,prev);
	for(int i = 2; i < no;i++){
		nxt = strt + prev;
		printf(" %d",nxt);
		strt = prev;
		prev = nxt;
	}

}
void main(){
	int no;
	printf("Enter Number To Obtain Fibonacci Series:\n");
	scanf("%d",&no);
	printf("Prints last number in Fiboncai Series and Series\n");
	printf("\n%d\n",fibo(no));
	printSeries(no);
}
