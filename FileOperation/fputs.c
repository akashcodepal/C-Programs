//take string from user and store in file
#include<stdio.h>

int main(){
  FILE *fptr;
  char str[40];
  fptr=fopen("./files/fputs.txt","w");
  if(fptr==NULL)
  printf("File not created");
  else{
    printf("File Created\n");
    printf("Enter String: ");
    gets(str);
    fputs(str,fptr);
    printf("Check File...");
    fclose(fptr);
  }
}