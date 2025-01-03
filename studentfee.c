#include<stdio.h>
int main()
{
    int coursen;
    printf("Enter your courses number\n");
    scanf("%d",&coursen); 
   
    if(coursen>=3)
    { 
    float cfee=coursen*123.5;
    float hostelfee=(27.0/4)*24*180;
    float sportsfee=((4065.0/5)/2);//sports fee for 1 year is given by dividing the value by 5 and for 6 months divide by 2 again
    int bookn;
    printf("Enter your books input\n"); 
    scanf("%d",&bookn);
    float bookfee=(float)(bookn)*112;
    float totalfee=cfee+hostelfee+sportsfee+(float)bookfee;
    printf("Your cousrse registeration fee is: %f\n",cfee);
    printf("Your hostel fee  is: %f\n",hostelfee);
    printf("Your book fee is: %f\n",bookfee);
    printf("Your sports fee is: %f\n",sportsfee);
    printf("Your total fee for 6 months is :%f",totalfee);
    }
    return 0;

    }
