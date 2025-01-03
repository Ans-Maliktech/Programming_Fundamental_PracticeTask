#include <stdio.h>
#include <string.h>

void swap_char(char a[]) {
    int len = strlen(a);
    int half_len = len / 2;

    // Ensure the string length is even and at least 6 characters long
    if (len % 2 != 0 || len < 6) {
        printf("The string length must be even and at least 6 characters long.\n");
        return;
    }

    for (int i = 0; i < 3; i++) {
        // Swap the last 3 chars of the first half with the first 3 chars of the second half
        char temp = a[half_len - 3 + i];
        a[half_len - 3 + i] = a[half_len + i];
        a[half_len + i] = temp;
    }
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    gets(sentence); // Using gets for input

    swap_char(sentence);

    printf("Modified sentence: %s\n", sentence);

    return 0;
}
