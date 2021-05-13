// Program to convert Lowercase Character to Uppercase Character

#include <stdio.h>
#include <ctype.h>

void main()
{
    char ch;

    printf("Enter any Character in Lowercase");
    scanf(" %c", &ch);
    printf("Converted character is: %c", toupper(ch));
}