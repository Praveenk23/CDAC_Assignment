#include<stdio.h>

int main()
{
    float BS,HRA,DA,PF,GS,Net_Salary;

    printf("Enter Basic Salary(BS) of Employee: \n");
    scanf("%f", &BS);

    HRA = BS * 0.15f;
    DA = BS * 0.30f;
    PF = BS * 0.125f;
    GS = BS + HRA + DA;
    Net_Salary = GS - PF;

    printf("Basic salary of Employee: %.2f\n", BS);
    printf("HRA: %.2f\n", HRA);
    printf("DA: %.2f\n", DA);
    printf("PF: %.2f\n", PF);
    printf("Gross salary: %.2f\n", GS);
    printf("Net salary: %.2f\n", Net_Salary);
    
    return 0;
}
