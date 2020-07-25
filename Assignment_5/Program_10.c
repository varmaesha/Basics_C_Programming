/*
Write a program which accept length of three sides of triangle and check whether it is Pythagorean triple or not.
Input : 3 4 5
Output : TRUE 
Input : 9 2 8
Output : FALSE
*/

#include"stdio.h"
void getBool(int,int,int);
int getLargest(int,int,int);

void main(){
    int side1, side2, side3;
    printf("Input: ");
    scanf("%d %d %d",&side1,&side2,&side3);
    getBool(side1,side2,side3);
}

void getBool(int no1, int no2, int no3){
    int largest, hypo, perpendicularSides; 
    largest = getLargest(no1,no2,no3);
   
    hypo = largest*largest;
    
    if(largest == no1){
        perpendicularSides = (no2*no2)+(no3*no3);
    }
    else
    {
        if(largest == no2)
        {
            perpendicularSides = (no1*no1)+(no3*no3);
        }
        else
        {
            perpendicularSides = (no1*no1)+(no2*no2);
        }
        
    }
    printf("\nOutput: ");
    if(hypo == perpendicularSides){
        printf("True");
    }
    else
    {
        printf("False");
    }
    
    

}

int getLargest(int n1, int n2, int n3){
    if(n1>n2 && n1>n3){
        return n1;
    }
    else{
        if(n2>n3){
            return n2;
        }
        else
        {
            return n3;
        }
        
    }
}