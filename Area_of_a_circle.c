#include <stdio.h>
#define pi 3.14
int main()
{
    int radius;
    printf("Enter radius of a circle\n");
    scanf("%d", &radius);
    float area = pi * radius * radius; // Use float data type to calculate precise area
    printf("Area of the circle is %f", area);
}