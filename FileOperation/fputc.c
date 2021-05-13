//write content to file character by character
//here string is already given
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int num, ch;
   FILE *fptr;
   char str[30] = "My name is Akash\n";
   fptr = fopen("./files/fputc1.txt", "w");
   //fptr = fopen("./files/test.txt", "a");   mode ===append

   if (fptr == NULL)
   {
      printf("File not created!");
   }
   else
   {
      printf("File created/opened!\n");
      for (int i = 0; i < strlen(str); i++)
      {
         fputc(str[i], fptr);
      }
      printf("\nCheck the File to see results\n");
      fclose(fptr);
   }
   return 0;
}