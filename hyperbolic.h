#include "square_root.h"  
#include "ln.h"
//#include "exponential.h"
#include "exp.h"

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