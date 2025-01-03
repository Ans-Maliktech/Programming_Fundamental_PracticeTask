#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a and b respecticvely\n");
    scanf("%d %d",&a,&b);
    //Expression 1
    float lhs=2.5+((a*a*a)*b/(float)(a*a))*5/2.0;
    printf("LHS= %f\n",lhs);
    //rhs
    float rhs=((float)a/b)*2.5+7/3.0;
    printf("Rhs = %f",rhs);
    //Expression 2
    float lhs2=(a*b/5.5)*10/4.0;
    printf("\nLHS 2= %f\n",lhs2);
    //rhs2
    float rhs2=2.5*((a*a*a)*b)/((float)a*a)/(22/4.0);
    printf("RHS2= %f",rhs2);
    //Expression 1 is not equal
    //Expresssion 2 is equal
    
}
