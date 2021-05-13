//Program to store data of 5 student(array of struct) and with pointer 
#include<stdio.h>
#include<string.h>

struct Student {
  char name[20];
  int age;
  int sem;
  int marks;
}S[10],*ptr;

struct Student inputStruct(){
  ptr=S;
  int i;
  for(i=0;i<5;i++){
    printf("\nStudent %d",i+1);
    printf("\nEnter Name:");
    fflush(stdin);
    gets(ptr->name);
    printf("Enter Age: ");
    scanf("%d",&ptr->age);
    printf("Enter Semester: ");
    scanf("%d",&ptr->sem);
    printf("Enter Marks: ");
    scanf("%d",&ptr->marks);
    ptr++;
  }

}

struct Student displayStruct(){
  int i,maximum=0;
  char max_name[20];
  ptr=S;
  for(i=0;i<5;i++){
    printf("\n\nStudent %d",i+1);
    printf("\nName: %s",ptr->name);
    printf("\nAge: %d",ptr->age);
    printf("\nSemester: %d",ptr->sem);
    printf("\nMarks: %d",ptr->marks);
    if(maximum< ptr->marks){
      maximum= ptr->marks;
      strcpy(max_name,ptr->name);
    }
    ptr++;
  }
  printf("\nName Of Student With Maximum Marks: %s with %d",max_name,maximum);
}

void main(){
  inputStruct();
  displayStruct();
}