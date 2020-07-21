/*Accept one numbers from user and display the output as:
Input : 543
Output : Three Four Five
Input : 7309
Output : Nine Zero Three Seven
*/

#include"stdio.h"

void digToNumber(int);

void main(){
    int input;
    printf("Input :\t");
    scanf("%d", &input);
    digToNumber(input);
}

void digToNumber(int no){
    int temp;
    printf("Output :");
    while(no > 0){
        temp = no % 10;
        switch (temp)
        {
        case 0:
            printf("Zero\t");
            break;
        
        case 1:
            printf("One\t");
            break;
        
        case 2:
            printf("Two\t");
            break;
        
        case 3:
            printf("Three\t");
            break;

        case 4:
            printf("Four\t");
            break;
        
        case 5:
            printf("Five\t");
            break;

        case 6:
            printf("Six\t");
            break;
        
        case 7:
            printf("Seven\t");
            break;

        case 8:
            printf("Eight\t");
            break;

        case 9:
            printf("Nine\t");
            break;

        default:
            break;
        } 
        no = no / 10;
    }
}
