#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter both numbers\n",a,b);
    scanf("%d\n%d",&a,&b);
    float c=(float)(a)/b;
    printf("%f",c);
    return 0;
}