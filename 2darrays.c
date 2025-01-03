#include <stdio.h>
int main()
{
    int team_1runs[2][6];
    int maidencount_index;
    int madiencount;
    printf("Enter score for every ball of two overs\n");
    for (int i = 0; i < 2; i++)
    {
        madiencount = 0;
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &team_1runs[i][j]);
            if (team_1runs[i][j] == 0)
            {
                // printf("Maiden over\n");
                madiencount++;
                maidencount_index = i + 1;
            }
            if (madiencount == 6)
            {
                printf("Maiden over is %d\n", maidencount_index);

            }
        }
    }
    if (madiencount == 6)
        printf("Maiden over is %d\n", maidencount_index);
    else
    {
        printf("No maiden over scored other than %d \n",maidencount_index);
        printf("Your score on 4th ball of second over is %d", team_1runs[1][4]);
    }
    
}