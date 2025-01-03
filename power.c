#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum;
    int term;
    printf("Enter your number\n");
    scanf("%d",&n);
    for(int i=1;i<=6;i++)
    {
        term=pow(n,i);
        printf("%d",term);
        sum=sum+term;
    }
    printf("Your sum is %d",sum);
    return 0;
}