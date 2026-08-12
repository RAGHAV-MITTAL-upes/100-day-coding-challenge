/*Q6: Write a program to swap two numbers using a third variable.*/
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("enter the first value : ");
    scanf("%d", &num1);
    printf("enter the second value : ");
    scanf("%d", &num2);

    int temp = num1;
    num1 = num2;
    num2 = temp;

    printf("after swapping num1 =%d and num2 = %d\n", num1, num2);
     return 0;
}
