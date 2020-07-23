/*Accept radius of circle from user and calculate its area (PI*R*R).
Input : 4.2
Output : 17.64
*/

#include"stdio.h"
#define PI 3.14

void main(){
    float radius;
    printf("Input :");
    scanf("%f",&radius);
    printf("%.2f",(PI*radius*radius));
}

