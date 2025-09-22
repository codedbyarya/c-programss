#include <stdio.h>

// Global variable
int globalVar = 10;

void function1() {
    printf("Inside function1, globalVar = %d\n", globalVar);
}

void function2() {
    printf("Inside function2, globalVar = %d\n", globalVar);
}

int main() {
    printf("Inside main, globalVar = %d\n", globalVar);
    function1();
    function2();
    return 0;
}
