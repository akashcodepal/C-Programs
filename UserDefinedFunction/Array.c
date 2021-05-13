#include <stdio.h>

int inputArray(int[]);
int displayArray(int[]);
int reverseArray(int[]);

int main()
{
  int a[5];
  inputArray(a);
  displayArray(a);
  reverseArray(a);
}

int inputArray(int b[])
{
  printf("Enter array elements: ");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &b[i]);
  }
  return 0;
}

int displayArray(int c[])
{
  printf("array elements...");
  for (int i = 0; i < 5; i++)
  {
    printf("%d\t", c[i]);
  }
  return 0;
}

int reverseArray(int d[]){
  int e[5];
  printf("\nReverse of matrix\n");
  for (int i = 0,j=4; i < 5; i++,j--)
  {
    e[j]=d[i];
  }
  displayArray(e);
  return 0;
}