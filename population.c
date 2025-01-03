//Name: Alizehy Abbasi
Reg. no: Sp24-BCS-017
#include<stdio.h>
#include<math.h>
int main()
{
    int population,arthimetic_rate;
    float gemotatric_rate;
    int arithmetic_population;
    float geomatric_population;
    float average;
    printf("Enter the following Values respectively\nPopulation\nGeomatric growth rate\nArithmetic rate\n");
    scanf("%d %f %d",&population,&gemotatric_rate,&arthimetic_rate);
    arithmetic_population=population;
    geomatric_population=population;
    average=population;
    printf("Years\tGeomatric\tArithmetic\tAverage\n");
    printf("-=-=-=-=-=-==-=-=-==-=-=-=-==-=-=-==-=-=-=-=\n");
    for(int i=1;i<=10;i++)
    {
        int years=i; 
        geomatric_population=(geomatric_population+geomatric_population*gemotatric_rate);
        arithmetic_population+=arthimetic_rate;
        average=floor((geomatric_population+arithmetic_population)/2);
        printf("%d\t%.0f\t\t%d\t\t%.0f\n",years,geomatric_population,arithmetic_population,average);
    }
    return 0; 
}