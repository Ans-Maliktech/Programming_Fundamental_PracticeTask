#include<stdio.h>
int main()
{
    int p=0 ,N=1;
    int terms;
    printf("Enter the number of terms\n");
    scanf("%d",&terms);
    for(int i=1;i<=terms;i++)
    {
        if(i==1)
        {
            printf("%d ",p);
        }
        else
        {
            printf("%d ",N);
            int temp=N;
            N=p+N;
            p=temp;

        }
    }
return 0;
}