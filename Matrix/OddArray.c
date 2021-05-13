// print odd elements in array
#include <stdio.h>
int main()
{
    int a[100], n, i, flag = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter Array Elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Odd Array Elements: ");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d\t", a[i]);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("No odd Element in the array");
    }
    return 0;
}