#include<stdio.h>

int AreaCircle(float r){
    float area= 3.14*r*r;
    printf("Area: %.3f",area);
    return 0;
}
int main(){
    float radius;
    printf("Enter Area of Circle: ");
    scanf("%f",&radius);
    AreaCircle(radius);
    return 0;
}