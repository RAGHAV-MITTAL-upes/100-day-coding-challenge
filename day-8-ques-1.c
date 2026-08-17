/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/
#include <stdio.h>

int main()
{
    char ch;
    printf("enter your character : ");
    scanf(" %c", &ch);
    printf("you entered: %c", ch);
    if (ch >= 'A' && ch <= 'Z'){
        printf("The character is an uppercase letter");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("The character is a lowercase letter");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("The character is a digit");
    }
    else
    {
        printf("The character is a special character");
    }
     return 0;
}
