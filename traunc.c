#include<stdio.h>
#include<math.h>
int main()
{
    float num1,num2;
    printf("Enter your decimal values\n");
    scanf("%f %f",&num1,&num2);
    num1=trunc(num1);
    num2=trunc(num2);
    if(num1==num2)
    {
        printf("Same numbers");
    }
    else
    {
        printf("Not same\n");
    }
}