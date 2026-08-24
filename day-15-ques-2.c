/*Q30: Write a program to reverse a given number.*/
#include <stdio.h>

int main()
{
    int num, rem, reverse = 0, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    while (num != 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }
    printf("Reverse of %d is: %d\n", n, reverse);
    return 0;
}
