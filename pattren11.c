#include<stdio.h>
int main()
{
    char ch='A';
    int rows;
    printf("Enter row\n");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        
        for(int j=1;j<=rows;j++)
        {
        printf("%c",ch);
            ch++;
        }
    printf("\n");
    }
}