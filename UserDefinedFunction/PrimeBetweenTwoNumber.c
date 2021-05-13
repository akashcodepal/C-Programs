#include <stdio.h>

int PrintPrime(int num1, int num2)
{
    int i, j, f;
    for (i = num1; i <= num2; i++)
    {
        f = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                f = 1;
                continue;
            }
        }
        if (f == 0)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}
int main()
{
    int a, b;
    printf("Enter two Numbers: ");
    scanf("%d %d", &a, &b);
    PrintPrime(a, b);
    return 0;
}