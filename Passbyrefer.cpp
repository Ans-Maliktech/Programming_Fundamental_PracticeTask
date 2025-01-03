#include <stdio.h>
#include <math.h>
void FindArmstrongNumber(int &a, int &result)
{
    int temp = a, sum = 0, digits = 0;
    int num = a;
    while (num != 0)
    {
        digits++;
        num /= 10;
    }
    temp = a;
    while (temp > 0)
    {
        int digit = temp % 10;     // Get the last digit
        sum += pow(digit, digits); // Raise it to the power of the number of digits and add to sum
        temp /= 10;                // Remove the last digit
    }
    if (sum == a)
    {
        result = 1; // 1 for Yes
    }
    else
    {
        result = 2; // 2 for No
    }
}

int main()
{
    int number;
    int result;
    printf("Enter your number\n");
    scanf("%d", &number);
    FindArmstrongNumber(number, result);

    if (result == 1)
    {
        printf("ArmStrong number\n");
    }
    else
    {
        printf("Not an ArmStrong number\n");
    }

    return 0;
}
