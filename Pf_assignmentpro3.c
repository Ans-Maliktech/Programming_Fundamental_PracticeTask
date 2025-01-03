#include <stdio.h>
// ANS ABDULLAH MALIK
void input(float a[][365])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 365; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }
}
void lowest_temp(float a[][365], float b[])
{
    int count = 0, f = 0;
    float lowest = a[0][0];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 365; j++)
        {
            if (a[i][j] > lowest)
            {
                b[i] = a[i][j];
                count++;
                if (count == 10)
                {
                    break;
                    f = 1;
                }
            }
        }
        if (f == 1)
            break;
    }
}
int less_than_0(float a[][365])
{
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 365; j++)
        {
            if (a[i][j] < 0)
            {
                count++;
                break;
            }
        }
    }
    return count;
}
int searchValue(float a[][365], float b)
{
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 365; j++)
        {
            if (a[i][j] == b)
            {
                count++;
                break;
            }
        }
    }
    if (count >= 5)
        return 1;
    else
        return 0;
}
void average_temp(float a[][365], float b[])
{
    float sum;
    for (int i = 0; i < 10; i++)
    {
        sum = 0;
        for (int j = 0; j < 365; j++)
        {
            sum += a[i][j];
        }
        b[i] = sum / 365;
    }
}
void display_first_last(float a[][365])
{
    printf("Value for 1st and last day for each year is :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%2.f and %2.f", a[i][0], a[i][365]);
    }
}
void display_odd(float a[][365])
{
    for (int i = 9; i >= 0; i -= 2)
    {
        for (int j = 364; j >= 0; j -= 2)
        {
            printf("%2.f", a[i][j]);
        }
    }
    printf("\n");
}
void output(float a[][365])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 365; j++)
        {
            printf("%f", a[i][j]);
        }
    }
}
int main()
{
    float Temperature[10][365];
    float lowest[10];
    input(Temperature);
    lowest_temp(Temperature, lowest);
    int count = less_than_0(Temperature);
    printf("Number of temperature less than 0 is %d\n", count);
    float search_value;
    printf("Enter value to search in array\n");
    scanf("%f", &search_value);
    int Return = searchValue(Temperature, search_value);
    if (Return == 0)
        printf("Respective value is found in more than 5 years\n");
    else
        printf("Value is not founded for more than 5 years\n");
    float average_temps[10];
    average_temp(Temperature, average_temps);
    printf("Your average values for 10 years are :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f\n", average_temps[i]);
    }
    display_first_last(Temperature);
    display_odd(Temperature);
    output(Temperature);
}