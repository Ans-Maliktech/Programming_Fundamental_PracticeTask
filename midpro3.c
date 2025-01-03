#include<stdio.h>
int main()
{
    int rows;
    printf("Enter number of rows\n");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
       
        for(int j=1;j<=rows;j++)
        {
            if(i==1)
            {
                printf("0");
            }
            else if(i==rows)
            {
                printf("1");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");

    }
}