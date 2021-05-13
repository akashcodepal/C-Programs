// PRogram to compare the number
#include <stdio.h>
void main()
{
    int number1, number2;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &number1, &number2);

    (number1 > number2) ? printf("%d is greater than %d", number1, number2) : ((number1 < number2) ? printf("%d is greater than %d", number2, number1) : printf("Both numbers are equal", number2, number1));
}

/*
// PRogram to Check the numbers are equal or not
#include <stdio.h>
void main()
{
    int number1, number2;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &number1, &number2);

    (number1 == number2) ? printf("Both numbers are Equal") : printf("Both numbers are not equal");
}*/