#include<stdio.h>
int main()
{
int totalamount,count;
printf("Enter your amount\n");
scanf("%d",&totalamount);
//USA made
int usamade=600;
int tuproduct=totalamount/600;
if(tuproduct>=5)
{
    printf("You can buy %d USA made products\n",tuproduct); 
    count=+1;
}
//European made
int emade=300;
int teproudct=totalamount/300;
if(teproudct>=5)
{
    printf("You can buy %d Euorpean products\n",teproudct);
    count+=1;
}
//Asaian product
int asianmade=200;
int taproduct=totalamount/200;
if(taproduct>=5)
{
    printf("You can buy %d Asian products\n",taproduct);
    count+=1;
}
printf("You have printed this statement %d times\n",count);
return 0;
}
