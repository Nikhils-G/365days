#include <stdio.h>

void findOddEvenSum(int arr[], int n, int *oddSum, int *evenSum) {
    // Initialize sums to zero
    *oddSum = 0;
    *evenSum = 0;

    // Loop through the array and add to respective sums
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            *evenSum += arr[i];
        } else {
            *oddSum += arr[i];
        }
    }
}

int main() {
    int N;

    // Read the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];

    // Read the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int oddSum, evenSum;

    // Calculate the sums of odd and even numbers
    findOddEvenSum(arr, N, &oddSum, &evenSum);

    // Print the sums
    printf("%d %d\n", oddSum, evenSum);

    return 0;
}
