#include <stdio.h>

int main()
{
    float F, C;
    printf("enter the temp in farenheit : ");
    scanf("%f", &F);
    C=((F-32)*5)/9;
    printf("temp %.2f in farenheit = %.2f centigrade", F, C);

     return 0;
}
