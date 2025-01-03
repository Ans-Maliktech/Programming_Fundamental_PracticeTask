#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter values of a b and c respectively\n");
    scanf("%d %d %d",&a,&b,&c);
    float R1=(float)a/((a*b)/(float)c)*(2.0/3*((float)b/c));
    float R2=(c*a/(b*1.5))+a;
    float R3=(4*a/2.0)+((7/1.2))*(a*b*c);
    printf("Result of R1: %f\n",R1);
    printf("Result of R2: %f\n",R2);
    printf("Result of R3: %f\n",R3);
    return 0;
}