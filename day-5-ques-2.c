/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/
#include <stdio.h>

int main()
{
    int timeinseconds;
    printf("enter the time in seconds : ");
    scanf("%d", &timeinseconds);
    printf("the time in hours, minutes and seconds is : %d:%d:%d", timeinseconds/3600, (timeinseconds%3600)/60, timeinseconds%60);

     return 0;
}
