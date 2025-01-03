#include <stdio.h>
int main()
{
    int sum = 0;
    int c = 0, c1 = 0;
    int actors_id[6];
    int actors_time[6];
    float tcost;
    int max;
    printf("Enter your Actor id and time in minute respectively\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &actors_id[i]);
        scanf("%d", &actors_time[i]);
        sum = sum + actors_time[i];
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", actors_id[i]);
        printf("%d\n", actors_time[i]);
    }
    printf("Sum is %d\n", sum);
    // 5
    int time_insec = sum * 60;
    tcost = 2.5 * time_insec;
    printf("Total cost of actor is %f\n", tcost);
    // 6
    int actor_value;
    printf("Enter Value actor ID\n");
    scanf("%d", &actor_value);
    for (int i = 0; i < 6; i++)
    {
        if (actor_value > actors_id[i])
        {
            c++;
        }
        else
        {
            c1++;
        }
    }
    if (c != 0)
        printf("Count for greater than actor id is %d\n", c);
    if (c1 != 0)
        printf("Count for lesser is %d\n", c1);
    // 7Check max
    max = actors_id[0];
    for (int i = 0; i < 6; i++)
    {
        if (actors_id[i] > max)
        {
            max = actors_id[i];
        }
    }
    printf("Maximum value is %d\n", max);
    // 8
    int index_num;
    printf("Enter Index number\n");
    scanf("%d", &index_num);
    printf("Actor Id is %d\n", actors_id[index_num]);
    printf("Actors total time is %d\n", actors_time[index_num]);
    // 9
    //  int swapped=actors_time[0];
    //  actors_time[0]=actors_time[1];
    //  actors_time[1]=swapped;
    // 10
    int n = 8;
    int c8m = 0;

    for (int i = 0; i < 6; i++)
    {
        if (actors_id[i] == n)
        {
            c8m++;
        }
        n += 8;
    }
    if (c8m == 6)
    {
        printf("Pattren is followed\n");
    }
    else
    {
        printf("Not followed\n");
    }
    // 11
    int pc = 0;
    int k = 5;
    for (int i = 0; i < 6 / 2; i++)
    {
        if (actors_time[i] == actors_time[k])
        {
            pc++;
        }
        k--;
    }
    if (pc == 3)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not\n");
    }
    // 13
    int equal = 0;
    int equal_index;
    for (int i = 0; i < 6; i++)
    {
        if (actors_id[i] == actors_time[i])
        {
            equal++;
            equal_index = i;
        }
    }
    if (equal == 6)
    {
        printf("Equal and last at index %d\n", equal_index);
    }
    else if (equal >= 0 && equal < 6)
    {
        printf("Not equal\nLast was matched at index %d", equal_index);
    }
}