#include <stdio.h>
int main()
{
    float temp;
    char type;
    printf("Select C for Farhenhiet to Celcius\nPress F for Celcius to Farhenhiet\n");
    scanf("%c", &type);
    printf("Enter your temperature\n");
    scanf("%f", &temp);
    if (type == 'C')
    {
        float tempC = (temp - 32) / 1.8;
        printf("Temperature is %2.f", tempC);
    }
    else if (type == 'F')
    {
        float tempF = temp * 1.8 + 32;
        printf("Temperature is %2.f",tempF);
    }
    else
    printf("Wrong command Entered\n");
    return 0;
}