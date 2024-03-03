#include <stdio.h>
#include <stdlib.h>

int closestNumber(int N, int M) {
    // Find the quotient
    int quotient = N / M;
    
    // Find the first possible closest number
    int closest1 = M * quotient;
    
    // Find the second possible closest number
    int closest2 = (N * M > 0) ? (M * (quotient + 1)) : (M * (quotient - 1));
    
    // Choose the closest number with maximum absolute value
    if (abs(N - closest1) < abs(N - closest2))
        return closest1;
    else
        return closest2;
}

int main() {
    int N, M;
    printf("Enter two integers N and M: ");
    scanf("%d %d", &N, &M);
    
    int result = closestNumber(N, M);
    printf("The closest number to %d and divisible by %d is: %d\n", N, M, result);
    
    return 0;
}
