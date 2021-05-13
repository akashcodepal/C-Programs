// ADD content of Matrix
#include <stdio.h>
int main()
{
    int a[50][50], b[50][50], c[50][50], r1, c1, i, j;

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

    // 2nd matrix
    printf("Enter Matrix2 Elements: ");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    //Calculate Sum
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    //display sum
    printf("Sum of matrix: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}