//Program to count number of Words
#include <stdio.h>
int CountWord(char[]);

void main()
{
  char str[100];
  printf("Enter Paragraph: ");
  gets(str);

  int n = CountWord(str);
  printf("Number of Words:%d", n);
}

int CountWord(char str[])
{
  int n = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == ' ' && str[i + 1] != ' ')
      n++; //This will calculate the number of space....
  }
  n = n + 1; //and words will always be 1 more than number of spaces...
  return n;
}