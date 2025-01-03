#include<stdio.h>
int main()
{
    int rows;
    printf("Enter your rows\n");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows;j++)
        {
            if(i%2==0 && (j>=2 && j<=rows-1) ) //Apply this condition as to determine the column 
            {
                printf(" ");
            }
            else
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }

}