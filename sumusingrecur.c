#include<stdio.h>
int sum_digits(int number)
{
    if(number==0)
    {
        return 0;
    }
    else
    {
        int sum=number%10+sum_digits(number/10);
        return sum;
    }
}
int main()
{
    int number;
    printf("Enter your number\n");
    scanf("%d",&number);
    int returned=sum_digits(number);
    printf("Your sum is %d",returned);
}