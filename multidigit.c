#include<stdio.h>
int multi_digit(int number)
{
    if(number==0)
        return 0;
    else
    {
        return 1+multi_digit(number/10);
    }
}
int main()
{
    int number;
    printf("Enter your multi-digit number\n");
    scanf("%d",&number);
    int count;
    if(number==0)
    {
        count=1;
    }
    else
    {
        count=multi_digit(number);
    }
    printf("Your total number  is %d ",count);
    return 0;
}
