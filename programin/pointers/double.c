#include <stdio.h>

int main()
{
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    double *p = &a;
    double *q = &b;
    printf("\n%p %lf", p, *p);
    printf("\n%p %lf", q, *q);
}