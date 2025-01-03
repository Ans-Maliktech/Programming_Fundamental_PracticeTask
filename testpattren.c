#include<stdio.h>
int main()
{
    int rows;
    printf("Enter your rows\n");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int k=1;k<=rows;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");

    }


}