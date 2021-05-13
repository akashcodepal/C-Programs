#include <stdio.h>
void main()
{
    int a[10][10], b[100], i, j, k = 0, size, n, temp;
    printf("Enter Size of Array");
    scanf("%d", &size);
    printf("Enter Array:");
    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
        {
            scanf("%d", &a[i][j]);
        }

    printf("Enter position to search");
    scanf("%d", &n);

    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
        {
            b[k++] = a[i][j];
        }

    for (i = 0; i < size * size; i++)
        for (j = 0; j < (size * size - 1 - i); j++)
        {
            if (b[j] > b[j + 1])
            {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }

    k = 0;
    for (i = 0; i < size * size; i++)
    {
        if (i == (n - 1))
        {
            printf("%d", b[i]);
        }
    }
}