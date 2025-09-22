#include <stdio.h>

// Global variable
int globalVar = 20;

void function1() {
    int localVar = 5;  // Local variable
    printf("Inside function1, localVar = %d\n", localVar);
    printf("Inside function1, globalVar = %d\n", globalVar);
}

int main() {
    function1();

    // Trying to access localVar here will cause an error if uncommented
    // printf("In main, localVar = %d\n", localVar);

    printf("In main, globalVar = %d\n", globalVar);
    return 0;
}
