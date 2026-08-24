/*Q29: Write a program to calculate the factorial of a number.*/
#include <stdio.h>

int main()
{
    int n, i, fact =1;
    printf("enter n : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d is: %d\n", n, fact);
    return 0;
}
