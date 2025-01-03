#include <stdio.h>
int main()
{
    int unsort[10];
    printf("Enter your values\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &unsort[i]);
    }
    for (int i = 1; i < 10; i++) // 1 is used we have to start from here and shifts the values
    {
        int zero_index = unsort[i];
        int j = i - 1;

        while(unsort[j] > zero_index && j >= 0)
        {
            unsort[j + 1] = unsort[j];
            j = j - 1;
        }
        unsort[j + 1] = zero_index;
    }
    printf("Sorted array is \n");
    for(int i=0;i<10;i++)
    {
        printf("%d\n",unsort[i]);
    }
}