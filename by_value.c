#include <stdio.h>

// Function to add 10 to the number
void addTen(int n) {
    n = n + 10;
    printf("Inside function, n = %d\n", n);
}

int main() {
    int x = 5;
    printf("Before function call, x = %d\n", x);
    
    addTen(x);  // Passing a copy of x
    
    printf("After function call, x = %d\n", x);
    
    return 0;
}
