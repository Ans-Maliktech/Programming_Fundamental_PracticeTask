#include<stdio.h>
int main()
{
    int n1,n2,n3,nt;
    printf("Enter your first number\n");
    scanf("%d",&n1);
    if(n1%2==0)
    {
        n1=n1-1;
        n2=n1-2;
        printf("%d\n",n1);
        printf("%d\n",n2);
        
        if((n1+n2)%2!=0) 
        {
        printf("Sum of these number is %d\n",n1+n2);
        }
        if((n1*n2)%2!=0)
        {
        printf("Product of these number is %d\n",n1*n2);
        }
    }
    else
    {
        printf("Already an odd number\n");

    }
}