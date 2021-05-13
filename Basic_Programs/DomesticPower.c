// Domestic Power calculator with else if ladder statement

#include <stdio.h>
void main()
{
    int unit;
    float amount;
    printf("Enter the power Consumption Units: ");
    scanf("%d", &unit);
    if (unit >= 0 && unit <= 200)
    {
        amount = unit * 0.50;
    }
    else if (unit > 200 && unit <= 400)
    {
        amount = unit * 0.65 + 100;
    }
    else if (unit > 400 && unit <= 600)
    {
        amount = unit * 0.80 + 230;
    }
    else if (unit > 600)
    {
        amount = unit * 1 + 390;
    }
    else
    {
        printf("Incorrect Units Given");
    }
    printf("Amount: %f\n", amount);
}