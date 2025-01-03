#include <stdio.h>
int main(void)
{
    // initialize 4 variables
    int paycode;
    float total_managers_pay, total_hourlyWorkers_pay, total_commissionWorkers_pay, total_pieceWorker_pay, total_workers_pay, fixed_salary, weekly_pay;
    float hourly_wage, total_hours_worked, weekly_sales, items_produced, pay_per_item;
    while (1)
    {
        printf("Enter employee paycode (1 for Manager, 2 for Hourly, 3 for Commission, 4 for Pieceworker, -1 to end): ");
        scanf("%d", &paycode);

        if (paycode == -1)
        {
            break;
        }

        switch (paycode)
        {
        case 1:
            printf("Enter fixed weekly salary: ");
            scanf("%f", &fixed_salary);
            printf("Enter weekly pay: ");
            scanf("%f", &weekly_pay);
            break;

        case 2:
            printf("Enter hourly wage: ");
            scanf("%f", &hourly_wage);
            printf("Enter total hours worked: ");
            scanf("%f", &total_hours_worked);

            break;

        case 3:
            printf("Enter number of gross weekly sales: ");
            scanf("%f", &weekly_sales);
            printf("Employee weekly pay is: ");
            break;

        case 4:
            printf("Enter the number of items produced: ");
            scanf("%f", &items_produced);
            printf("Enter pay per item: ");
            scanf("%f", &pay_per_item);
            break;
        }
    }
    return 0;
}