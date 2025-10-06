#include <stdio.h>

// Recursive Fibonacci function
int FIBO(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return FIBO(n - 1) + FIBO(n - 2);
}

// Non-recursive version for comparison
void fibonacci_non_recursive(int n) {
    int first = 0, second = 1, next, i;
    
    printf("Non-recursive Fibonacci: ");
    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int num, i;
    
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }
    
    printf("Fibonacci sequence up to %d terms (recursive):\n", num);
    for (i = 0; i < num; i++) {
        printf("F(%d) = %d\n", i, FIBO(i));
    }
    
    printf("\nFibonacci sequence: ");
    for (i = 0; i < num; i++) {
        printf("%d ", FIBO(i));
    }
    printf("\n");
    
    // Compare with non-recursive version
    printf("\n");
    fibonacci_non_recursive(num);
    
    return 0;
}