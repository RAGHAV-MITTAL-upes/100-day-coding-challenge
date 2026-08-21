/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/
#include <stdio.h>

int main()
{
    int num;
    printf("enter your number of days (1-31): ");
    scanf("%d", &num);
    if (num >= 1 && num <= 5)
    {
        printf("total fine is %d\n", num * 2);
    }else if (num >= 6 && num <= 10)
    {
        printf("total fine is %d\n", num * 4);
    }
    else if (num >= 11 && num <= 30)
    {
        printf("total fine is %d\n", num * 6);
    }else if (num == 31)
    {
        printf("your membership is cancelled.\n");
    }
    else
    {
        printf("Invalid input. Please enter a number from 1 to 31.\n");
    }
    return 0;
}
