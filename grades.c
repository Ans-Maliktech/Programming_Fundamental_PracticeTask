#include<stdio.h>
int main()
{
    char gc1,gc2;
    printf("Enter grade of first subject\n");
    scanf("%c",&gc1);
    printf("Enter the grade of second course\n");
    scanf(" %c",&gc2);
    if(gc1=='p' && gc2=='p')
    {
        printf("You have good grades\n");

    }
    else if(gc1=='p' && gc2=='f' || gc1=='f' && gc2=='p')
    {
        printf("You have bad results\n");
    }
    else
    {
        printf("You have worse results\n");
    }
    return 0;   
}