#include <stdio.h>

// Structure for complex number
struct Complex {
    float real;
    float imag;
};

// Function to read a complex number
struct Complex readComplex() {
    struct Complex c;
    printf("Enter real and imaginary parts: ");
    scanf("%f %f", &c.real, &c.imag);
    return c;
}

// Function to print a complex number
void displayComplex(struct Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
struct Complex subComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

int main() {
    struct Complex c1, c2, sum, diff;

    printf("Enter first complex number:\n");
    c1 = readComplex();
    printf("Enter second complex number:\n");
    c2 = readComplex();

    sum = addComplex(c1, c2);
    diff = subComplex(c1, c2);

    printf("\nSum = ");
    displayComplex(sum);
    printf("Difference = ");
    displayComplex(diff);

    return 0;
}
