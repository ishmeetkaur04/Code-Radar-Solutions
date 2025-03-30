#include <stdio.h>

int main() {
    int n, i, diff, minDiff;

    printf("Enter the number of elements in ascending order: ");
    scanf("%d", &n);

    if (n == 1) {
        // If array contains only one element
        printf("-1\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

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