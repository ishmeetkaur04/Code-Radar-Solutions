#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers (used for sorting)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n, i, diff, minDiff;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    if (n == 1) {
        // If array contains only one element
        printf("-1\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array to simplify finding the smallest difference
    qsort(arr, n, sizeof(int), compare);

    // Initialize with a large value
    minDiff = __INT_MAX__;

    // Find the smallest absolute difference
    for (i = 0; i < n - 1; i++) {
        diff = arr[i + 1] - arr[i];
        if (diff < minDiff) {
            minDiff = diff;
        }
    }

    // Output the smallest absolute difference
    printf("Smallest absolute difference: %d\n", minDiff);

    return 0;
}