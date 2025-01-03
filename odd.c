#include<stdio.h>
int main()
{
    int number;
    printf("Enter your 5 numbers");
    for(int i=1;i<6;i++)
    {
        scanf("%d",&number);
    }
        if (number%2==0)
        {
            printf("All are even numbers");
        }
        if (number%2!=0)
        {
            printf("This is odd");
        }
    return 0;
}

