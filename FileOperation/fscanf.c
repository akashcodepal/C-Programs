//fscanf is for reading all types of data from file.......
#include <stdio.h>

int main()
{
  FILE *fptr;
  int n;

  fptr = fopen("./files/fscanf.txt", "r");
  if (fptr == NULL)
  {
    printf("File not opened..");
  }
  else
  {
    printf("File opened!\n");
    while ((n = fscanf(fptr, "%d", n)) != EOF)
    {
      printf("Entered number:%d", n);
    }
  }
}