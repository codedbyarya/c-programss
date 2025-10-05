// frequency.c
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid size.\n");
        return 1;
    }

    if (n == 0) {
        printf("Array empty. Frequency is 0.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) scanf("%d", &arr[i]);

    int target;
    printf("Enter number to find frequency of: ");
    scanf("%d", &target);

    int count = 0;
    for (int i = 0; i < n; ++i)
        if (arr[i] == target) count++;

    printf("Frequency of %d is: %d\n", target, count);
    return 0;
}
