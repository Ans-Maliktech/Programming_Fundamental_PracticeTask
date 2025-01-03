#include<stdio.h>
int main()
{
    float bs,ts;
    float allownce1,allownce2;
    printf("Enter your basic salary\n");
    scanf("%f",&bs);
    allownce1=bs*10/100;
    allownce2=bs*20/100;
    ts=bs+allownce1+allownce2;
    printf("Your total salary is : %f",ts);
    return 0;
}