#include<stdio.h>
int main()
{
    int n;
    int c=0;
    printf("Enter your number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
       
    }
    if(c==2)
    {
        printf("Prime number\n");
    
    }
    else
    {
        printf("Not Prime number\n");
    }
}