#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter values of a b and c respectively\n");
scanf("%d %d %d",&a,&b,&c);
//Expression 1
float lhs1=(a*a+2*a*b+b*b)+(a*a-(2*a*b)+b*b);
float rhs1=2*(a*a+b*b);
printf("Result for expression 1 :%f %f\n",lhs1,rhs1);
//Expression 2
float lhs2=(a*a)*((float)(b*b)/(b*b));
float rhs2=a*a;
printf("Result for expression 2 :%f %f\n",lhs2,rhs2);
//Expression 3
float lhs3=4.0*2*a*b/(a*a/(float)a);
float rhs3=8*b;
printf("Result for expression 3 :%f %f\n",lhs3,rhs3);
return 0;
}