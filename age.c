#include<stdio.h>
int main()
{
    float age;
    printf("Enter your age in weeks\n");
    scanf("%f",&age);
    int days=age*7;
    printf("Your age in days is %d\n", days);
    int hour=days*24;
    printf("Your age in hour is %d\n", hour);
    float years=age/52;
    printf("Your age in years is %f\n",years);


    return 0;
}
