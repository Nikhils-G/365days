#include <stdio.h>

int findMajority(int arr[], int n) {
    int candidate = arr[0], count = 1;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] == candidate)
            count++;
        else
            count--;
        
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
    }
    
    // Verify if it's a majority element
    count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == candidate)
            count++;

    return (count > n / 2) ? candidate : -1;
}

int main() {
    int arr[] = {3, 3, 4, 2, 3, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findMajority(arr, n);
    if (result != -1)
        printf("Majority Element: %d\n", result);
    else
        printf("No Majority Element\n");

    return 0;
}
