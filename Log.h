#include "Pow.h"

double calculate_custom_log_with_input(double *number, double *base) {
    printf("Enter the number: ");
    scanf("%lf", number);

    printf("Enter the base (or enter 'e' for Euler's number): ");
    char base_input[10]; // Buffer to store user input for base
    scanf("%s", base_input);

    // Check if the user input is 'e' for Euler's number
    if (base_input[0] == 'e' && base_input[1] == '\0') {
        *base = 2.71828; // Assign Euler's number
    } else {
        sscanf(base_input, "%lf", base); // Convert user input to double
    }

    // Calculate the custom logarithm
    double result = 0.0;
    // Define the range where the result lies
    double low, high, precision;

    // Set range and precision based on whether the number is between 0 and 1 or greater than 1
    if (*number < 1) {
        low = -1/(*number); // Lower bound becomes the number itself
        high = 0.0;   // Upper bound is 1
        precision = 0.001; // Define precision level for numbers between 0 and 1
    } else {
        low = 0.0;    // Lower bound is 0
        high = *number; // Upper bound is the number itself
        precision = 0.001; // Define precision level for numbers greater than 1
    }

    // If the base is less than or equal to 1, return NaN
    if (*base <= 1 || *number <= 0) {
        printf("Invalid log ");
        return 1; // invalid
    }

    // If the number is 1, return 0
    if (*number == 1) {
        return 0.0;
    }

    // Perform bisection until the range is small enough
    while ((high - low) > precision) {
        // Calculate the midpoint
        double mid = (low + high) / 2.0;

        // If the result at midpoint is greater than or equal to the desired number, adjust the high
        if (pow(*base, mid) >= *number) {
            high = mid;
        } 
        // Otherwise, adjust the low
        else {
            low = mid;
        }
    }

    // The result lies within the remaining range, take the average
    result = (low + high) / 2.0;

    return result;
}
