// Program to check the alphabet

#include <stdio.h>
#include <ctype.h>

void main()
{
    char ch;
    printf("Enter any Character: ");
    scanf(" %c", &ch);
    if (isalpha(ch))
    {
        printf("Entered symbol is a Character");
    }
    else
    {
        printf("entered symbol is not a Character");
    }
}