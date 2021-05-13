// print Maximum element in array
#include <stdio.h>
int main()
{
    int a[100], n, i, max = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter Array Elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Maximum Array Element: ");
    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("%d", max);

    return 0;
}