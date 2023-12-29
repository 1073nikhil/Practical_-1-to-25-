#include <stdio.h>
int findLargest(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int arr[] = {10, 34, 23, 56, 78, 32, 97, 29, 44, 77};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = findLargest(arr, size);
    printf("The largest element in given  array is: %d", largest);

    return 0;
}
