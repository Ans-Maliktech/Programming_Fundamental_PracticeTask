#include<stdio.h>
int main()
{
    int n;
    int count=0;
    printf("Enter your number\n");
    for(int i=1;i<=10;i++)
    {
        scanf("%d",&n);
        if(n==0)
        {
            printf("Program is terminated\n");
            count+=1;
            break;
        }
        

    }
    if(count!=1)
    {
        printf("All 10 iterations are used\n");
    }
}