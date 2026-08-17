/*Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.*/
#include <stdio.h>

int main()
{
    int year;
    printf("enter the year : ");
    scanf("%d", &year);
    if (year%100 ==0)
    {
        if (year%400 == 0)
        {
            printf("year %d is a leap year.\n", year);
        }else
        {
            printf("year %d is not a leap year.\n", year);
        }
        
        
    }else
    {
        if (year%4 == 0)
        {
            printf("year %d is a leap year.\n", year);
        }else
        {
            printf("year %d is not a leap year.\n", year);
        }
        
        
    }
    
    
     return 0;
}
