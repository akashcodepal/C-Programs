// Program to Check Even and Odd
#include <stdio.h>

int CheckEvenOdd(int n)
{
    int f = 0;
    if (n % 2 == 0)
    {
        f = 1;
    }
    return f;
}
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    int flag = CheckEvenOdd(num);
    if (flag == 1)
        printf("%d is Even", num);
    else{
        printf("%d is Odd", num);
    }
    return 0;
}