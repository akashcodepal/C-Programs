// Array Sum 
#include <stdio.h>
int main()
{
    int a[100], n, i, sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter Array Elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("Sum: %d", sum);
    return 0;
}