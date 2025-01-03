#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter your first number\n");
    scanf("%d",&n1);
    printf("Value of N1= %d\n",n1);
    printf("Enter your second number\n");
    scanf("%d",&n2);
    if(n2==100 || n2>n1)
    {
        printf("Value of N2 is %d\n",n2);
    }
    printf("Enter third number\n");
    scanf("%d",&n3);
    if(n3==100 || n3>n2)
    {
        printf("Value of N3 :%d",n3);
    }
    return 0;
}