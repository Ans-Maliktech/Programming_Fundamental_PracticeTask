#include <stdio.h>
int main()
{
    int AGI, child;
    float tax, total_tax;
    printf("tell me about your adjusted gross income (AGI)");
    scanf("%d", &AGI);
    printf("how many childrens you have");
    scanf("%d", &child);
    if (AGI >= 0 && AGI <= 19900)
    {
        tax = 0.10 * 19900;
    }
    else if (AGI >= 19901 && AGI <= 81050)
    {
        tax = 1990 + (AGI - 19901) * 0.12;
    }
    else if (AGI >= 81051 && AGI <= 172750)
    {
        tax = 9328 + (AGI - 81051) * 0.22;
    }
    else if (AGI >= 172751 && AGI <= 329850)
    {
        tax = 29502 + (AGI - 172751) * 0.24;
    }
    else if (AGI >= 329851 && AGI <= 418850)
    {
        tax = 67206 + (AGI - 329851) * 0.32;
    }
    else if (AGI >= 418851 && AGI <= 628300)
    {
        tax = 95686 + (AGI - 418850) * 0.35;
    }
    else if (AGI >= 628301)
    {
        tax = 168933.50 + (AGI - 628301) * 0.37;
    }
    total_tax = tax - (child * 2000);
    if (total_tax < 0)
    {
        total_tax = 0;
    }
    else
    {
        total_tax = total_tax;
    }
    printf("total tax is %.2f", total_tax);
    return 0;
}