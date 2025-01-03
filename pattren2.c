#include<stdio.h>
int main()
{
    int rows;
    printf("Enter row\n");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int j=rows;j>=1;j--)
        {
            if(i%2==0 && (j>=2 && j<=rows-1) ) //Apply this condition as to determine the column 
            {
                printf(" "); //Reversed conditions for intital base
            }
            else
            {
            printf("%d",j);
            }
        }
    printf("\n");
    }

}