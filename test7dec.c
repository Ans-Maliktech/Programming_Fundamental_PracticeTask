#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if target is present at mid
        if (arr[mid] == target)
            return mid;

        // If target is greater, ignore the left half
        if (arr[mid] < target)
            low = mid + 1;

        // If target is smaller, ignore the right half
        else
            high = mid - 1;
    }

    // Target is not present in the array
    return -1;
}

int main() {
    int arr[10];
    int target, result;

    // Taking input from the user to populate the array
    printf("Enter 10 values for the array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array (Binary Search requires a sorted array)
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Prompting the user to enter the value to search for
    printf("Enter the value to search for: ");
    scanf("%d", &target);

    // Performing binary search
    result = binarySearch(arr, 10, target);

    // Displaying the result
    if (result != -1)
        printf("Element is present at index %d\n", result);
    else
        printf("Element is not present in the array\n");

    return 0;
}
