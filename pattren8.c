    #include<stdio.h>
    int main()
    {
        int rows;
        printf("Enter row\n");
        scanf("%d",&rows);
        for(int i=1;i<=rows;i++)
        {
        
            for(int j=1;j<=rows;j++)
            {
            if(i==1 || i==rows ||j==rows)  
            
                printf("%d",i);
                else
                {
                    printf(" ");
                }
            
                
            }
        printf("\n");
        }
    }