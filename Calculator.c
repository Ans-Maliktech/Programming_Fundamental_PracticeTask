#include <stdio.h>
int main()
{
    float n1, n2;
    printf("Enter two numbers\n");
    scanf("%f %f", &n1, &n2);
    char operation;
    printf("Select operation to perform\n+\n-\n*\n/\n");
    scanf(" %c", &operation); // Perform Menu based system using switch
    // Use a space before %c format specifier as the enter after previous inputs can sustain the desginated place for upcoming char
    switch (operation)
    {
    case '+':
        float sum = n1 + n2;
        printf("Sum is %2.f\n", sum);
        break; // Always use break to terminate the case when completed
    case '-':
        float max;
        if (n1 > n2)
            max = n1;
        else
            max = n1;
        float diffrence = max - n2;
        printf("Diffrence is %2.f", diffrence);
        break;
    case '*':
        float product = n1 * n2;
        printf("Product is %2.f ", product);
        break;
    case '/':
        float division= n1/n2;
        printf("Division is %2.f",division);
    }
}