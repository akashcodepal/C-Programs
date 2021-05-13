//take character by character from keyboard
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
  FILE *fptr;
  char ch,che;
  fptr=fopen("./files/fputc2.txt","a");
  //fptr=fopen("./files/fputc2.txt","w");
  if(fptr==NULL){
    printf("File not Created/Opened");
  }else{
    printf("File Created\n");
    do{
      printf("Enter Character: ");
      fflush(stdin);
      scanf("%c",&ch);
      fputc(ch,fptr);
      printf("Press Y to continue....");
      fflush(stdin);
      che=getchar();
    }while(che=='Y'||che=='y');

    printf("Check files...for results");
    fclose(fptr);
  }
  return 0;
}