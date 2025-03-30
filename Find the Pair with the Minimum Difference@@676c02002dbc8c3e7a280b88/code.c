#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers (used for sorting)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n, i, diff, minDiff;
    int ele1, ele2;

    scanf("%d", &n);

    int arr[n];
   
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array to ensure pairs are easily checked
    qsort(arr, n, sizeof(int), compare);

    // Initialize with a large value
    minDiff = __INT_MAX__;

    // Find the pair with the smallest difference
    for (i = 0; i < n - 1; i++) {
        diff = arr[i + 1] - arr[i];
        if (diff < minDiff) {
            minDiff = diff;
            ele1 = arr[i];
            ele2 = arr[i + 1];
        }
    }

    // Output the pair in ascending order
    printf("%d %d\n", ele1, ele2);

    return 0;
}