#include<stdio.h>
int main()
{
    int a;float b;char c;
    printf("Integer: ");
    scanf("%d",&a);
    printf("Float: ");
    scanf("%f",&b);
    printf("Char: ");
    scanf(" %c",&c);
    printf("\n%d,%f,%c",a,b,c);
    return 0;
}