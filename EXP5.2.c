// count_pos_neg_odd_even.c
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int x;
    int pos = 0, neg = 0, zero = 0, even = 0, odd = 0;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &x);
        if (x > 0) pos++;
        else if (x < 0) neg++;
        else zero++;

        if (x % 2 == 0) even++;
        else odd++;
    }

    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    printf("Zero: %d\n", zero);
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);

    return 0;
}
