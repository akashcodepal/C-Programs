#include<stdio.h>

int inputPointer(int *);
int outputPointer(int *);
int outputValue(int);

int main(){
  int a;
  inputPointer(&a);
  outputPointer(&a);
  outputValue(a);
}

int inputPointer(int *p){
  printf("Enter number: ");
  scanf("%d",p);
}

int outputPointer(int *ptr){
  printf("Entered number: %d",*ptr);
}

int outputValue(int b){
  printf("\nEntered number: %d",b);
}