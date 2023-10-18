#include <stdio.h>

// Recursive function to generate Fibonacci series
int fibonacci(int n) {
    // Base case
    if (n <= 1) {
        return n;
    } else {
        // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n = 10; // Change this value to generate Fibonacci numbers up to a different position
    printf("Fibonacci Series up to position %d:\n", n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    
    printf("\n");
    return 0;
}
