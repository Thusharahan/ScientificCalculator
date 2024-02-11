#include "specialfunction.h"
#include "arithmatic.h"

// Function to calculate the sine of an angle in degrees
double mysin(double angle)
{
   double sine = 0;
   int sign = 1;
   // If the angle is greater than 180 degrees, wrap it around to the range 0 to 180
   if (angle > 180.0)
   {
       int intangle = (int)angle;
       int numangle = intangle % 180;
       angle = (double)numangle;
       // If the angle is a multiple of 180, return 0
       if ((intangle % 360)/ 180 == 1)
       {
           angle = angle * (22.0/7.0) / 180.0;
           // Calculate the sine using the power and factorial functions
           for (int i = 0; i < 5; i++)
           {
               sine += sign * (power(angle, 2 * i + 1) / factorial(2 * i + 1));
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
       sine += sign * (power(angle, 2 * i + 1) / factorial(2 * i + 1));
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
   cosine = squareRoot(1 - power(mysin(angle), 2));
   // Return the cosine
   return cosine;
}

// Function to calculate the tangent of an angle in degrees
double mytan(double angle)
{
   // Calculate the tangent by dividing the sine by the cosine
   return mysin(angle) / mycos(angle);
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

double myarccos(double value)
{
    double sineval = squareRoot(1 - value*value);
    double angle = myarcsin(sineval);
    return angle;
}

// Function to calculate the arctangent of a value
double myarctan(double value)
{
   double sineval = value / squareRoot(1 + value*value);
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