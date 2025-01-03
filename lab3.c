#include<stdio.h>
int main()
{

    int sqfeet;
    printf("Enter area of the house\n");
    scanf("%d",&sqfeet);
    //Worker cost
    int workers;
    printf("Enter number of workers\n");
    scanf("%d",&workers);
    int inch=sqfeet*12;
    float workercost=inch*200.4;
    printf("Cost of worker is :%f\n",workercost);
    //stone cost
    int stones;
    printf("Enter number of stones\n");
    scanf("%d",&stones);
    int fstones=100;
    int remstones;
    float stonescost;
    if(stones<=100)
    {
    stonescost=stones*3.2;
    printf("Cost of stones is %f\n",stonescost); 
    }
    if(stones>100)
    {
    float fstonescost=100*3.2;
    remstones=stones-fstones;
    float remcost=remstones*2.5;   
    stonescost=remcost+fstonescost; 
    printf("Cost of stone is %f\n",stonescost);
    }
    //Machine cost
    int machine;
    printf("Enter number of machines\n");
    scanf("%d",&machine);
    int days;
    printf("Enter number of days\n");
    scanf("%d",&days);
    float cost1h=23/4.0;
    float mcost=(cost1h*days*24)*machine;
    printf("Cost of machines for total hours %f\n",mcost);
    //Cement cost
    int tcement;
    printf("Enter amount of cement in grams\n");
    scanf("%d",&tcement);
    float tcement1=tcement/1000.0;
    tcement1=tcement/2;
    float tcement1cost=tcement1*2.4;
    float tcement2cost=tcement1*1.7;
    float totalcostc=tcement1cost+tcement2cost;
    printf("Cost of cement is %f\n",totalcostc);
    float totalcost=workercost+stonescost+mcost+totalcostc;
    printf("Total cost of one house is : %f\n",totalcost);
    printf("Cost for half part of 13 houses %f\n",(totalcost/2.0)*13);
    return 0;
}