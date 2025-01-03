#include<stdio.h>
int main()
{
    int n,r;
    int lenght=1;
    int fr,sr,c=0,f=0;
    printf("Enter your number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(f==0)
        {
            fr=r;
            lenght++;
            f=1;
        }
        else
        {  if(fr==r)
        {
            c++;
            lenght++;
        }
        }
    }
if(c==lenght-1)
{
printf("same");
}

}