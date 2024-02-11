double power(double base, double exponent);

double power(double base, double exponent)
{
    double result = 1.0;

    if (exponent >= 0)
    {
        for (int i = 0; i < exponent; ++i)
        {
            result *= base;
        }
    } 

    else
    {
        for (int i = 0; i > exponent; --i)
        {
            result /= base;
        }
    }

    return result;
}