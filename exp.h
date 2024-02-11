double calculateExponential(double *x) {
    double result = 1.0;
    int i;

    printf("Enter a number: ");
    scanf("%lf", x);

    // For positive exponent
    if (*x > 0) {
        for (i = 0; i < *x; i++) {
            result *= 2.71828; // Approximation of Euler's number (e)
        }
    }
    // For negative exponent
    else if (*x < 0) {
        for (i = 0; i > *x; i--) {
            result /= 2.71828; // Approximation of Euler's number (e)
        }
    }
    // If exponent is zero, answer is 1
    // No need to calculate anything, so we return 1 directly
    return result;
}
