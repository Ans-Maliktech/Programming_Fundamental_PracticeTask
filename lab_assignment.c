#include <stdio.h>
#include <string.h>
int main()
{
    char terminal_name[100];
    int Bus_IDs[6];
    int Bus_capacity[6];
    printf("Enter Terminal name\n");
    gets(terminal_name);
    printf("Enter Bus IDs\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &Bus_IDs[i]);
    }
    printf("Enter Bus capacity\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &Bus_capacity[i]);
    }
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        sum += Bus_capacity[i];
    }
    printf("Total capacity for all the buses is %d\n", sum);
    if (terminal_name[0] == 'W' || terminal_name[0] == 'M' || terminal_name[0] == 'D')
        printf("Yes\n");
    else
        printf("NO\n");
    // Consecutive pattren
    int count = 0;
    int countincreasing = 0;
    int countdecreasing = 0;
    int k = 6;
    for (int i = 0; i < 6; i++)
    {

        if (Bus_capacity[i] < Bus_capacity[i + 1])
        {
            countincreasing++;
        }
        if (Bus_capacity[i] > Bus_capacity[i + 1])
            countdecreasing++;
    }
    if (countincreasing == 6 || countdecreasing == 6)
    {
        printf("Consecutive pattren found\n");
    }
    else
        printf("Not found\n");
    int odd, even1, even2;
    int f = 0;
    for (int i = 0; i < 6; i++)
    {
        if (Bus_IDs[i] % 2 != 0)
        {
            odd = Bus_IDs[i];
            if (Bus_IDs[i + 1] % 2 == 0 && Bus_IDs[i - 1] % 2 == 0)
            {
                even2 = Bus_IDs[i + 1];
                even1 = Bus_IDs[i - 1];
                f = 1;
            }
        }
    }
    if (f != 0)
        printf("%d %d %d", even1, odd, even2);
    else
        printf("No such pattren found\n");
    int count1;
    int countno = 0;
    for (int i = 0; i < 6; i++)
    {
        count1 = 0;
        if (Bus_IDs[i] >= 5 && Bus_IDs[i] <= 10)
        {
            for (int j = 0; j < 6; j++)
            {
                if (Bus_IDs[i] == Bus_IDs[j])
                {
                    count1++;
                }
            }
        }
        if (count1 == 2 || count1 == 3)
        {
            countno = 1;
        }
    }
    if (countno == 1)
        printf("Number of Bus IDs in range of 5-10 repeated for %d times\n", count1);
    int len = strlen(terminal_name);
    for (int i = 0; i < len; i++)
    {
        if (terminal_name[i] == ',' && terminal_name[i + 1] == ',')
        {
            for (int j = i + 1; j < len; j++)
            {
                terminal_name[j] = terminal_name[j + 1];
            }
            i--;
        }
    }
    printf("New Terminal name is %s\n", terminal_name);
}
