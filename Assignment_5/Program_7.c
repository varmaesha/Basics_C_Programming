/*Accept radius of circle from user and calculate its circumference (2*PI*R).
Input : 4.2
Output : 26.39
*/

#include"stdio.h"
#define PI 3.14

void main(){
    float radius;
    printf("ENter Radius to get circumference:");
    scanf("%f",&radius);
    printf("The circumference is: %.2f",(2*PI*radius));
}