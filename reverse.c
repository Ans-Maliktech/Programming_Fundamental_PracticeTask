#include<stdio.h>
int main()
{
    int n=392;
    int reminder;
    while(n!=0)
    {
        reminder=n%10;
        printf("%d",reminder);
        n=n/10;
    }
return 0;
}