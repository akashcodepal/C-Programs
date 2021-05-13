#include<stdio.h>
void main(){
    float r,area,per;
    printf("Enter radius of circle:");
    scanf("%f",&r);
    area=3.14*r*r;
    per=6.28*r;
    printf("Area: %f and Perimeter: %f",area,per);
}