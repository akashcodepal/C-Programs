#include<stdio.h>

int swap(int* , int*);

int main(){
  int a=5,b=6;
  printf("Before Swap, A=%d,B=%d",a,b);
  swap(&a,&b);
  printf("\nAfter Swap, A=%d,B=%d",a,b);
  return 0;
}

int swap(int *a,int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
   return 0;
}