#include <stdio.h>
#define MAX 10
#define NIL -1

typedef struct StackImplement
{
  int a[MAX];
  int top;
} Stack;

void push(Stack *, int);
int pop(Stack *);
int peep(Stack *);
int isOverflow(Stack *);
int isUnderflow(Stack *);

void main()
{
  Stack S;
  S.top = NIL;
  int ch, n;
  while (1)
  {
    printf("\nMenu:\n1. Push\n2. Pop\n3. Peep\n4.Exit");
    printf("\nEnter choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      printf("Enter number to push: ");
      scanf("%d", &n);
      if (isOverflow(&S))
      {
        printf("Stack is Full");
      }
      else
      {
        push(&S, n);
      }
      break;
    case 2:
      if (isUnderflow(&S))
      {
        printf("Stack is Empty");
      }
      else
      {
        pop(&S);
        printf("Number popped");
      }
      break;
    case 3:
      if (isUnderflow(&S))
      {
        printf("Stack is Empty");
      }
      else
      {
        n = peep(&S);
        printf("Peep value is: %d", n);
      }
      break;
    case 4:
      exit(1);
    default:
      printf("\nWrong Choice entered");
    }
  }
}

int isOverflow(Stack *S)
{
  if (S->top == MAX - 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int isUnderflow(Stack *S)
{
  if (S->top == NIL)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void push(Stack *S, int n)
{
  S->top = S->top + 1;
  S->a[S->top] = n;
}

int pop(Stack *S)
{
  int n;
  n = S->a[S->top];
  S->top = S->top - 1;
  return n;
}

int peep(Stack *S)
{
  int n;
  n = S->a[S->top];
  return n;
}