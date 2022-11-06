#include <stdio.h>
#include <math.h>


int main () {
    //create variables for a, b and c
    //create variables for the two roots of the equation
    float a,b,c;
    float x1,x2;

    //prompt to enter value for a,b and c
    printf("Enter the following: \nThe coefficient of X^2(a)>>> ");
    scanf("%f", &a);

    printf("\nThe coefficient of Y(b)>>> ");
    scanf("%f", &b);

    printf("\nThe constant (c)>>> ");
    scanf("%f", &c);
     
    //calculate the roots x1 and x2 given the formula
    x1 = (-b + sqrt(pow(b, 2) - 4*a*c))/(2*a);
    x2 = (-b - sqrt(pow(b, 2) - 4*a*c))/(2*a);

    //print the solutions (roots) to the equation
    printf("\nThe solutions to the quadratic equation are: ");
    printf("%0.2f and " "%0.2f", x1, x2 );

    return 0;
}