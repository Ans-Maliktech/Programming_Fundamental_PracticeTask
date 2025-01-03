#include<stdio.h>
int main()
{
    int n;
    int product=1;
    int sum=0;
    for(int i=1;i<=10;i++)
    {
        scanf("%d",&n);
        if(i==3 || i==4 || i==5 ||i==9 ||i==10)
        {
            product=product*n;
        }
        else
        {
            sum=sum+n;
        }
    }
    printf("Your product is %d\n",product);
    printf("Your sum is %d\n",sum);
}