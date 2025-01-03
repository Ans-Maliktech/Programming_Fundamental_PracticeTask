#include<stdio.h>
int main()
{
    int n1,n2;
    int operators;
    float divide;
    printf("Enter numbers accordingly\n");
    scanf("%d %d",&n1,&n2);
    printf("Select operators\n[1]>\n[2]<\n[3]>=\n[4]<=\n[5]==\n[6]!=\n");
    scanf("%d",&operators);
    switch(operators)
    {
        case 1:
        if(n1>n2)
        {
            printf("Your n1 is greater than n2\n");
        }
        else
        {
            printf("N1 is not greater");
        }
        break;
        case 2:
        if(n1<n2)
        {
            printf("Your n1 is less than n2\n");
        }
        else
        {
            printf("N1 is not less\n");
        }
        break;
        case 3:
        if(n1>=n2)
        {
            printf("True");
        }
        else
        {
            printf("False\n");
        }
        break;
        case 4:
        if(n1<=n2)
        {
            printf("True");
        }
        else
        {
            printf("False\n");
        }
        break;
    


    }
    


}