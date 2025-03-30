#include <stdio.h>
void findSecondLargest(int arr[], int size) {
    int largest = -1, secondLargest = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }
    if (secondLargest == -1) {
        printf("-1\n");
    } else {
        printf("%d", secondLargest);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0) {
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