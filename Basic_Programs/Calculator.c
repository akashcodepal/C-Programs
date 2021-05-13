#include <stdio.h>
int main()
{
    float a, b, c;
    int ch;
    char yesNo;
    float add(float, float);
    float sub(float, float);
    float divi(float, float);
    float mult(float, float);

    do
    {
        printf("\nMENU\n");
        printf("1.addition \n2.subtraction \n3.division \n4.multiplication\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        if (ch != 1 && ch != 2 && ch != 3 && ch != 4)
        {
            printf("\n<-----Incorrect Choice----->\n");
        }
        else
        {
            printf("\nEnter the values of a and b:");
            scanf("%f %f", &a, &b);
            switch (ch)
            {
            case 1:
                c = add(a, b);
                printf("addition of two number is: %.2f", c);
                break;
            case 2:
                c = sub(a, b);
                printf("subtraction of two number is: %.2f", c);
                break;
            case 3:
                c = divi(a, b);
                printf("division of two number is: %.2f", c);
                break;
            case 4:
                c = mult(a, b);
                printf("multiplication of two number is: %.2f", c);
                break;
            default:
                printf("invalid option\n");
                break;
            }
            printf("\nWant to Continue:(Press Y for Yes and N for No)");
            scanf(" %c", &yesNo);
        }
    } while (yesNo != 'n' && yesNo != 'N');

    return 0;
}

float add(float x, float y)
{
    return x + y;
}
float sub(float x, float y)
{
    return x - y;
}
float divi(float x, float y)
{
    return x / y;
}
float mult(float x, float y)
{
    return x * y;
}