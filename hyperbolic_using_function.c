#include <stdio.h>
#include "ln.h"
//#include "exponential.h"
#include "exp.h"

// Function declarations for hyperbolic functions
double get_sinh(double num);  
double get_cosh(double num);  
double get_tanh(double num);  
double get_asinh(double num);  
double get_acosh(double num);  
double get_atanh(double num);  

int main() {
    double num;
    int operation;
    printf("What kind of operation you want\n 1.sinh\n 2.cosh\n 3.tanh\n 4.asinh\n 5.acosh\n 6.atanh\n");
    printf("Enter corresponding function number: ");
    scanf("%d", &operation);

    if (operation < 1 || operation > 6) {
        printf("Invalid operation number. Please enter a number between 1 and 6.\n");
        return 1; // Exit with an error code
    }

    // If the operation number is valid, ask for the number input
    printf("Enter a number : ");
    scanf("%lf", &num);

    // Switch statement to execute the selected operation
    switch (operation) {
        case 1: {
            double sinh_result = get_sinh(num);  
            printf("Sinh of %.2lf is %.2lf\n", num, sinh_result);
            break;
        }
        case 2: {
            double cosh_result = get_cosh(num);  
            printf("Cosh of %.2lf is %.2lf\n", num, cosh_result);
            break;
        }
        case 3: {
            double tanh_result = get_tanh(num);  
            printf("Tanh of %.2lf is %.2lf\n", num, tanh_result);
            break;
        }
        case 4: {
            double asinh_result = get_asinh(num);  
            printf("Arc Sinh of %.2lf is %.2lf\n", num, asinh_result);
            break;
        }
        case 5: {
            if (num < 0) {
                printf("Math Error!");
            } else {
                double acosh_result = get_acosh(num);  
                printf("Arc Cosh of %.2lf is %.2lf\n", num, acosh_result);
            }
            break;
        }
        case 6: {
            // Check if the input is within the valid range for atanh
            if (num < 1 && num > -1) {
                double atanh_result = get_atanh(num);  
                printf("Arc Tanh of %.2lf is %.2lf\n", num, atanh_result);
            } else {
                printf("Math Error: Input must be between -1 and 1 for atanh.\n");
            }
            break;
        }
    }

    return 0;
}

// Function definition for sinh
double get_sinh(double num) {  
    return (exponential(num) - exponential(-num)) / 2.0;  
}

// Function definition for cosh
double get_cosh(double num) {  
    return (exponential(num) + exponential(-num)) / 2.0;  
}

// Function definition for tanh
double get_tanh(double num) {  
    return (exponential(num) - exponential(-num)) / (exponential(num) + exponential(-num));  
}

// Function definition for asinh
double get_asinh(double num) {  
    return logarithm(num + squareRoot(num * num + 1)); 
}

// Function definition for acosh
double get_acosh(double num) {  
    return logarithm(num + squareRoot(num * num - 1));  
}

// Function definition for atanh
double get_atanh(double num) {  
    return 0.5 * logarithm((1 + num) / (1 - num));  
}
