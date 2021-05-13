//Program to print Armstrong Numbers

#include <stdio.h>
void main()
{
    int n,digits;
    printf("Enter upto Which numbers shows the Armstrong number");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        while (i != 0)
        {             
           i=i/10;
           digits++; 
        }
    }
}