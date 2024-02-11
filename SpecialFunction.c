#include <stdio.h>

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
        return 0;
    }
}

double nPr(double n, double r) {
    if (n >= r && n >= 0 && r >= 0) {
        double result = 1;
        for (int i = 0; i < r; ++i) {
            result *= (n - i);
        }
        return result;
    } else {
        printf("Error: Invalid input for nPr\n");
        return 0;
    }
}
double squareRoot(double x) {
    if (x == 0) return 0;

    double precision = 0.00001;
    double guess = x / 2.0; // Initial guess can be any value

    while (1) {
        double new_guess = (guess + x / guess) / 2.0;
        if( ((guess - new_guess) < precision)&& ((new_guess - guess) < precision)) {
            break;
        }
        guess = new_guess;
    }

    return guess;
}

   double cubeRoot(double num) 
   { double epsilon = 0.00001; // Define a small value for precision
    double guess = num / 3; // Initial guess

    // Iteratively improve the guess until it converges
    while (1) {
        double prevGuess = guess;
        guess = (2 * guess + num / (guess * guess)) / 3; // Newton's method for cubic root
        if (prevGuess - guess < epsilon && guess - prevGuess < epsilon) {
            break; // Convergence achieved
        }
    }

    return guess;

}
double factorial(double x) {
    if (x >= 0) {
        double result = 1;
        for (int i = 1; i <= x; ++i) {
            result *= i;
        }
        return result;
    } else {
        printf("Error: Factorial of a negative number\n");
        return 0;
    }
}

double modulo(double dividend, double divisor) {
    if (divisor != 0) {
        while (dividend >= divisor) {
        dividend -= divisor;
    }
    return dividend;
    } else {
        printf("Error: Modulo by zero\n");
        return 0;
    }
}

double absolute(double num) {
    if (num < 0) {
        return -num;
    } else {
        return num;
    }
}
