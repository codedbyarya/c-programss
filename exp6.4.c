#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int ISPRIME(int num) {
    int i;
    
    // Numbers less than 2 are not prime
    if (num < 2)
        return 0;
    
    // Check for divisibility from 2 to square root of num
    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    
    return 1;
}

int main() {
    int start, end, i, count = 0;
    
    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);
    
    if (start > end) {
        printf("Error: Start should be less than or equal to end.\n");
        return 1;
    }
    
    printf("Prime numbers between %d and %d are:\n", start, end);
    
    for (i = start; i <= end; i++) {
        if (ISPRIME(i)) {
            printf("%d ", i);
            count++;
            
            // Print 10 numbers per line
            if (count % 10 == 0)
                printf("\n");
        }
    }
    
    printf("\n\nTotal prime numbers found: %d\n", count);
    
    // Additional: Verify some numbers
    printf("\nPrime verification for sample numbers:\n");
    int test_numbers[] = {2, 3, 4, 17, 25, 29};
    int size = sizeof(test_numbers) / sizeof(test_numbers[0]);
    
    for (i = 0; i < size; i++) {
        int num = test_numbers[i];
        printf("ISPRIME(%d) = %d\n", num, ISPRIME(num));
    }
    
    return 0;
}