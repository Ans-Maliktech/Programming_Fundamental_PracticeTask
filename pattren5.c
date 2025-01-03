#include<stdio.h>
int main()
{
    int rows; 
    printf("Enter rows\n");
    scanf("%d",&rows);
  for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows;j++)
        {
            if((i+j)%2==0)
            {
                printf("*");
            }
            else
            {
                printf("+");
            }
        }

        printf("\n");
    }
}