//fprintf is for writing all types of data to file.......
#include <stdio.h>

int main()
{
  FILE *fptr;
  int n;

  fptr = fopen("./files/fprintf.txt", "w");
  if (fptr == NULL)
  {
    printf("File not created");
  }
  else
  {
    printf("File Created!\n");
    printf("Enter any number:");
    scanf("%d", &n);
    fprintf(fptr, "%d", n);
  }
}