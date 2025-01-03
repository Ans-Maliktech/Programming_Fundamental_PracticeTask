#include<stdio.h>
int main()
{
    int n1,n2,n3,max;
    printf("Enter N1,N2,N3 accordingly\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2)
    {
       max=n1;
       n1=n3;
       n3=max;
    }
    else
    {
        max=n2;
        n2=n3;
        n3=max;
    }
    printf("Maximum value is %d\n",max);
    printf("Swapped value is %d\n",max);
}