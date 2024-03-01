# Here's a simple C program to find the maximum of all subarrays of size k
#include <stdio.h>

// Function to find the maximum of all subarrays of size k
void maxOfSubarrays(int arr[], int n, int k) {
    int i, j, max;

    for (i = 0; i <= n - k; i++) {
        max = arr[i];

        for (j = 1; j < k; j++) {
            if (arr[i + j] > max) {
                max = arr[i + j];
            }
        }

        printf("%d ", max);
    }

    printf("\n");
}

// Driver program
int main() {
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printf("Maximum of all subarrays of size %d: ", k);
    maxOfSubarrays(arr, n, k);

    return 0;
}
