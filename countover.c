#include<stdio.h>
int main()
{
    int j=3;
    float product=1.0;
    for(int i=1;i<=6;i++)
    {
        float divide=(float)i/j;       
        product=product*divide;
       if(i!=6)
           printf("%d/%d *",i,j);
        else
        {
            printf("%d/%d ",i,j);
        }
        j=j+3;
       
    }
    printf("\n%f\n",product);
}