#include <stdio.h>

int main() {
    int unsort[10];
    printf("Enter your array values\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &unsort[i]);
    }

    // Insertion Sort
    for (int i = 1; i < 10; i++) {
        int key = unsort[i];
        int j = i - 1;
        // Move elements of unsort[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && unsort[j] > key) {
            unsort[j + 1] = unsort[j];
            j = j - 1;
        }
        unsort[j + 1] = key;
    }

    printf("Your sorted array is:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", unsort[i]);
    }

    return 0;
}
