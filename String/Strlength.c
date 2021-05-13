#include <stdio.h>
#include<string.h>
int strLength(char name[])
{
  int count = 0;
  while (name[count]!='\0')
  {
    count++;
  }
  return count;
}

void main()
{
  char name[20];
  printf("Enter Name: ");
  gets(name);
  printf("Length of String: %d", strLength(name));
}