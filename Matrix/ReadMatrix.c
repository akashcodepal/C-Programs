// print content of Matrix
#include <stdio.h>
int main()
{
    int a[50][50], row, column, i, j;
    printf("Enter size of row and column of matrix: ");
    scanf("%d %d", &row, &column);
    printf("Enter Matrix Elements: ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix Elements: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}