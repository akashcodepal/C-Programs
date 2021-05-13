#include<stdio.h>
#include<string.h>

int StringLength(char []);
int StringCopy(char [],char []);
int StringReverse(char []);
int StringConcatenate(char [],char []);
int StringCompare(char [],char []);
int StringPalindrome(char []);
int StringSubString(char [],char []);

int main(){
  char ch,str1[50],str2[50];
  int n;
  do{
    printf("Menu:\n1.String length\n2.String copy\n3.String Reverse\n4.String Concatenate\n5.String Compare\n6.String Palindrome\n7.String Substring");
    scanf("%d",&n);
    switch(n){
      case 1: StringLength(str1);
      break;
      case 2: StringCopy(str1,str2);
      break;
      case 3: StringReverse(str1);
      break;
      case 4: StringConcatenate(str1,str2);
      break;
      case 5: StringCompare(str1,str2);
      break;
      case 6: StringPalindrome(str1);
      break;
      case 7: StringSubString(str1,str2);
      break;
      default: printf("\nWrong Choice\n");
    }
    printf("Enter Y to continue....");
    ch=getchar();   
  }while(ch=='y' || ch=='Y');
}

int StringLength(char []);
int StringCopy(char [],char []);
int StringReverse(char []);
int StringConcatenate(char [],char []);
int StringCompare(char [],char []);
int StringPalindrome(char []);
int StringSubString(char [],char []);