#include <stdio.h>
int main()
{
    int Building_capacity[3][5];
    printf("Enter capacity of each room\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &Building_capacity[i][j]);
        }
    }
    printf("Capacity of each room:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\n", Building_capacity[i][j]);
        }
    }
    int max = Building_capacity[0][0];
    int maxroom = 1, maxbuild = 1;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            if (Building_capacity[i][j] > max)
            {
                max = Building_capacity[i][j];
                maxroom = j + 1;
                maxbuild = i + 1;
            }
        }
    }
    printf("The largest room is %d located in building number %d\n", maxroom, maxbuild);
    printf("Capacity of 2nd building in reverse\n");
    for (int j = 4; j >= 0; j--)
    {
        printf("%d\n", Building_capacity[1][j]);
    } // it could be accessed directly
    int buildno, roomno = 0;
    int pattren_count;
    for (int i = 0; i < 3; i++)
    {
        int k = 21;
        for (int j = 0; j < 5; j++)
        {
            if (Building_capacity[i][j] == k)
            {
                buildno = i + 1;
                printf("Building no %d's  Room no  %d have %d\n", buildno, j + 1, k);
                k += 2;
            }
        }
    }
    int num;
    printf("Enter number of students\n");
    scanf("%d", &num);
    int build2 = 0, room2 = 0, build1 = 0, room1 = 0; // Assign each variable sideways
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (num == Building_capacity[i][j])
            {
                if (build1 == 0 && room1 == 0)
                {
                    build1 = i + 1;
                    room1 = j + 1;
                }
                else if (build2 == 0 && room2 == 0 && (build1 != i + 1 || room1 != j + 1))
                {
                    build2 = i + 1;
                    room2 = j + 1;
                }
            }
        }
    }
    if (build1 != 0 && room1 != 0)
    {
        printf("Room NO %d in Building NO %d is available\n", room1, build1);
        if (build2 != 0 && room2 != 0)
        {
            printf("Room NO %d in Building NO %d is available\n", room2, build2);
        }
        else
        {
            printf("Only one matching room found.\n");
        }
    }
    else
    {
        printf("No matching rooms found for the given number of students.\n");
    }
    // Display the Room Numbers of three consecutive Rooms of all such buildings in entire school,which are
    // all odd values.
    int firstoddr = 0, firstbuild = 0;
    int oddcount = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Building_capacity[i][j] % 2 != 0 && Building_capacity[i][j + 1] % 2 != 0 && Building_capacity[i][j + 2] % 2 != 0)
            {
                printf("Building no %d has three consective odd room having no %d %d %d\n", i + 1, j + 1, j + 2, j + 3);
                oddcount = 1;
                break;
            }
        }
    }
    if (oddcount != 1)
    {
        printf("No consective odd found\n");
    }
    // User will input some capacity in some variable(Cap), then search that inputted capacity in all buildings
    // and find out that whether that inputted capacity has occurred two times in each building or not. And
    // display the message “Inputted Capacity has occurred Two times in each Building” or in other case display
    // message “Inputted Capacity has not has occurred Two times in each Building”.
    int capacity_check;
    int build1count = 0, build2count = 0, build3count = 0;
    printf("Enter capacity value to check\n");
    scanf("%d", &capacity_check);
    for (int j = 0; j < 5; j++)
    {
        if (capacity_check == Building_capacity[0][j])
            build1count++;
        if (capacity_check == Building_capacity[1][j])
            build2count++;
        if (capacity_check == Building_capacity[2][j])
            build3count++;
    } // If you have to check only column of required row just use the J loop
    if (build1count == 2 && build2count == 2 && build3count == 2)
        printf("Inputted Capacity has occurred Two times in each Building\n");
    else
        printf("Not occurred two times\n");
    /*Then find out the sum of each building room capacities separately, then display the maximum capacity
    building using three sum values. */
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for (int j = 0; j < 5; j++)
    {
        if (Building_capacity[0][j])
            sum1 += Building_capacity[0][j];
        if (Building_capacity[1][j])
            sum2 += Building_capacity[1][j];
        if (Building_capacity[2][j])
            sum3 += Building_capacity[2][j];
    }
    int max_sum=0;
        if(sum1>sum2)
            max_sum=sum1;
        else if(sum2>sum1)
            max_sum=sum2;
        else 
            max_sum=sum3;
        printf("Sum of 1st Building is %d\nSum of 2nd Building is %d\nSum of 3rd Building is %d\n", sum1, sum2, sum3);
        printf("Maximum capacity builfing is %d\n",max_sum);
    return 0;
}