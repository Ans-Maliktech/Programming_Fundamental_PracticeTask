#include<stdio.h>
int main()
{
    int n;
    int pcounter,ncounter=0;
    printf("Enter your inputs\n");
    for(int i=1;i<=10;i++)
    {
        scanf("%d",&n);
        if(n>=100)
        {
            printf("Wrong value\n");
            ncounter=+1;
            scanf("%d",&n);
            if(n>=100)
            {
                printf("Terminated\n");
                ncounter+=1;
                break;
            }
            else
            {
                pcounter=+1;
            }
        }
        pcounter=+i;

    }
    printf("You have inputted wrong %d times\n",ncounter);
    printf("You have imputted correct %d times\n",pcounter);
  
}
