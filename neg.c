#include<stdio.h>
int main()
{
    int n1,n2,sum,product,pn1,pn2;
    printf("Enter N1 and N2\n");
    scanf("%d %d",&n1,&n2);
    if(n1<0 && n2<0)
    {
        if(n1<n2)
        {
        n1=-(n1);       
        }
        else
        {
        n2=-(n2); 
        }
        product=n1*n2;
        sum=n1+n2;
        printf("Your sum is %d\n",sum);
        printf("Your product is %d\n",product);
        
    }
    else
    {
    sum=n1+n2;
    product=n1*n2;
    printf("Your sum is %d\n",sum);
    printf("Your product is %d\n",product);
    }
}