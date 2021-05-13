// Program to convert Lowercase Character to Uppercase Character and vice versa

#include <stdio.h>
#include <ctype.h>

void main()
{
    char ch;

    printf("Enter any Character: ");
    scanf(" %c", &ch);
    if (isalpha(ch))
    {
        if (islower(ch))
        {
            printf("Uppercase character is: %c", toupper(ch));
        }
        else
        {
            printf("Lowercase character is: %c", tolower(ch));
        }
    }
    else
    {
        printf("Entered symbol is not a Character");
    }
}