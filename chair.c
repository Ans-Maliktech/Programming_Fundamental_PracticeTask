#include<stdio.h>
int main()
{
    int price1;
    int price2;
    int price3;
    printf("Enter price of first chair\n");
    scanf("%d",&price1);
    printf("Enter price of second chair\n");
    scanf("%d",&price2);
    printf("Enter price of third chair\n");
    scanf("%d",&price3);
   int discount1=price1-(10.0/100)*100;
    int priced1=price1-discount1;
   printf("Your discounted amount is %d\n",priced1);
   float discount2=price2-(20.0/100)*100;
   int priced2=price2-discount2;
   printf("Your discounted amount is %d\n",priced2);
   int discount3=price3-(30.0/100)*100;
   int price3d=price3-discount3;
   printf("Your discounted amount is %d\n",price3d);
   float tdiscount=priced1+priced2+price3d;
   printf("Your total discount is %f" ,tdiscount);
   return 0;
}