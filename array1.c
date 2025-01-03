#include <stdio.h>
int main()
{
    int pc = 0, fc = 0, c = 0, c1 = 0;
    int marks[6];
    char grades[6];
    printf("Enter your marks\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &marks[i]);
        if (marks[i] >= 50)
        {
            grades[i] = 'P';
            pc++;
        }
        else
        {
            grades[i] = 'F';
            fc++;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", marks[i]);
        printf("%c\n", grades[i]);
    }
    if (marks[1] && marks[6 - 2])
    {
        int diff = marks[1] - marks[4];
        printf("Diff is %d\n", diff);
    }
    if (pc == 6)
    {
        printf("Excellent\n");
    }
    if (pc >= 3 && pc <= 5)
    {
        printf("Good\n");
    }
    if (pc == 0)
    {
        printf("Bad");
    }
    if (grades[0] == 'P' && grades[6 / 2] == 'P' && grades[5] == 'P')
    {
        printf("All values are same\n");
    }
    else
    {
        printf("All values are not same\n");
    }
    for (int i = 0; i < 6; i++)
    {
        if (grades[i] == 'F' && i % 2 == 0)
        {
            c++;
        }
        else if (i % 2 != 0 && grades[i] == 'P')
        {
            c++;
        }
    }
    if (c == 3)
    {
        printf("PFPFPF\n");
    }
    else
    {
        printf("Not followes\n");
    }
}