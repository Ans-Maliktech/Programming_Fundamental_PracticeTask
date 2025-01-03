#include<stdio.h>
int main()
{
    int rows=4;
    for(int i=1;i<=rows;i++)
    {
        for(int j=0;j<=rows-i;j++) //rows-i gives the number of spaces
        {
            printf(" ");
        }
        for(int j=0;j<i;j++)
        {
            printf("%d",i+j);//to print the midway line as every digit in that coulmn is odd
        } 
        for(int j=0;j<i-1;j++)//for i=1 we don't have to make this loop work 
        {
            printf("%d",2*i-2-j);
        }
    printf("\n");
    }
}