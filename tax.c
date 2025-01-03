#include <stdio.h>
int main()
{
    float balance, monthly_contro, avg_rrate, inflation_rate;
    float intrest = 0;
    int years;
    float total_intrest = 0;
    printf("Enter your initial balance\n");
    scanf("%f", &balance);
    printf("Enter your monthly contribution\n");
    scanf("%f", &monthly_contro);
    printf("Enter your annual return rate\n");
    scanf("%f", &avg_rrate);
    printf("Enter your  inflation rate\n");
    scanf("%f", &inflation_rate);
    printf("Enter total years\n");
    scanf("%d", &years);
    int month = 0;
    float temp = balance;
    float adj_r_rate = (1 + avg_rrate) / (1 + inflation_rate) - 1;
    // Monthly
    float monthly_adj_rate = adj_r_rate / 12;
    for (month = 1; month <= years * 12; month++)
    {
        float intrest = balance * monthly_adj_rate;
        balance = balance + intrest + monthly_contro;
        printf("%d  %.2f %.2f\n", month, intrest, balance);
        total_intrest = total_intrest + intrest;
    }
    printf("Your total balance after %d years is %.2f\n", years, balance);
    printf("Total intrest after %d years is %.2f\n", years, total_intrest);
    return 0;
}