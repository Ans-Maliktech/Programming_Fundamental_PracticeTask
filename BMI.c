#include <stdio.h>
int main()
{
    float weight;
    printf("Enter your body weight\n");
    scanf("%f",&weight);
    printf("Enter your height in meters\n");
    float height;
    scanf("%f", &height);
    float BMI;
    BMI = weight / (height * height);
    printf("Your BMI is %.2f\n", BMI);
    if (BMI < 18.3) // These are fixed values
    {
        printf("You are under weight\n You need to join GYM");
    }
    else if (BMI < 24.9)
    {
        printf("Your weight is normal\nStay Healthy");
    }
    else
    {
        printf("You are overweight\nJoin GYM");
    }
}