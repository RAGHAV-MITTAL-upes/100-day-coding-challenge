/*Q4: Write a program to calculate the area and circumference of a circle given its radius.*/
#include <stdio.h>

int main()
{
    float r, c, a;
    printf("enter the radius of circle : ");
    scanf("%f", &r);
    c = 2 * 3.142857 *r;
    a = 3.142857 * r * r;
    printf("circumference of the circle =%.2f\n ", c);
    printf("area of the circle =%.2f\n ", a);

     return 0;
}
