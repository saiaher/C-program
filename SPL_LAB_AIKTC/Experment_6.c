#include <stdio.h>   // Header file for standard input and output functions


// Function: main()
// Description: Program to sort an array in ascending order using Bubble Sort
int main() {
    int arr[100], n, i, j, temp;


    // Step 1: Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);


    // Step 2: Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    // Step 3: Bubble Sort logic
    // In each pass, largest element "bubbles up" to the end
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    // Step 4: Display sorted array
    printf("\nArray in Ascending Order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    printf("\n"); // Print a newline for better output format


    return 0; // End of program
}
