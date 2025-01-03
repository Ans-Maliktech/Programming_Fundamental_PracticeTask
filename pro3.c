#include <stdio.h>

int main() {
    int a, b;
    int sum = 0;
    int product = 1;

    printf("Enter value of a and b\n");
    scanf("%d%d", &a, &b);

    for (int i = 24; i >= 4; i -= 4) {
        int term;
        if (i == 24 || i == 4)
        {
            term =i*b;
            printf("%db",i);
        } 
        else
        {
            term=i*a;
            printf("%da+",i);
        }
        sum +=term;
        product *=term;
    }

    printf("\nYour sum value is %d\n",sum);
    printf("Your product is %d\n",product);

    return 0;
}
    