#include <stdio.h>
void findSecondLargest(int arr[], int size) {
    if (size == 1) { 
        printf("-1\n");
        return;
    }
    int largest = -2147483648, secondLargest = -2147483648; // Initialize to minimum value of int

    // Traverse the array to find the largest and second largest
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    // Print the second largest or -1 if no second largest exists
    if (secondLargest == -2147483648) {
        printf("-1\n");
    } else {
        printf("%d\n", secondLargest);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) { 
        // Handle invalid size
        printf("-1\n");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findSecondLargest(arr, n);
    return 0;
}