//Gross Salary calculate
#include <stdio.h>

int GrossSalary(int Basic,int TA)
{
    float HRA, DA;
    int Gross;
    HRA = (15 * Basic) / 100;
    DA = (35 * Basic) / 100;
    Gross = HRA + DA + TA+Basic;
    printf("Total Salary: %d", Gross);
    return 0;
}
int main()
{
    int basicSalary,TA;
    printf("Enter Basic Salary and TA: ");
    scanf("%d %d", &basicSalary,&TA);
    GrossSalary(basicSalary,TA);
    return 0;
}