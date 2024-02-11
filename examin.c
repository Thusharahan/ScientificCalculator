#include <math.h>
#include <stdio.h>

// Function to calculate the factorial of an integer
int factorial(int n)
{
   // Base case: if n is 0, return 1
   return (n == 0) ? 1 : n * factorial(n - 1);
}

// Function to calculate the factorial of a double
double factorialdouble(int n)
{
   // Base case: if n is 0, return 1
   if (n == 0)
       return 1;
   else
       // Recursive case: multiply n by the factorial of n - 1
       return n * factorial(n - 1);
}

// Function to calculate x raised to the power of n
double power(double x, int n)
{
   double result = 1.0;
   // Loop n times, multiplying the result by x each time
   for (int i = 0; i < n; i++)
   {
       result *= x;
   }
   // Return the final result
   return result;
}

// Function to calculate the sine of an angle in degrees
double mysin(double angle)
{
   double sine = 0;
   int sign = 1;
   if (angle < -180){
       sine = mysin(-angle);
       int intangle = (int)angle;
       printf("%d\n\n",intangle);
       intangle = intangle % 180;
       angle = (double)intangle;
       // If the angle is a multiple of 180, return 0
       if ((intangle / 180)%2 == 1){
            return sine;

       } else{
            if (sine == 0){
                return sine;
            }else {
                return -sine;
            }
            
       }
   }
   // If the angle is greater than 180 degrees, wrap it around to the range 0 to 180
   if (angle > 180.0)
   {
       int intangle = (int)angle;
       intangle = intangle % 180;
       angle = (double)intangle;
       // If the angle is a multiple of 180, return 0
       if ((intangle / 180)/2 == 0)
       {
           angle = angle * (22.0/7.0) / 180.0;
           // Calculate the sine using the power and factorial functions
           for (int i = 0; i < 5; i++)
           {
               sine += sign * (power(angle, 2 * i + 1) / factorialdouble(2 * i + 1));
               sign *= -1;
           }
           // Return the negative of the sine for angles in the third quadrant
           if (sine == 0){
            return sine;
           } else {
            return -sine;
           }
       }
   }
   // Calculate the sine using the power and factorial functions
   angle = angle * (22.0/7.0) / 180.0;
   for (int i = 0; i < 5; i++)
   {
       sine += sign * (power(angle, 2 * i + 1) / factorialdouble(2 * i + 1));
       sign *= -1;
   }
   // Return the sine
   return sine;
}

// Function to calculate the cosine of an angle in degrees
double mycos(double angle)
{
   double cosine = 0;
   int sign = 1;
   // Calculate the cosine using the sine function
   cosine = sqrt(1 - power(mysin(angle), 2));
   // Return the cosine
   return cosine;
}

// Function to calculate the tangent of an angle in degrees
double mytan(double angle)
{
   // Calculate the tangent by dividing the sine by the cosine
   return mysin(angle) / mycos(angle);
}

// // Function to calculate the arcsine of a value in the range -1 to 1
// double myarcsin(double angle)
// {
//    double radian = 0;
//    int sign = 1;
//    // Calculate the arcsine using the power and factorial functions
//    for (int i = 0; i < 10; i += 2)
//    {
//        radian += sign * power(angle,2*i+1) / factorial(2*i+1);
//        sign *= -1;
//    }
//    // Convert the radian value to degrees
//    double degree = radian * (180.0/(22.0/7.0));
//    // Return the arcsine
//    return degree;
// }

double nCr(double n, double r) {
    if (n >= r && n >= 0 && r >= 0) {
        double numerator = 1;
        double denominator = 1;
        for (int i = 0; i < r; ++i) {
            numerator *= (n - i);
            denominator *= (r - i);
        }
        return numerator / denominator;
    } else {
        printf("Error: Invalid input for nCr\n");
        return NAN;
    }
}

// Function to calculate the arcsine of a value in the range -1 to 1
double myarcsin(double angle)
{
   double radian = 0;
   // Calculate the arcsine using the power and factorial functions
   for (int i = 0; i < 10; i += 2)
   {
       radian += (nCr(2*i,i)*power(angle,2*i+1))/(power(4.0,i)*(2*i+1));
   }
   // Convert the radian value to degrees
   double degree = radian * (180.0/(22.0/7.0));
   // Return the arcsine
   return degree;
}

// Function to calculate the arccosine of a value in the range -1 to 1
// double myarccos(double angle)
// {
//    double radian = 0;
//    int sign = 1;
//    // Calculate the arccosine using the power and factorial functions
//    for (int i = 0; i < 10; i += 2)
//    {
//        radian += sign * power(angle,) / (i+1);
//        powerval *=  x * x;
//        sign *= -1;
//    }
//    // Convert the radian value to degrees
//    double degree = radian * (180.0/(22.0/7.0));
//    // Return the arccosine
//    return degree;
// }

double myarccos(double value)
{
    double sineval = sqrt(1 - value*value);
    double angle = myarcsin(sineval);
    return angle;
}

// // Function to calculate the arctangent of a value
// double myarctan(double value)
// {
//    double radian = 0;
//    double sign = 1;
//    //Calculate the arctan value
//    for (int i = 0; i < 20; i++)
//    {
//        radian += sign * (power(value, (2 * i + 1)) / (2 * i + 1));
//        sign = -sign;
//    }
//    // Convert the radian value to degrees
//    double degree = radian * (180.0/(22.0/7.0));
//    // Return the arctan value
//    return degree;
// }

// Function to calculate the arctangent of a value
double myarctan(double value)
{
   double sineval = value / sqrt(1 + value*value);
   if (sineval == 1)
      return 45;
   else if (sineval == -1)
      return -45;
   else
   {
      double angle = myarcsin(sineval);
      return angle;
   }
}

int main(){
    double user;
    scanf("%lf",&user);
    printf("%lf",mysin(user));
    if(-1200 < -180){
        printf("True");
    }
}