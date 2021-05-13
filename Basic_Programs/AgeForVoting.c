//  Program to calculate the Age of Person For Voting(eligibility)

#include <stdio.h>
void main()
{
    int age;
    printf("Enter Age of the Person: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Person is Eligible");
    }
    else
    {
        printf("Person is not Eligible");
    }
}