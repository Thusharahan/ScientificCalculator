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


double factorial(int x) {
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