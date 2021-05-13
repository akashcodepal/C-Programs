// Online C compiler to run C program online
#include <stdio.h>

int main()
{
  char str[50];
  char s[40];
  printf("Enter String: ");
  gets(s);
  printf("Enter sentence: ");
  scanf("%s", str);
  printf("%s", str);
  puts(s);
  return 0;
}