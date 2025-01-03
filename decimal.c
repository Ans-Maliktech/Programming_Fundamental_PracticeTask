#include<stdio.h>
int main()
{
    float n;
    int sum;
    int matchcount=0;
    int match1 =1, match4=1, match10=1;
    int product=1.0;
    printf("Enter your numbers\n");
    for(int i=1;i<=10;i++)
    {
        scanf("%f",&n);
        float decimal_part=n-(int)n;
        int non_decimal=(int)n;
        if(n<=5.0)
        {
        sum+=decimal_part;
        if(sum==product)
        {
            matchcount++;
            if(match1==1)
            {
                match1=i+1;
            }
            if(matchcount==4)
            {
                match4=i+1;
            }
            match10=i+1;
        }
        }
        else
        {
            product*=non_decimal;
        }
    }
    if(match1!=1)
    {
        printf("First matched iteration %d\n",match1);
    }
    if(match4!=1)
    {
        printf("fourth matched iteration %d\n",match4);
    }
    if(match10!=1)
    {
        printf("Last iteration value is matched %d\n",match10);
    }
    else
    {
        printf("No iteration matched\n");
    }
}