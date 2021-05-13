// ADD content of Matrix
#include <stdio.h>
int main()
{
  int a[50][50], r1, c1, i, j;

  //1st matrix
  printf("Enter size of row and column of matrix: ");
  scanf("%d %d", &r1, &c1);
  printf("Enter Matrix1 Elements: ");
  for (i = 0; i < r1; i++)
  {
    for (j = 0; j < c1; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }

  //display transpose matrix
  printf("Transpose of matrix: \n");
  for (i = 0; i < r1; i++)
  {
    for (j = 0; j < c1; j++)
    {
      printf("%d\t", a[j][i]);
    }
    printf("\n");
  }

  return 0;
}