#include<stdio.h>
int main()
{
    int rows;
    printf("Enter row\n");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        
        for(int j=1;j<=rows;j++)
        {
        if(j>=2 || j<=rows-1)
        {
            printf("%d",i);
        }
        // else
        // {

        // printf("%d",j);
        // }
        }
    printf("\n");
    }
}