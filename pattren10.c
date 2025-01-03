#include<stdio.h>
int main()
{
    int rows;
    int k=9;
    printf("Enter row\n");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
    
        for(int j=1;j<=rows;j++)
        {
        if(i==1 || i==rows  && j==2 ||j==4)
        {
        printf("%d",k);
        k--;
        }
        if(j%2!=0 && i>=2||i<=rows)
        {
            printf("*");
        }
        }
    printf("\n");
   
    }
}