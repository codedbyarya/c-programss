#include <stdio.h>

void counterFunction() {
    static int count = 0; // Static local variable
    count++;
    printf("count = %d\n", count);
}

int main() {
    counterFunction();
    counterFunction();
    counterFunction();
    return 0;
}
