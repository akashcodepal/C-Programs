// using union
#include<stdio.h>
#include<string.h>

union Student {
  char name[10];
  int c;
  double d;
};

int main(){
  union Student s;
  int a;
  float b;
  char c;
  double d;
  long l;
  printf("int=%d\nfloat=%d\nchar=%d\ndouble=%d\nlong=%d\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(l));
  //strcpy(s.name,"Akash");
  // s.b=7;
  // s.c=111;
  //printf("name=%s, b=%d,c=%d",s.name,s.b,s.c);
  printf("\nSize of union: %d",sizeof(s));
  return 0;
}