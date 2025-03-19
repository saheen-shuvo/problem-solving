#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    double fixedSalary, hisSales;
    scanf("%s %lf %lf", name, &fixedSalary, &hisSales);
    double bonus = hisSales * 0.15;
    double finalSalary = fixedSalary + bonus;
    printf("TOTAL = R$ %.2lf\n", finalSalary);
    return 0;
}