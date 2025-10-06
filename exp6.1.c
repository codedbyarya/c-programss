#include <stdio.h>

// Recursive factorial function
long long fact_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact_recursive(n - 1);
}

// Non-recursive factorial function
long long fact_non_recursive(int n) {
    long long result = 1;
    int i;
    for (i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate binomial coefficient
long long binomial_coefficient(int n, int r) {
    return fact_recursive(n) / (fact_recursive(r) * fact_recursive(n - r));
}

int main() {
    int n, r;
    
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);
    
    // Input validation
    if (n < 0 || r < 0 || r > n) {
        printf("Error: Invalid input. n and r must be non-negative and r <= n\n");
        return 1;
    }
    
    printf("\n--- Factorial Calculation ---\n");
    printf("Factorial of %d (recursive): %lld\n", n, fact_recursive(n));
    printf("Factorial of %d (non-recursive): %lld\n", n, fact_non_recursive(n));
    
    printf("\n--- Binomial Coefficient C(%d, %d) ---\n", n, r);
    printf("C(%d, %d) = %lld\n", n, r, binomial_coefficient(n, r));
    
    // Tabulate results for different values
    printf("\n--- Tabulation of Binomial Coefficients ---\n");
    printf("n\\r");
    for (r = 0; r <= n; r++) {
        printf("%8d", r);
    }
    printf("\n");
    
    for (int i = 0; i <= n; i++) {
        printf("%-3d", i);
        for (int j = 0; j <= i; j++) {
            if (j <= i) {
                printf("%8lld", binomial_coefficient(i, j));
            } else {
                printf("        "); // Empty space for invalid combinations
            }
        }
        printf("\n");
    }
    
    return 0;
}