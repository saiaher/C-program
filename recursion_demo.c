#include <stdio.h>
#include <math.h>


// Function prototypes
int factorial(int n);
int gcd(int a, int b);
int fibonacci(int n);
double power(double base, int exponent);
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod);
void printArray(int arr[], int size);
int binarySearch(int arr[], int left, int right, int target);
int sumOfDigits(int n);


int main() {
    int choice, num, num1, num2, n, result;
    double base, result_power;
    
    printf("=== Recursion Demonstration Program ===\n\n");
    
    // Factorial Example
    printf("1. Factorial Calculation\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d = %d\n\n", num, factorial(num));
    
    // GCD Example
    printf("2. GCD Calculation\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("GCD of %d and %d = %d\n\n", num1, num2, gcd(num1, num2));
    
    // Fibonacci Example
    printf("3. Fibonacci Sequence\n");
    printf("Enter the position: ");
    scanf("%d", &n);
    printf("Fibonacci at position %d = %d\n", n, fibonacci(n));
    printf("Fibonacci series up to %d: ", n);
    for(int i = 0; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n\n");
    
    // Power Calculation
    printf("4. Power Calculation\n");
    printf("Enter base and exponent: ");
    scanf("%lf %d", &base, &num);
    result_power = power(base, num);
    printf("%.2f^%d = %.2f\n\n", base, num, result_power);
    
    // Tower of Hanoi
    printf("5. Tower of Hanoi\n");
    printf("Enter number of disks: ");
    scanf("%d", &n);
    printf("Steps to solve Tower of Hanoi with %d disks:\n", n);
    towerOfHanoi(n, 'A', 'C', 'B');
    printf("\n");
    
    // Binary Search
    printf("6. Binary Search\n");
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 67, 89};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 23;
    printf("Array: ");
    printArray(arr, size);
    printf("Searching for %d...\n", target);
    result = binarySearch(arr, 0, size-1, target);
    if(result != -1)
        printf("Element found at index %d\n\n", result);
    else
        printf("Element not found\n\n");
    
    // Sum of Digits
    printf("7. Sum of Digits\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d = %d\n\n", num, sumOfDigits(num));
    
    return 0;
}


// 1. Factorial using recursion
int factorial(int n) {
    // Base case
    if(n == 0 || n == 1)
        return 1;
    // Recursive case
    else
        return n * factorial(n - 1);
}


// 2. GCD using recursion (Euclidean algorithm)
int gcd(int a, int b) {
    // Base case
    if(b == 0)
        return a;
    // Recursive case
    else
        return gcd(b, a % b);
}


// 3. Fibonacci using recursion
int fibonacci(int n) {
    // Base cases
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    // Recursive case
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}


// 4. Power calculation using recursion
double power(double base, int exponent) {
    // Base case
    if(exponent == 0)
        return 1;
    // For negative exponents
    if(exponent < 0)
        return 1 / power(base, -exponent);
    // Recursive case
    else
        return base * power(base, exponent - 1);
}


// 5. Tower of Hanoi using recursion
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    // Base case
    if(n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }
    
    // Move n-1 disks from source to auxiliary rod
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    
    // Move the nth disk from source to destination rod
    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
    
    // Move n-1 disks from auxiliary to destination rod
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}


// 6. Binary Search using recursion
int binarySearch(int arr[], int left, int right, int target) {
    // Base case
    if(left > right)
        return -1;
    
    int mid = left + (right - left) / 2;
    
    // If element is present at middle
    if(arr[mid] == target)
        return mid;
    
    // If element is smaller than mid, search left subarray
    if(arr[mid] > target)
        return binarySearch(arr, left, mid - 1, target);
    
    // Else search right subarray
    return binarySearch(arr, mid + 1, right, target);
}


// 7. Sum of digits using recursion
int sumOfDigits(int n) {
    // Base case
    if(n == 0)
        return 0;
    // Recursive case
    else
        return (n % 10) + sumOfDigits(n / 10);
}


// Utility function to print array
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

