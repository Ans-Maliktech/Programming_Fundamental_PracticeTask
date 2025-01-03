#include<stdio.h>
#include<math.h>
int main()
{
    float hours,minutes,seconds;
    printf("Enter duration of first task in hours\n");
    scanf("%f",&hours);
    printf("Enter duration of second task in minutes\n");
    scanf("%f",&minutes);
    printf("Enter duration of third seconds\n");
    scanf("%f",&seconds);
    hours= fabs(hours);// fabs is used to make neagtive value positive
    minutes= fabs(minutes);
    seconds= fabs(seconds);
    printf("%f",hours);
    float task1=hours*60;
    float task2=minutes;
    float task3=seconds*minutes;
    float task1day=task1/1440;
    float task2day=task2/1440;
    float task3day=task3/1440;
    printf("%f %f %f",task1day,task2day,task3day);
    if((task1day,task2day,task3day)<1)
    {
        task1day=ceil(task1day);
        task2day=ceil(task2day);
        task3day=ceil(task3day);
    }
    float salary1task=1000.5*
    
}

