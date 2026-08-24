/*Q28: Write a program to print the product of even numbers from 1 to n.*/
#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 2 ; i <=n * 2; i+= 2)
    {
        printf("%d\n", i);
        sum += i;
    }
    printf("Sum of first %d even numbers: %d\n", n, sum);
    return 0;
}
