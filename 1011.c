#include<stdio.h>
int main()
{
    double r, pi = 3.14159;
    scanf("%lf", &r);
    double v = (4/3.0) * pi * (r*r*r);
    printf("VOLUME = %.3lf\n", v);
    return 0;
}