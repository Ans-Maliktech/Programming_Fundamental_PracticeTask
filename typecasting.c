#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a\n",a);
    scanf("%d %d",&a,&b);
    float R1=(3.0/b+(float)a/b+1.6*b/a);
    printf("Result of R1 : %f\n",R1);
    float R2=(float)((a*b)+(a+b))/(a+b)*1.0/2;
    printf("Result of R2 : %f\n",R2);
    float R3= a * (4.0/5*7/2*21.0/3);
    printf("Result of R3 : %f\n",R3);
    return 0;
}