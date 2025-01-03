#include<stdio.h>
int main()
{
    int n,sq,r;
    int sum=0;
    printf("Enter your number\n");
    scanf("%d",&n);
    sq=n*n;
    while(sq!=0)
    {
        r=sq%10;
        sum+=r;
        sq=sq/10;
    }
    if(sum==n)
    {
        printf("NEon number");
    }
    else
    {
        printf("Not neon");
    }
}