#include<stdio.h>
int main()
{
    int testmarks,interviewmarks,points;
    printf("Enter your test marks\n");
    scanf("%d",&testmarks);
    if(testmarks>50)
    {
        printf("You have passed the test\n");
        points=+1; //point 1 if marks >50
        if(testmarks==100)
        {
        points+=1; //point 
        }
        printf("Enter your interview marks\n");
        scanf("%d",&interviewmarks);
        if(interviewmarks>70)
        {
            printf("You have passed the interview\n");
            points+=1;
            if(interviewmarks>90)
            {
            points+=2;
            }
        }
      
    }
    if(points>=3)
    {
        printf("Succeded\n");
        if(points==5)
        {
            printf("Excellent\n");
        }
    }
    else
    {
        printf("Failure\n");
    }
return 0;   
}