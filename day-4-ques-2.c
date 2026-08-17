/*Q8: Write a program to find and display the sum of the first n natural numbers.*/
#include <stdio.h>

int main()
{
    int num1;
    printf("enter the number : ");
    scanf("%d", &num1);
    printf("the number is : %d", num1);
     int sum = num1 * (num1+1)/2;
     printf("the sum of first %d natural numbers is : %d", num1, sum);



     return 0;
}
