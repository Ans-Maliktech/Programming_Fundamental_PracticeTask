#include <stdio.h>

int main() {
    float num, decimalPart;
    int nonDecimalPart;
    float sum = 0.0;
    float product = 1.0;
    int firstMatch = -1, fourthMatch = -1, lastMatch = -1;
    int matchCount = 0;

    // User input for 10 float numbers
    printf("Enter 10 float numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &num);
        decimalPart = num - (int)num;
        nonDecimalPart = (int)num;

        if (num <= 5.0) {
            sum += decimalPart;
            if (sum == product) {
                matchCount++;
                if (firstMatch == -1) {
                    firstMatch = i + 1;
                }
                if (matchCount == 4) {
                    fourthMatch = i + 1;
                }
                lastMatch = i + 1;
            }
        } else {
            product *= nonDecimalPart;
        }
    }

    // Display results
    if (firstMatch != -1) {
        printf("First matching iteration: %d\n", firstMatch);
    }
    if (fourthMatch != -1) {
        printf("Fourth matching iteration: %d\n", fourthMatch);
    }
    if (lastMatch != -1) {
        printf("Last matching iteration: %d\n", lastMatch);
    }
    else
    {
        printf("Not matched");
    }
    return 0;
}

