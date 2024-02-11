double exponential(double num) {
    double result = 1.0;

    // For positive exponent
    if (num > 0) {
        for (int i = 0; i < num; i++) {
            result *= 2.71828; // Approximation of Euler's number (e)
        }
    }
    // For negative exponent
    else if (num < 0) {
        for (int i = 0; i > num; i--) {
            result /= 2.71828; // Approximation of Euler's number (e)
        }
    }
    // If exponent is zero, answer is 1
    // No need to calculate anything, so we return 1 directly
    return result;
}
