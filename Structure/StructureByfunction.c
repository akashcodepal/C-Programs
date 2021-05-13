//passing structure as parameter by call by reference
#include <stdio.h>

struct Student
{
  int a;
};

void initialise(struct Student *ptr)
{
  ptr->a = 6;
}

int main()
{
  struct Student s;
  s.a = 5;
  printf("Before,a=%d\n", s.a);
  initialise(&s);
  printf("After,a=%d", s.a);
  return 0;
}