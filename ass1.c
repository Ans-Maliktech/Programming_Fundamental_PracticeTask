#include<stdio.h>
int main()
{
    int n;
    int f=0;
    printf("Enter your number\n");
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++)
    {
    if(n%2==0)
    {
        f++;
        break;
    }
    }
    if(f==0)
    {
        printf("Prime number");
    }
    return 0;
}