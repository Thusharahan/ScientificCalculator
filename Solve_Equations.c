#include<stdio.h>
#include"linear.h"
#include"cubic.h"

int main()
{
    int degree;

    printf("\nEnter degree value : ");
    scanf("%d", &degree);

    switch(degree)
    {
        case 1:
            linear();
            break;
        
        case 2:
            quadratic();
            break;

        case 3:
            cubic();
            break;
        
        default:
            printf("Invalid Input for Degree Value");
    }

    return 0;
}