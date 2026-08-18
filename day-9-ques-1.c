/*Q17: Write a program to find the roots of a quadratic equation and categorize them.*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, root1, root2;
    printf("enter your three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;
    root1 = (-b + sqrt(d)) / (2 * a);
    root2 = (-b - sqrt(d)) / (2 * a);
    printf("the two roots are %d and %d", root1, root2);
    if (d > 0){
        printf("The roots are real and different");
    }else if (d == 0){
        printf("The roots are real and same");
    }else{
        printf("The roots are complex");
    }
    return 0;
}
