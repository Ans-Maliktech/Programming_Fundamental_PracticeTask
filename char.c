#include<stdio.h>
int main()
{
    char alpha;
    printf("Enter your alphabet\n");
    scanf("%c",&alpha);
    if(alpha>=97 && alpha<=99 || alpha>=120 && alpha<=122)
    {
    printf("Not possible\n");
    }
    else
    {
    printf("%c %c %c\n",alpha+1,alpha+2,alpha+3);
    printf("%c %c %c\n",alpha-1,alpha-2,alpha-3);
    }
    return 0;
}