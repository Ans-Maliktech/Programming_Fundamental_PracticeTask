#include<stdio.h>
int main()
{
int lenght,width;
printf("Enter your lenght and width respectively\n",lenght,width);
scanf("%d %d",&lenght,&width);
float area=(float)lenght*width;
float cost=area*15.4;
printf("Cost of a room is :%f",cost);
int roomn;
printf("Enter the number of rooms\n");
scanf("%d",&roomn);
float buildingcost=roomn*cost;
float tax=buildingcost*4.0/100;
float total=buildingcost+tax;
printf("Your tax is %f\n",tax);
printf("Your building cost is %f",total);
return 0;
}