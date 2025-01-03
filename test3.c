#include<stdio.h>
int main()  
{ 

int i=4;
for(i=1;i<=20;i+=2)
{
    if(i%6==0)
    {
        continue;
    }
    printf("Value of i = %d\n",i);
    
}
return 0; 

}
