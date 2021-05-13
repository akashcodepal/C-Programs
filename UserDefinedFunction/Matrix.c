//MAtrix with user defined function of size 3x3
#include <stdio.h>

int inputMatrix(int[][3]);
int displayMatrix(int[][3]);
int transposeMatrix(int[][3]);

int main()
{
  int a[3][3];
  inputMatrix(a);
  displayMatrix(a);
  transposeMatrix(a);
}

int inputMatrix(int b[3][3])
{
  int i, j;
  printf("Enter Matrix elements: ");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }
  return 0;
}

int displayMatrix(int c[3][3])
{
  int i, j;
  printf("Matrix elements...");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}

int transposeMatrix(int d[3][3])
{
  int e[3][3], j, i;
  printf("\nTranspose of matrix\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
      e[j][i] = d[i][j];
  }
  displayMatrix(e);
  return 0;
}