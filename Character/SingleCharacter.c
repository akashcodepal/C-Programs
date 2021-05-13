// Online C compiler to run C program online
#include <stdio.h>

int main()
{
  char ch;
  char str[50];
  char s[40];
  printf("Enter String: ");
  // scanf("%s", str);
  gets(str);
  printf("Enter another string: ");
  gets(s);
  printf("Enter Character: ");
  scanf(" %c", &ch);

  printf("Entered Content:\n");
  puts(str);
  puts(s);
  printf("%c", ch);
  return 0;
}