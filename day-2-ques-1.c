/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/
#include <stdio.h>

int main()
{
    float L, B, a, p;
    printf("enter the length of the rectangle : ");
    scanf("%f\n", &L);
    printf("enter the breadth of the rectangle : ");
    scanf("%f\n", &B);
    a = L * B;
    p = 2 * (L + B);
    printf("area of rectangle with %f length and %f breadth = %.2f\n", L, B, a);
    printf("perimeter of rectangle with %f length and %f breadth = %.2f\n", L, B, p);


     return 0;
}
