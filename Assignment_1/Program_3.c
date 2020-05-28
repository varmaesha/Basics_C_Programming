//Print number series in reverse order upto 1

#include"stdio.h"

void print_no(int no, int times){
	printf("Output:\n");
	while(times > 0){
		printf("\n%d",no);
		times--;
        no--;
	}
}

void main(){
	int no;
	printf("Enter start of series:\n");
	scanf("%d",&no);
	print_no(no,5);
}
