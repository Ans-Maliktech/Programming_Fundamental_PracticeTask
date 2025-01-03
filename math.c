#include<stdio.h>
#include<math.h>
int main()
{
    int  x,y;
    printf("Enter values of x y respectively\n");
    scanf("%d %d",&x,&y);
    float lhs=sqrt(45.0*pow(x,3)*y);
    printf("%f\n",lhs);
    float rhs=3*x*(sqrt(5.0*x*y));
    printf("%f\n",rhs);
    if(lhs==rhs)
    {
    printf("L.H.S =R.H.S");
    }
    else
    {
        printf("Wrong formula\n");
    }
    return 0;
}   