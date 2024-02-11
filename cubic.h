#include"quadratic.h"

double cubic(void);

double cubic(void)
{
    double a, b, c, d, delta, x2, x3, q_a, q_b, q_c, factor, i, f_x;
    
    printf("Enter value for a : ");
    scanf("%lf", &a);

    printf("Enter value for b : ");
    scanf("%lf", &b);

    printf("Enter value for c : ");
    scanf("%lf", &c);

    printf("Enter value for d : ");
    scanf("%lf", &d);

    delta = (18 * a * b * c * d) - (4 * power(b, 3) * d) + ((power(b, 2) * power(c, 2)) - 4 * a * power(c, 3)) - (27 * power(a, 2) * power(d, 2));

    if(delta >= 0)
    {
        for(i = -5000; i < 5000; i++)
        {
            f_x = (a * power(i, 3)) + (b * power(i, 2)) + (c * i) + d;

            if(f_x == 0)
            {
                factor = i;
                printf("%lf", factor);
            }
        }   

        q_a = find_quadratic_equation_1(a);
        q_b = find_quadratic_equation_2(factor, a, b);
        q_c = find_quadratic_equation_3(factor, a, b, c);

        x2 = quadratic_finder_solution_1(q_a, q_b, q_c);
        x3 = quadratic_finder_solution_2(q_a, q_b, q_c);

        printf("\nx1 = %.2lf\n", factor);
        printf("x2 = %.2lf\n", x2);
        printf("x3 = %.2lf\n", x3);
    }

    else
    {
        printf("No real solutions");
    }
}
