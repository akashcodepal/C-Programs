//Read data of 1 student by struct
//input and output with function
#include <stdio.h>

struct Student
{
  int rollNo;
  char name[20];
  char address[30];
} s1;
//this makes s1 variable global so it is available to all the function without passing it

struct Student inputStruct()
{
  printf("Enter Student data:");
  printf("\nEnter Roll No.:");
  scanf("%d", &s1.rollNo);
  fflush(stdin);
  printf("Enter name: ");
  gets(s1.name);
  printf("Enter Address: ");
  gets(s1.address);
}

void displayStruct(struct Student s)
{
  printf("Student Data...With normal function\n");
  printf("Roll No.:%d\tName:%s\tAddress:%s", s.rollNo, s.name, s.address);
}

struct Student displayStructt()
{
  printf("\nStudent Data...With struct function\n");
  printf("Roll No.:%d\tName:%s\tAddress:%s", s1.rollNo, s1.name, s1.address);
}

int main()
{
  inputStruct();
  displayStruct(s1);
  displayStructt();
  return 0;
}