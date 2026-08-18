/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/
#include <stdio.h>

int main()
{
    int num;
    printf("enter your marks : ");
    scanf("%d", &num);
    printf("you entered: %d", num);
    if (num >= 90 && num <= 100){
        printf("The grade is A");
    }
        else if (num >= 80 && num < 90)
        {
            printf("The grade is B");
        }else if (num >= 70 && num < 80)
        {
            printf("The grade is C");
        }
        else if (num >= 60 && num < 70)
        {
            printf("The grade is D");
        }
        else if (num >= 50 && num < 60)
        {
            printf("The grade is E");
        }
        else if (num >= 0 && num < 50)
        {
            printf("The grade is F");
        }
        else
        {
            printf("Invalid marks entered");
        }
    return 0;
}
