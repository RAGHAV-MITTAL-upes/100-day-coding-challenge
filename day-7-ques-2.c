/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.*/
#include <stdio.h>

int main()
{
    char ch;
    printf("enter your character : ");
    scanf(" %c", &ch);
    printf("you entered: %c", ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("The character is a vowel");
    }
    else
    {
        printf("The character is not a vowel");
    }
    return 0;
}
