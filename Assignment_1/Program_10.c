/*Accept on number from user 
if number is less than 10 then print "Hello"
otherwise print "Demo".*/

#include"stdlib.h"
#include"stdio.h"

void main(){
	int no;
	scanf("%d",&no);
	if(no < 10)
		printf("Hello");
	else
		printf("Demo");
}
