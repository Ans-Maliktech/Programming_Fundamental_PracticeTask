#include<stdio.h>
int main()
{
    int n,Num,subtract;
    printf("Enter your first number\n");
    scanf("%d",&n);
    for(int i=1;i<=5;i++)
    {
        scanf("%d",&Num);
        subtract=n-Num;
        if(subtract<0)
        {
            printf("Your diffrence is negative\nEnter your value again\n");
            scanf("%d",&Num);
            if(Num<n)
            {
                subtract=n-Num;
                printf("Your diffrence is in positive and %d\n",subtract);
            }
            else
            {
                break;
            }
        }
        else
        {
            printf("Your diffrence is %d\n",subtract);
        }
    }
}