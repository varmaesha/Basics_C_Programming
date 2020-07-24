//Accept length and width of rectangle and calculate its area (Length * Width).

#include"stdio.h"

void areaOfRect(float,float);

void main(){
    float length, width;
    printf("Enter lengeth and width of rectangle:\n");
    scanf("%f%f",&length,&width);
    areaOfRect(length,width);
}

void areaOfRect(float length, float width){
    float area;
    area = length * width;
    printf("The area of rectangle is %.3f",area);
}