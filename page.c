#include<stdio.h>
int main () 
{
    
    
    int t_pages,min_pages=100,t_s_books,t_l_books,min_s_bkpg=30,min_l_bkpg=50;

    printf("Enter Number of Pages:\n");
    scanf("%d",&t_pages);
    if (t_pages<min_pages) 
    {
        t_pages=min_pages; 
        printf("Increasing Number of Pages to %d\n",t_pages);
    }
    t_s_books=t_pages/min_s_bkpg;
    t_l_books=t_pages/min_l_bkpg;

    printf("Total Number of Small Books (30 Pages Each): %d\n",t_s_books);
    printf("Total Number of Large Books (50 Pages Each): %d\n",t_l_books);

    return 0;
}