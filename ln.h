double logln(double x) {
    double result = 0.0;
    double term = x - 1; // First term in the series
    int sign = 1; // Sign of the terms alternates
    int n = 1;

    while (n <= 10) { // We choose to use 10 terms
        result += sign * term / n;
        term *= (x - 1); // Update the term for the next iteration
        sign *= -1; // Change the sign for the next term
        n++;
    }

    return result;
}