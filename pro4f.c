#include<stdio.h>
int main()
{
    int salary;
    float tax1,tax2,wealth,sum;
    printf("Enter your salary\n");
    scanf("%d",&salary);
    if(salary<5000)
    {
        printf("No tax\n");
    }
    else if(salary>=5001 && salary<=10000)
    {
        tax1=salary*2.0/100;
    }
    else if(salary>=100001 && salary<=20000)
    {
        tax1=salary*3.0/100;
    }
    else if(salary>20000)
    {
        tax1=salary*4.0/100;
    }
    printf("Enter your total wealth\n");
    scanf("%f",&wealth);
    tax2=wealth*3.3/100;
    sum=tax1+tax2;
    printf("Total tax per month is %f\n",sum);
    float taxyearly=sum*12;
    printf("Your yearly tax is %f\n",taxyearly);
    float taxdaily=(sum/30.0)/2.0;
    printf("Half tax amount per day is %f\n",taxdaily);
    float tax_perhour=(sum/30)/24.0;
    float tax_permin=tax_perhour/60;
    float tax_persec=tax_perhour/60;
    float tax=6*tax_perhour+29*tax_permin+46*tax_persec;
    printf("Tax for 6 hours 29 minutes and 46 seconds is %f",tax);
    return 0;
}