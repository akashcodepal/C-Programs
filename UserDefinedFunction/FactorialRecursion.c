#include<stdio.h>

long Factorial(int n){
    if(n==1){
        return 1;
    }else{
      return n*Factorial(n-1);
    }
}
int main(){
    int num;
    long fact;
    printf("Enter Number: ");
    scanf("%d",&num);
    fact=Factorial(num);
    printf("Factorial : %ld",fact);
    return 0;
}