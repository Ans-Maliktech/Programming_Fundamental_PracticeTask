#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter your numbers\n");
    scanf("%d %d",&n1,&n2);
    if(n1>=97 && n1<=122 || n1>=65 && n1<=90)
    {
        if(n2>=97 && n2<=122 || n2>=65 && n2<=90)
        {
        printf("%c %c",n1,n2);
        }
    }
    else
    {
        printf("Not in range\n");
    }
    return 0;
}