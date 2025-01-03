#include<stdio.h>
int main()
{
    int persons,days,children,discount;
    float d1,d2,gtotal;
    printf("Enter the number of person\n");
    scanf("%d",&persons);
    printf("Enter the number of days\n");
    scanf("%d",&days);
    float daycost=250.25*days;
    float totalcost=daycost*persons;
    //Discounts
    if(persons>=5 && days>=10)
    {
        d1=(days*100.25);
        printf("%f",d1);
    }
    printf("Value after dis %f\n",totalcost-d1);
    printf("Enter number of children you want to take\n");
    scanf("%d",&children);
    if(children>0)
    {
        persons=+children;
        d2=children*45.3;
        float totald=d1+d2;
        printf("You got two discounts with value %.2f\n",totald);
        gtotal=(persons*250.25)-totald;
        printf("Your grand value is %f",gtotal);
    }
    else
    {
    printf("You got the dicount of %.2f\n",d1);
    gtotal=totalcost-d1;
    printf("You grand value after discount is %.2f\n",gtotal);
    }
    return 0;
}