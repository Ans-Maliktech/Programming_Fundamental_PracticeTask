#include<stdio.h>
int main()
{
    int num;
    printf("enter your number\n",num);
    scanf("%d",&num);
    if (num/3 && num%3==0)
    {
        printf("It's dvisible by 3");
    }
    if (num/5 && num%5==0)
    {
        printf("It's dvisible by 5");
    }
}