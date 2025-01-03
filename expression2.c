#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a , b and c respectively\n");
    scanf("%d%d%d",&a,&b,&c);
    //Expression1
    float r1=a/2.0+(4.0/a)*3.1;
    printf("R1=%f",r1);
    //Expression2 
    float r2=(a+b)/2.0*(8.3*a/b);
    printf("\nR2=%f",r2);
    
}