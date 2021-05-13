#include<stdio.h>

void inputString(char []);
void outputString(char []);

int main (){
  char str[50];
  inputString(str);
  outputString(str);
  return 0;
}

void inputString(char str[]){
  printf("Enter string: ");
  gets(str);
}

void outputString(char str[]){
  printf("Entered String: %s",str);
}