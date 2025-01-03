#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter first number\n",num1);
    scanf("%d",&num1);
    printf("Enter your second number\n",num2);
    scanf("%d",&num2);
    printf("Enter your third number\n",num3);
    scanf("%d",&num3);
    if (num1>num2 && num1>num3)
    {
        printf("Your maximum entered number is having value= %d",num1);
    
    }
    if (num2>num3 && num2>num1)
    {
        printf("Your maximum entered number ishaving value= %d",num2);
    
    }  
    
    if (num3>num1 && num3>num2)
    {
        printf("Your maximum entered number is having value =%d",num3);
    }
    
    return 0;


}