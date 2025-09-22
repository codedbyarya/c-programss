#include <stdio.h>

int main() {
    int x = 10;  // Declared in main

    {
        int y = 20;  // Declared inside block
        printf("Inside block: x = %d, y = %d\n", x, y);
    }

    // printf("Outside block: y = %d\n", y); // ❌ Error: y not accessible here
    printf("Outside block: x = %d\n", x);

    return 0;
}
