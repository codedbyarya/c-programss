#include <stdio.h>
int main() {
    int a = 10;
    float b = 20.5;
    char c = 'A';

    int *ip = &a;
    float *fp = &b;
    char *cp = &c;

    printf("Address of a: %p, Value: %d\n", ip, *ip);
    printf("Address of b: %p, Value: %.2f\n", fp, *fp);
    printf("Address of c: %p, Value: %c\n", cp, *cp);

    return 0;
}
