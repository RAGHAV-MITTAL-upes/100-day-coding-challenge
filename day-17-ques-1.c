/*Q33: Write a program to check if a number is an Armstrong number.*/
#include <stdio.h>

int main()
{
    int n, num1, rem, sum = 0;
    printf("enter a number : ");
    scanf("%d", &n);
    num1 = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    printf("sum of cubes of digits : %d\n", sum);
    if (sum == num1)
    {
        printf("the number is an Armstrong number");
    }
    else
    {
        printf("the number is not an Armstrong number");
    }   
    return 0;
}
