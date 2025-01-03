#include<stdio.h>
int main()
{
    int tcomp,tresp,disccomp,discresp;
    float tax;
    printf("Enter number of commercial plots\n");
    scanf("%d",&tcomp);
    printf("Enter number of residential plots\n");
    scanf("%d",&tresp);
    if(tcomp>5)
    {
        disccomp=tcomp-5;
        tcomp=5;
        printf("Your discarded plots are %d\n",disccomp);
    }
    if(tresp>5)
    {    
        discresp=tresp-5;
        tresp=5;
    printf("Your  discarded plots are  %d\n",discresp);
    }
    int tplots=tcomp+tresp;
    float plotcost=tplots*175000;
    float comland=tcomp*3.0;
    float resland=tresp*5.0;
    float tland=comland+resland;
    printf("Your total cost is %f\n",plotcost);
    printf("Your land is %f\n",tland);
    if(tland>0 && tland<=3)
    {
        tax=tland*1500;
    }
    else if(tland>3 && tland<=5.5)
    {
        tax=tland*1000;
    }
    else if(tland>5.5 && tland<=8.0)
    {
        tax=tland*750;
    }
    else
    {
        tax=tland*500;
    }
    printf("Your total tax on land is %f\n",tax);
    return 0;
}