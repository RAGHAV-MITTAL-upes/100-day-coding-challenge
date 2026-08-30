/*Q32: Write a program to check if a number is a palindrome.*/
#include <stdio.h>

int main()
{
    int n;
    printf("enter value of n :");
    scanf("%d", &n);
    int rev=0;
    int copy = n;
    while (n !=0)
    {
        int lastdigit = n %10;
        rev = rev*10 + lastdigit;
        n /= 10;
    }
    printf(rev == copy ? "palindrome number" : "not palindrome number");
     return 0;
}
