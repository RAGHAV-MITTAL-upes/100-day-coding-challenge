/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number from (1-300): ");
    scanf("%d", &num);
    if (num >= 1 && num <= 100)
    {
        printf("Your electricity bill is %d.\n", num * 5);
    }
    else if (num >= 101 && num <= 200)
    {
        printf("Your electricity bill is %d.\n", num * 7);
    }
    else if (num >= 201 && num <= 300)
    {
        printf("Your electricity bill is %d.\n", num * 10);
    }
    else if (num > 300)
    {
        printf("Your electricity bill is %d.\n", num * 12);
    }
    else
    {
        printf("Invalid input. Please enter a valid number.\n");
    }
    return 0;
}
