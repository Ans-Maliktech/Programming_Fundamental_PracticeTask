#include<stdio.h>
int main()
{
    int rows;
    printf("Enter number of rows\n");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
       
        for(int js=1;js<=rows-i;js++)
        {
        printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            if(k==1)
            {
                printf("%d",k);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");

    }
}