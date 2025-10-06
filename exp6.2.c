#include <stdio.h>

// Recursive GCD function using Euclidean algorithm
int GCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}

int main() {
    int num1, num2;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    // Handle negative numbers by taking absolute values
    int a = (num1 < 0) ? -num1 : num1;
    int b = (num2 < 0) ? -num2 : num2;
    
    int result = GCD(a, b);
    
    printf("GCD of %d and %d is: %d\n", num1, num2, result);
    
    // Verification
    printf("\nVerification:\n");
    printf("%d ÷ %d = %d with remainder %d\n", 
           a, result, a/result, a%result);
    printf("%d ÷ %d = %d with remainder %d\n", 
           b, result, b/result, b%result);
    
    return 0;
}