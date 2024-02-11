#include "exp.h"
#include "arithmatic.h"
#include "ln.h"

// Function definition for sinh
double getsinh(double num) {  
    return (exponential(num) - exponential(-num)) / 2.0;  
}

// Function definition for cosh
double getcosh(double num) {  
    return (exponential(num) + exponential(-num)) / 2.0;  
}

// Function definition for tanh
double gettanh(double num) {  
    return (exponential(num) - exponential(-num)) / (exponential(num) + exponential(-num));  
}

// Function definition for asinh
double getasinh(double num) {  
    return logln(num + squareRoot(num * num + 1)); 
}

// Function definition for acosh
double getacosh(double num) {  
    return logln(num + squareRoot(num * num - 1));  
}

// Function definition for atanh
double getatanh(double num) {  
    return 0.5 * logln((1 + num) / (1 - num));  
}