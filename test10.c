#include <stdio.h>
int main(void)
{
    int choice;
    float area;
    float PI = 3.14159;

    while (1)
    {
        printf("\nMenu\n");
        printf("1. Calculate the Area of a Circle\n");
        printf("2. Calculate the Area of a Rectangle\n");
        printf("3. Calculate the Area of a Triangle\n");
        printf("4. Quit\n");
        printf("Enter your choice (1-4)\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            float radius;
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            // Calculating the Area of a Circle
            if (radius < 0)
            {
                printf("Error: Radius cannot be negative:\n");
            }
            else
            {
                area = PI * radius * radius;
                printf("The Area of a Circle is: %f\n", area);
            }
            break;
        }

        case 2:
        {
            float length, width;
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);

            // Calculating the Area of a Rectangle
            if (length < 0 || width < 0)
            {
                printf("Error: Length cannot be negative:\n");
            }
            else
            {
                area = length * width;
                printf("The Area of a Rectangle is: %f\n", area);
            }
            break;
        }

        case 3:
        {
            float base, height;
            printf("Enter the base of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);

            // Calculating the Area of a Triangle
            if (base < 0 || height < 0)
            {
                printf("Error: Base and Height cannot be negative:\n");
            }
            else
            {
                area = 0.5 * base * height;
                printf("The Area of a Triangle is: %f\n", area);
            }
            break;
        }

        case 4:
        {
            printf("Quitting the program\n");
            break;
        }
        default:
            printf("Invalid choice");
            break;
        }
        if(choice>=4)
        {
            break;
        }
    }
    return 0;
}