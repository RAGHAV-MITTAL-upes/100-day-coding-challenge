/*Q35: Write a program to print all factors of a given number.*/
#include <stdio.h>

int main()
{
    int number, factor;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Factors of %d are: ", number);
    for (factor = 1; factor <= number; factor++)
    {
        if (number % factor == 0)
        {
            printf("%d ", factor);
        }
    }
    return 0;
}
