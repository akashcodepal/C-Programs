//Programs for string without library function
#include <stdio.h>

int StringLength(char[]);
int StringCopy(char[], char[]);
int StringReverse(char[]);
int StringCompare(char[], char[]);
int StringConcatenate(char[], char[]);
int StringPalindrome(char[]);

void main()
{
  int n, i = 0, f;
  char ch, str1[50], str2[50];
  do
  {
    printf("Menu:\n");
    printf("1.Length of String\n2.Copy String\n3.Reverse String\n4.Compare String\n5.Concatenate String:\n6.Palindrome of String\n");
    printf("Enter Choice:");
    scanf("%d", &n);

    printf("Enter String1: ");
    fflush(stdin);
    gets(str1);
    printf("Enter String 2: ");
    fflush(stdin);
    gets(str2);

    switch (n)
    {
    case 1:
      printf("Length of string 1: %d", StringLength(str1));
      printf("Length of string 2: %d", StringLength(str2));
      break;
    case 2:
      StringCopy(str1, str2);
      break;
    case 3:
      StringReverse(str1);
      break;
    case 4:
      StringCompare(str1, str2);
      break;
    case 5:
      break;
    case 6:
      StringPalindrome(str1);
      break;
    default:
      printf("Wrong Choice");
    }
    printf("\nWant to continue! Press Y :");
    fflush(stdin);
    ch = getchar();
  } while (ch == 'y' || ch == 'Y');
}

//String Length
int StringLength(char str[])
{
  int count = 0;
  while (str[count] != '\0')
  {
    count++;
  }
  return count;
}

//String Copy (str2 into str1)
int StringCopy(char str1[], char str2[])
{  int i;
  for (i = 0; str2[i] != '\0'; i++)
  {
    str1[i] = str2[i];
  }
  str1[i] = '\0';
  printf("%s", str1);
}

//String reverse
int StringReverse(char str1[])
{
  char str[50];
  int count;
  count = StringLength(str1);
  str[count] = '\0';
  count--;
  for (int i = 0; str1[i] != '\0'; i++, --count)
  {
    str[count] = str1[i];
  }
  printf("%s", str);
}

//String Compare
int StringCompare(char str1[], char str2[])
{
  int f = 0, len1, len2;
  len1 = StringLength(str1);
  len2 = StringLength(str2);
  if (len1 < len2)
    printf("String 1 < String 2");
  else if (len1 > len2)
    printf("String 1 > String 2");
  else
  {
    for (int i = 0; str1[i] != '\0'; i++)
    {
      if (str1[i] != str2[i])
      {
        f = 1;
        break;
      }
    }
    if (f == 0)
      printf("Same");
    else
      printf("Different");
  }
  return f;
}

//String Concatenate
int StringConcatenate(char str1[], char str2[])
{
  int length = 0;
  length = StringLength(str1);
  str1[length++] = ' ';
  for (int i = 0; str2[i] != '\0'; i++)
  {
    str1[length++] = str2[i];
  }
  str1[length] = '\0';
  printf("%s", str1);
}

//String Palindrome
int StringPalindrome(char str1[])
{
  char str[50];
  int f = 1;
  int length = StringLength(str1); //user Defined
  for (int i = 0; i < length / 2; i++)
  {
    if (str[i] != str[length - 1 - i])
    {
      f = 0;
      break;
    }
  }
  if (f=1)
    printf("Palindrome");
  else
    printf("Not Palindrome");
}