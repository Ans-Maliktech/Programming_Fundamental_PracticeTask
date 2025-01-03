#include<stdio.h>
int main()
{
    int product=1;
    for(int i=1;i<=17;i++)
    {
        if(i%2!=0)
        {
        product=product*i;
        if(i!=17)
        {
        printf("%d*",i);
        }
        else
        {
        printf("%d ",i);
        }
        
        }
        
    }
   printf("Your product is %d",product); 
  return 0;  
}