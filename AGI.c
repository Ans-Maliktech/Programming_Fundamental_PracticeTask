#include <stdio.h>
int main()
{
    int AGI;
    float tax, grand_tax;
    int child;
    printf("Enter your Average Gross income\n");
    scanf("%d", &AGI);
    // char children;
    // printf("Do you have any child\nEnter y of yes\n");
    // scanf(" %c",&child);
    // if(child=='y')
    // {
    printf("Enter the number of children\n");
    scanf("%d", &child);
    // }
    if (AGI >= 0 && AGI <= 19900)
    {
        tax = 19900 * 0.10; // Calcuate the intital value
    }
    else if (AGI >= 19901 && AGI <= 81050)
    {
        tax = 1990 + (AGI - 19900) * 0.12; // Keep sabtracting the perivious value as they are already calculuated in the earlier expression
    }
    else if (AGI >= 81051 && AGI <= 172750)
    {
        tax = 9328 + (AGI - 81050) * 0.22;
    }

    else if (AGI >= 172751 && AGI <= 329850)
    {
        tax = 29502 + (AGI - 172750) * 0.24;
    }
    else if (AGI >= 329851 && AGI <= 418850)
    {
        tax = 67206 + (AGI - 329850) * 0.32;
    }
    else if (AGI >= 418850 && AGI <= 628300)
    {
        tax = 95686 + (AGI - 418850) * 0.35;
    }
    else if (AGI >= 628301)
    {
        tax = 168933.50 + (AGI - 628300) * 0.37;
    }
    grand_tax = tax - (child * 2000);
    if (grand_tax < 0)
    {
        grand_tax = 0;
    }
    else
    {
        grand_tax = grand_tax;
    }
    printf("Your tax is %.2f", grand_tax);
    return 0;
}