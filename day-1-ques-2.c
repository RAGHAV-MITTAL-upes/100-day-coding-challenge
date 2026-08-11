//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main()
{
    float a, b;
    printf("enter the two numbers : ");
    scanf("%f %f", &a, &b);
    printf("sum = %.2f\n", a + b);
    printf("difference = %.2f\n", a - b);
    printf("product = %.2f\n", a * b);
    if (b != 0)
    {
       printf("quotient = %.2f\n", a / b);
    }else
    {
        printf("it cannot be divided by zero\n");
    }
    
    
     return 0;
}
