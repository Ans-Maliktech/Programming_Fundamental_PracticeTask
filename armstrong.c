#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter your number\n");
    scanf("%d",&num);
    int lenght=0;
    int power=0;
    int temp=num;
    while(temp!=0)
    {
       int rem=temp%10;
        power=pow(num,lenght);
        temp/10;
        lenght++;
    }
    if(power==num)
    {
        printf("Arm strong number\n"); 
    }
    else
    {
        printf("Not arm strong\n");
    }
}