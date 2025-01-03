#include <stdio.h>
int main()
{
    int number;
    int reminder;
    int divisor = 1;
    printf("Enter your number\n");
    scanf("%d", &number);
    int temp = number;
    if (number == 0)
    {
        printf("ZERO\n");
        return 0; // Terminate the program here as per requirements
    }
    else
    {
        while (number / divisor >= 10)
        {
            divisor = divisor * 10; // To get the suitable divisor for any kind of number using this loop
        }

        while (divisor > 0)
        {
            int digit = temp / divisor; // to get the first digit of the number
            temp = temp % divisor;      // to terminate the first digit
            divisor = divisor / 10;     // We have to delete the divisor as well

            if (digit == 0)
            {
                printf("Zero ");
            }
            else if (digit == 1)
            {
                printf("One ");
            }
            else if (digit == 2)
            {
                printf("Two ");
            }
            else if (digit == 3)
            {
                printf("Three ");
            }
            else if (digit == 4)
            {
                printf("Four ");
            }
            else if (digit == 5)
            {
                printf("Five ");
            }
            else if (digit == 6)
            {
                printf("Six ");
            }
            else if (digit == 7)
            {
                printf("Seven ");
            }
            else if (digit == 8)
            {
                printf("Eight ");
            }
            else if (digit == 9)
            {
                printf("Nine ");
            }
        }
    }
    return 0;
}