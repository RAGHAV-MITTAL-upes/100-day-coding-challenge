/*Q22: Write a program to find profit or loss percentage given cost price and selling price.*/
#include <stdio.h>

int main()
{
    int cp, sp, profit, loss, profit_percent, loss_percent;
    printf("Enter the cost price: ");
    scanf("%d", &cp);
    printf("Enter the selling price: ");
    scanf("%d", &sp);
    profit = sp - cp;
    loss = cp - sp;
    profit_percent = (profit * 100) / cp;
    loss_percent = (loss * 100) / cp;
    if (profit > 0)
    {
        printf("Profit: %d\n", profit);
        printf("Profit Percentage: %d%%\n", profit_percent);
    }
    else if (loss > 0)
    {
        printf("Loss: %d\n", loss);
        printf("Loss Percentage: %d%%\n", loss_percent);
    }
    else
    {
        printf("No profit, no loss.\n");
    }



     return 0;
}
