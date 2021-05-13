//Program to count vowel in paragraph
#include<stdio.h>
int numVowels(char []);

void main(){
  char str[100];
  
  printf("Enter String: ");
  gets(str);

  int n= numVowels(str);
  printf("Number of Vowels: %d",n);

}

int numVowels(char str[]){
  int n=0;
  for(int i=0; str[i]!='\0';i++){
    if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' 
    ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U'){
      n++;
    }
  }
  return n;
}