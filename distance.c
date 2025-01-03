#include<stdio.h>
int main()
{
    float meters;
    printf("Enter your distance in meters\n");
    scanf("%f",&meters);
    float feet=meters*3.28;
    printf("Your distance in feet is %f\n", feet);
    float kilometer=meters/1000;
    printf("Your distance in kilometer is %f\n", kilometer);
    float inches=feet*12;
    printf("Your distance in inches is %f",inches);
    return 0;

}