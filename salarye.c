#include<stdio.h>
int main()
{
    int bsalary,eyears;
    printf("Enter your basic salary\n",bsalary);
    scanf("%d",&bsalary);
    float DA1=bsalary*31.0/100;
    float HRA=bsalary*24.0/100;
    float total=bsalary+DA1+HRA;
    printf("Your total salary with allowences is : %f\n",total);
    printf("Enter your experience year\n",eyears);
    scanf("%d",&eyears);
    eyears=12*eyears; 
    float bonus=(200.3/2)*eyears;
    printf("Your bonus is %f\n",bonus);
    float grand=total+bonus;
    printf("Your grand salary after bonus is %f",grand);
    return 0;
}
