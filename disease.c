#include<stdio.h>
int main()
{
    int  t1,t2;
    printf("Enter result of disease 1 and 2 accordingly\n");
    scanf(" %d %d",&t1,&t2);
    if(t1==1 && t2==1)
    {
        int t3,t4;
        printf("Input results of disease 3 and 4\n");
        scanf("%d %d",&t3,&t4);
    if(t3==1 || t4==1)
    {
        int t5;
        printf("Disease 1 diagnosed\n");
        int d1=t3==1 || t4==1;
        printf("Enter results of test 5\n");
        scanf("%d",&t5);
        if(t5==1)
        {
            printf("Disease 2  diagnosed\n");
            int d2=t5;
        }
    int d2=t5;   
    if(d1==1 && d2==1)
    { 
        printf("Paitent is in critical condition\n");
    }
    else
    {
        printf("Paitent is not in critical condition\n");
    }
    }
    }
    else
    {
        printf("Disease is not diagnosed\n");
    }
return 0;
}
