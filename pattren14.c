#include<stdio.h>
int main()
{
    int rows;
    printf("Enter your rows\n");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1 || i==rows || j==i)
            printf("%d",j);
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}