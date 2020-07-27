/*Accept number from user and 
display below pattern as.
Input : 5
Output : A A A A A
*/

#include"stdio.h"

void pattern(int);

void pattern(int count){
    while (count > 0){
        printf("A \t");
        count--;
    }
}

void main(){
    int count;
    printf("Input : ");
    scanf("%d",&count);
    pattern(count);
}