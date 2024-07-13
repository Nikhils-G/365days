#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int total = 0;
    int sum = 0;
    
    // Calculate the sum of the first 100 natural numbers
    total = (100 * (100 + 1)) / 2;
    
    // Calculate the sum of the given array elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    // The missing number is the difference between the expected sum and the actual sum
    return total - sum;
}

int main() {
    int arr[99];

    // Read the elements of the array
    printf("Enter the 99 elements of the array: ");
    for (int i = 0; i < 99; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the missing number
    int missing = findMissingNumber(arr, 99);
    printf("The missing number is: %d\n", missing);

    return 0;
}
