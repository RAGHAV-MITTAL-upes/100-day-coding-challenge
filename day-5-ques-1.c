/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.*/
// compound interest = amount - principal
// amount = p *(1 +r/100)^t
#include <stdio.h>
#include <math.h>

int main()
{
    double principal, rate, time;
    printf("enter the principal : ");
    scanf("%lf", &principal);
    printf("enter the rate : ");
    scanf("%lf", &rate);
    printf("enter the time : ");
    scanf("%lf", &time);

    double amount = principal*pow((1+rate/100), time);
    double compound_interest = principal + amount;
    printf("compound_interest= %.2lf\n", compound_interest);
    
     return 0;
}
