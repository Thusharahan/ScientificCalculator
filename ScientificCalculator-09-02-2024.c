//Adding required libraries
#include <stdio.h>
#include "trigonometry.h"
#include "arithmatic.h"
#include "specialfunction.h"
#include "ln.h"
#include "Log.h"
#include "exp.h"
#include "cubic.h"
#include "hyperbolic.h"
#include "quadratic.h"
#include "linear.h"


//Define varibles to use the address of them.
int n;
double f;

//For trignometric functions
void Trignometry(){
    int *choise = &n;   //Assigning an address for the choise pointer
    double *num = &f;    //Assigning an address for the num pointer
    char term;
    printf("Enter the type of trignometric operation you want to perform:");    //Prompt the user for getting the choise
    printf("\n1. Sin\n2. Cos\n3. Tan\n4. ASin\n5. ACos\n6. ATan\nChoise: ");
    while(1){
        if(scanf("%d%c",choise,&term) != 2 || term != '\n' || (*choise > 6 || *choise < 0)){      //Checks whether there is an enter key pressed after entering a number or not.
            printf("Entered choise is not valid !!!!\nPlease enter a valid choise: ");  //Notify user the input is wrong
            while(getchar() != '\n');
            continue;
        }
        else {
            printf("Enter the number: ");            //Prompt user for input of second number
        }
        if(scanf("%lf%c",num,&term) != 2 || term != '\n'){      //Checks whether there is an enter key pressed after entering a number or not.
            printf("Entered number is not valid !!!!\nPlease enter a valid number: ");
            while(getchar() != '\n');
            continue;
        }
        else{
            break;
        }
    }
    switch (*choise) {
        case 1:
            printf("Sin(%.2lf) = %.4lf",*num,mysin(*num));    //Find sin with defined function
            break;

        case 2:  
            printf("Cos(%.2lf) = %.4lf",*num,mycos(*num));      //Find cos with math library function
            break;

        case 3:  
            printf("Tan(%.2lf) = %.4lf",*num,mytan(*num));        //Find tan with math library function
            break;
            
        case 4:
            if(*num > 1.0  || *num< -1.0 ) {     //If the entered value is out of range
                printf("Math ERROR.");                           //If value is out of range print error message
                break;
            } else{
                printf("Arcsin(%.2lf) = %.4lf",*num,myarcsin(*num));    //Find arcsin with math library function
                break;
            }
            
        case 5: 
            if(*num > 1.0  || *num < -1.0) {
                printf("Math ERROR.");                            //If value is out of range print error message
                break;
            } else{
                printf("Arccos(%.2lf) = %.4lf",*num,myarccos(*num));       //Find arccos with math library function
                break;
            } 
            
        case 6: 
            printf("Arctan(%.2lf) = %.4lf",*num,myarctan(*num));       //Find arctan with math library function
            break;
        }
    
}

void Hyperbolic(){
    int *choise = &n;
    double *num = &f;
    char term;
    printf("Enter the type of Hyperbolic operation you want to perform:");  //Prompt user for choise input
    printf("\n1. Sinh\n2. Cosh\n3. Tanh\n4. ASinh\n5. ACosh\n6. ATanh\nChoise: ");
    while(1){
        if(scanf("%d%c",choise,&term) != 2 || term != '\n' || (*choise > 6 && *choise < 0)){      //Checks whether there is an enter key pressed after entering a number or not.
            printf("Entered choise is not valid !!!!\nPlease enter a valid choise: ");
            while(getchar() != '\n');
            continue;
        }
        else {
            printf("Enter the number: ");                   //Prompt user for input of number
        }
        if(scanf("%lf%c",num,&term) != 2 || term != '\n'){      //Checks whether there is an enter key pressed after entering a number or not.
            printf("Entered number is not valid !!!!\nPlease enter a valid number: ");
            while(getchar() != '\n');
            continue;
        }
        else{
            break;
        }
    }
    switch (*choise) {
        case 1:
            printf("Sinh(%.2lf) = %.4lf",*num,getsinh(*num));          //Find sinh with math library function
            break;

        case 2:  
            printf("Cosh(%.2lf) = %.4lf",*num,getcosh(*num));             //Find cosh with math library function
            break;

        case 3:  
            printf("Tanh(%.2lf) = %.4lf",*num,gettanh(*num));             //Call mytanh function
            break;
            
        case 4:    
            printf("Arcsinh(%.2lf) = %.4lf",*num,getasinh(*num));             //Find asinh with math library function
            break;
            
        case 5: 
            printf("Arccosh(%.2lf) = %.4lf",*num,getacosh(*num));             //Find acos with math library function
            break;
            
        case 6: 
            printf("Arctanh(%.2lf) = %.4lf",*num,gettanh(*num));             //Find atanh with math library function
            break;
        }
    
}

void Arithmetic(){
    int *choise = &n;
    double *num = &f;
    char term;
    printf("Enter the type of Arithmetic operation you want to perform:");  //Prompt the user for input choise
    printf("\n1. Addition\n2. Subraction\n3. Multiplication\n4. Division\n5. Exponential\n6. Power\n7. Square Root\n8. Cube Root\nChoise: ");
    while(1){
        if(scanf("%d%c",choise,&term) != 2 || term != '\n' || (*choise > 8 && *choise < 0)){      //Checks whether there is an enter key pressed after entering a number or not.
            printf("Entered choise is not valid !!!!\nPlease enter a valid choise: ");
            while(getchar() != '\n');
            continue;
        }
        else if(*choise == 5 || *choise == 7 || *choise == 8){
            printf("Enter the number: ");
            if(scanf("%lf%c",num,&term) != 2 || term != '\n'){      //Checks whether there is an enter key pressed after entering a number or not.
            printf("Entered number is not valid !!!!\nPlease enter a valid number: ");
            while(getchar() != '\n');
            continue;
            }
            else{
                break;
            }
        } else {
            printf("Enter the first number: ");            //Prompt user for input of second number
        }
        if(scanf("%lf%c",num,&term) != 2 || term != '\n'){      //Checks whether there is an enter key pressed after entering a number or not.
            printf("Entered first number is not valid !!!!\nPlease enter a valid number: ");
            while(getchar() != '\n');
            continue;
        }
        else{
            printf("Enter the second number: ");
        }
        if(scanf("%lf%c",num+1,&term) != 2 || term != '\n'){      //Checks whether there is an enter key pressed after entering a number or not.
            printf("Entered second number is not valid !!!!\nPlease enter a valid number: ");
            while(getchar() != '\n');
            continue;
        }
        else{
            break;
        }
    }
    switch (*choise) {
        case 1:
            *(num+2) = *num + *(num+1);                        //Addition
            printf("%.2lf + %.2lf = %.2lf",*num,*(num+1),*(num+2));
            break;

        case 2:  
            *(num+2) = *num - *(num+1);                         //Subtraction
            printf("%.2lf - %.2lf = %.2lf",*num,*(num+1),*(num+2));
            break;

        case 3:  
            *(num+2) = *num * *(num+1);                          //Multiplication
            printf("%.2lf x %.2lf = %.2lf",*num,*(num+1),*(num+2));
            break;
            
        case 4:    
            *(num+2) = *num / *(num+1);                            //Division
            printf("%.2lf / %.2lf = %.2lf",*num,*(num+1),*(num+2));
            break;
            
        case 5: 
            *(num+1) = exponential(*num);                                   //Exponentiation
            printf("exp(%.2lf) = %.2lf",*num,*(num+1));
            break;
            
        case 6: 
            *(num+2) = power(*num, *(num+1));                        //Power
            printf("%.2lf ^ %.2lf = %.2lf",*num,*(num+1),*(num+2));
            break;
        
        case 7:
            *(num+1) = squareRoot(*num);                                  //Square root
            printf("sqrt(%.2lf) = %.2lf",*num,*(num+1));
            break;
        case 8: 
            *(num+1) = cubeRoot(*num);                                    //Cube root
            printf("cbrt(%.2lf) = %.2lf",*num,*(num+1));
            break;

        }
    
}

void LogandExponential(){
    int *choise = &n;
    double *num = &f;
    char term;
    printf("Enter the type of Hyperbolic operation you want to perform:");  //Prompt user for choise input
    printf("\n1. Natural Logarithm(ln)\n2. Base-10 Logarithm\n3. Exponential Function\nChoise: ");
    while(1){
        if(scanf("%d%c",choise,&term) != 2 || term != '\n' || (*choise > 3 && *choise < 0)){      //Checks whether there is an enter key pressed after entering a number or not.
            printf("Entered choise is not valid !!!!\nPlease enter a valid choise: ");
            while(getchar() != '\n');
            continue;
        }
        else {
            printf("Enter the number: ");            //Prompt user for input of second number
        }
        if(scanf("%lf%c",num,&term) != 2 || term != '\n'){      //Checks whether there is an enter key pressed after entering a number or not.
            printf("Entered number is not valid !!!!\nPlease enter a valid number: ");
            while(getchar() != '\n');
            continue;
        }
        else{
            break;
        }
    }
    switch (*choise) {
        case 1:
            printf("ln(%.2lf) = %.4lf",*num,logln(*num));              //Natural logarithm
            break;

        case 2:  
            printf("log10(%.2lf) = %.4lf",*num,mylog(*num,10));          //Base-10 logarithm
            break;

        case 3:  
            printf("exp(%.2lf) = %.4lf",*num,exponential(*num));                 //Exponential function
            break;
    }
}

void Polynomial(){
    int *choise = &n;
    double *num = &f;
    char term;
    printf("Enter the type of Hyperbolic operation you want to perform:");    //Prompt user for choise input
    printf("\n1. ax+b= 0 \n2. ax2 + bx + c = 0\n3. ax3 + bx2 + cx + d = 0\nChoise: ");
    
    switch (*choise) {
        case 1:
           linear(); //Call the function to find roots of quadratic equation
            break;

        case 2:  
            quadratic();  //Call the function to find roots of cubic equation
            break;
        
         case 3:  
           cubic(); //Call the function to find roots of cubic equation
            break;
    }
}

void Others(){
    int *ptr = &n;
    char term;
    printf("Enter the type of operation you want to perform:");  //Prompt user for choise input
    printf("\n1. Absolute value\n2. Factorial\n3. Modulos\n4. nCr\n5. nPr\nChoise: ");
    while(1){
        if(scanf("%d%c",ptr,&term) != 2 || term != '\n' || (*ptr > 3 && *ptr < 0)){      //Checks whether there is an enter key pressed after entering a number or not.
            printf("Entered choise is not valid !!!!\nPlease enter a valid choise: ");
            while(getchar() != '\n');
            continue;
        }
        else if(*ptr == 1 || *ptr == 2){
            printf("Enter the number: ");
            if(scanf("%d%c",ptr+1,&term) != 2 || term != '\n'){      //Checks whether there is an enter key pressed after entering a number or not.
            printf("Entered number is not valid !!!!\nPlease enter a valid number: ");
            while(getchar() != '\n');
            continue;
            }
            else{
                break;
            }
        } else {
            printf("Enter the first number: ");            //Prompt user for input of second number
        }
        if(scanf("%d%c",ptr+1,&term) != 2 || term != '\n'){      //Checks whether there is an enter key pressed after entering a number or not.
            printf("Entered first number is not valid !!!!\nPlease enter a valid number: ");
            while(getchar() != '\n');
            continue;
        }
        else{
            printf("Enter the second number: ");
        }
        if(scanf("%d%c",ptr+2,&term) != 2 || term != '\n'){      //Checks whether there is an enter key pressed after entering a number or not.
            printf("Entered second number is not valid !!!!\nPlease enter a valid number: ");
            while(getchar() != '\n');
            continue;
        }
        else{
            break;
        }
    }
    switch (*ptr) {
        case 1:
            printf("abs(%d) = %d",*(ptr+1),absolute(*(ptr+1)));     //Calling abs function 
            break;

        case 2:  
            printf("Factorial(%d) = %d",*(ptr+1),factorial(*(ptr+1)));  //Calling factorial function
            break;

        case 3: 
            *(ptr+3) = *(ptr+1) % *(ptr+2); 
            printf("Modulos(%d,%d) = %d",*(ptr+1),*(ptr+2),*(ptr+3));         //Calculating modulus
            break;

        case 4:
            printf("result = %.4lf",nCr(*ptr+1,*ptr+2));          //combimation
            break;

        case 5:
            printf("result = %.4lf",nPr(*ptr+1,*ptr+2));          //permutation
            break;

    }
}


int main(){
    int *choise = &n;
    char term;
    printf("Enter the type of trignometric operation you want to perform:");    //Prompt user for choise input
    printf("\n1. Arithmetic\n2. Trignometric\n3. Hyperbolic\n4. Log and exponential\n5. Polynomial Equations\n6. Others\nChoise: ");
    while(1){
        if(scanf("%d%c",choise,&term) != 2 || term != '\n' || (*choise > 6 || *choise < 0)){      //Checks whether there is an enter key pressed after entering a number or not.
            printf("Entered choise is not valid !!!!\nPlease enter a valid choise: ");
            while(getchar() != '\n');
            continue;
        }
        else {
            break;
        }
    }
    switch (*choise) {
        case 1:
            Arithmetic();
            break;
       case 2:
           Trignometry();
           break;
        case 3:
            Hyperbolic();
            break;
        case 4:
            LogandExponential();
            break;
        case 5:
            Polynomial();
            break;
        case 6:
            Others();
            break;
        case 7:
            return 0;
            

    }

    return 0;

}