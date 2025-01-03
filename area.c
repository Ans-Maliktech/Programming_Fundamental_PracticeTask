#include<stdio.h>
#define PI 3.14
int main()
{
    int radius;
    printf("Enter your radius\n");
    scanf("%d",&radius);
    float area=2*PI*radius;
    printf("Your area is :%f\n",area);
    float circumference=PI*radius*radius;
    printf("Your circumference is %f\n",circumference);
    float diameter=2.0*radius;
    printf("Your diameter is :%f\n",diameter);
    return 0;
}