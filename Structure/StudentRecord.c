//Student record with calculating their total and percentage
#include <stdio.h>

struct Student
{
  int rollNo;
  char name[20];
  int marks[3];
} s;

struct Student inputStruct()
{
  printf("Enter Student data:");
  printf("\nRoll No.: ");
  scanf("%d", &s.rollNo);
  fflush(stdin);
  printf("Name: ");
  gets(s.name);
  printf("Marks of 3 Subjects: ");
  for (int i = 0; i < 3; i++)
    scanf("%d", &s.marks[i]);
}

struct Student displayStructt()
{
  int total = 0;
  float percent;
  printf("Student Data...\n");
  printf("Roll No.:%d\nName:%s\n", s.rollNo, s.name);
  printf("Marks in 3 Subjects: ");
  for (int i = 0; i < 3; i++)
  {
    printf("%d\t", s.marks[i]);
    total += s.marks[i];
  }
  percent = total * 100 / 300;
  printf("\nTotal: %d\nPercent: %.2f", total, percent);
}

int main()
{
  inputStruct();
  displayStructt();
  return 0;
}