#include <stdio.h>
int main() {
    int a = 10;
    int *p = &a;

    printf("Original address: %p\n", p);
    p++; // Move to next integer location
    printf("After increment: %p\n", p);
    p--;
    printf("After decrement: %p\n", p);

    float b = 3.14;
    float *q = &b;
    printf("\nOriginal address: %p\n", q);
    q++;
    printf("After increment: %p\n", q);
    return 0;
}
