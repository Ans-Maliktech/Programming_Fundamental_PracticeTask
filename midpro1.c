#include <stdio.h>
int main()
{
    int rows;
    printf("Enter number of rows\n");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int js= 1; js<= rows - i; js++)
        {
            printf(" ");
        }
        for (int jn= 1; jn<=i; jn++)
        {
            if (jn== 1 || jn== i ||i==rows)
            {
                printf("%d ", jn);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}