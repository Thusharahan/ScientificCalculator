#include <stdio.h>

// Arithmetic functions
// double add(double a, double b) {
//     return a + b;
// }

// double subtract(double a, double b) {
//     return a - b;
// }

// double multiply(double a, double b) {
//     return a * b;
// }

// double divide(double a, double b) {
//     if (b != 0) {
//         return a / b;
//     } else {
//         printf("Error: Division by zero\n");
//         return 0; // Not a Number
//     }
// }

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
   { 
    double epsilon = 0.00001; // Define a small value for precision
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

double power(double base, double exponent) {
    double result = 1.0;

    if (exponent >= 0) {
        for (int i = 0; i < exponent; ++i) {
            result *= base;
        }
    } else {
        for (int i = 0; i > exponent; --i) {
            result /= base;
        }
    }

    return result;
}