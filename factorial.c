#include<stdio.h>
int main()
{
    int n;
    int product=1;
    printf("Enter your number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        product=product*i;
    }
    printf("Your factorial is %d",product);
    return 0;
}