#include <stdio.h>
#include <math.h>
int main()
{
    int options, oct = 0, binary, rem, base = 0, decimal = 0, p = 1, i = 0, index = 0;
    char hex[100];
repeat:
    printf("Enter the Binary Number \n");
    scanf("%d", &binary);
    printf("1. Binary to Decimal\n2. Binary to Octal \n3. Binary to Hexadecimal \n");
    scanf("%d", &options);
    switch (options)
    {

    case (1): // Code For Binary to Decimal

        for (binary; binary > 0; base++)
        {
            rem = binary % 10; // Gives Last digit of Binary
            if (rem > 1)
            {
                printf("Invalid Binary \n"); // Binary Validity
                goto repeat;
            }
            decimal = decimal + (rem * pow(2, base)); // Adds decimal of last digit after converting
            binary = binary / 10;                     // Goes to next Digit by removing the Last Digit
        }
        printf("Decimal Result: %d \n", decimal); // Output
        break;

    case (2): // Code For Binary to Octal

        // First Convert to Decimal

        for (int base = 0; binary > 0; base++)
        {
            rem = binary % 10;
            if (rem > 1)
            {
                printf("Invalid Binary \n");
                goto repeat;
            }
            decimal = decimal + (rem * pow(2, base));
            binary = binary / 10;
        }

        // Decimal To Octal

        for (decimal; decimal > 0; decimal)
        {
            rem = 0;
            rem = decimal % 8;     // Remainder of Decimal is assigned to rem
            decimal = decimal / 8; // Quotient Saved after dividing by 8
            oct = oct + rem * p;   // Octal is saved by Multiplying the remainder with p which gives it another digit
            p = p * 10;            // p is multiplied by 10 again and again for new position
        }
        printf("Octal Result: %d \n", oct); // Output
        break;

    case (3): // Code for Binary to Hexadecimal

        // Binary to Decimal

        for (int base = 0; binary > 0; base++)
        {
            rem = binary % 10;
            if (rem > 1)
            {
                printf("Invalid Binary \n");
                goto repeat;
            }
            decimal = decimal + (rem * pow(2, base));
            binary = binary / 10;
        }
        // Decimal to Hexadecimal

        while (decimal > 0)
        {
            rem = decimal % 16;     // Gives Remainder
            decimal = decimal / 16; // Gives the Remaining Quotient

            if (rem >= 10)
            {
                hex[index] = rem + 55; // Store hexadecimal character (A-F)
            }
            else
            {
                hex[index] = rem + 48; // Store hexadecimal digit (0-9)
            }

            index++; // Index Increment in Loop
        }

        // Print hexadecimal digits in reverse order
        printf("Hexadecimal Result: ");
        for (int i = index - 1; i >= 0; i--)
        {                         // i changes for different values in array
            printf("%c", hex[i]); // hex[i] changes and the saved value in each i is printed
        }

        break;
    default:
        printf("Invalid Input \n");
    }

    return 0;
}