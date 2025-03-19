#include<stdio.h>
int main()
{
    int num, h;
    double wage, salary;
    scanf("%d %d %lf", &num, &h, &wage);
    salary = h * wage;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", salary);
    return 0;
}