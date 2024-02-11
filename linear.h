#include <stdio.h>

double linear(void);

double linear(void)
{
    double a, b, x;
    
    printf("Enter value for a : ");
    scanf("%lf", &a);

    printf("Enter value for b : ");
    scanf("%lf", &b);

    x = (-b / a);

    printf("x = %lf", x);
}