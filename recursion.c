#include <stdio.h>

// Recursive function to calculate sum of numbers from 1 to n
int sum(int n) {
    // Base case: If n is 0, the sum is 0
    if (n == 0) {
        return 0;
    }
    // Recursive case: n + sum of (n-1)
    return n + sum(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Sum of first %d numbers is: %d\n", num, sum(num));
    
    return 0;
}
