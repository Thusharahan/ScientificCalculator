#include<stdio.h>
#include"arithmatic.h"


double quadratic(void);
double quadratic_finder_solution_1(double input_1, double input_2, double input_3);
double quadratic_finder_solution_2(double input_1, double input_2, double input_3);

double find_quadratic_equation_1(double a);
double find_quadratic_equation_2(double factor, double a, double b);
double find_quadratic_equation_3(double factor,double a, double b, double c);

double quadratic(void)
{
    double a, b, c, delta, x1, x2;
    
    printf("Enter value for a : ");
    scanf("%lf", &a);

    printf("Enter value for b : ");
    scanf("%lf", &b);

    printf("Enter value for c : ");
    scanf("%lf", &c);

    delta = (b * b) - (4*a*c);

    if(delta >= 0)
    {
        x1 = (-b + squareRoot(delta)) / (2*a);
        x2 = (-b - squareRoot(delta)) / (2*a);

        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf", x2);
    }

    else
    {
        printf("No real solutions");
    }
}

//finding solutions
double quadratic_finder_solution_1(double a, double b, double c)
{
    double x1, delta;

    delta = (b * b) - (4*a*c);

    if(delta >= 0)
    {
        x1 = (-b + squareRoot(delta)) / (2*a);
        return x1;
    }

    else
    {
        printf("No real solutions for quadratic equation.");
    }    
}

double quadratic_finder_solution_2(double a, double b, double c)
{
    double x2, delta;

    delta = (b * b) - (4*a*c);

    if(delta >= 0)
    {
        x2 = (-b - squareRoot(delta)) / (2*a);
        return x2;
    }

    else
    {
        printf("No real solutions for quadratic equation.");
    }
}


//finding remaining coefficients
double find_quadratic_equation_1(double a)
{
    return a;
}

double find_quadratic_equation_2(double factor, double a, double b)
{
    return (a * factor) + b;
}

double find_quadratic_equation_3(double factor, double a, double b, double c)
{
    return (factor * find_quadratic_equation_2(factor, a, b)) + c;
}


