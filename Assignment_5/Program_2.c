/* Accept number from user and print below pattern.
Input : 4
Output : * * * * # # # #
*/

#include"stdio.h"
void getPattern(int);

void main(){
    int no;
    printf("Enter the number: ");
    scanf("%d",&no);
    getPattern(no);
}

void getPattern(int no){
   int count = no*2;
   for(int i = 0; i < count; i++){
       if(i < no){
           printf("* ");
       }
       else
       {
           printf("# ");
       }
       
   }

}