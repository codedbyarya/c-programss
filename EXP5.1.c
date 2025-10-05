// second_largest.c
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) scanf("%d", &arr[i]);

    if (n == 1) {
        printf("Only one element present. No second largest.\n");
        return 0;
    }

    int largest = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; ++i) {
        int x = arr[i];
        if (x > largest) {
            second = largest;
            largest = x;
        } else if (x > second && x < largest) {
            second = x;
        }
    }

    if (second == INT_MIN) {
        // Could be all equal or only one distinct value
        printf("No distinct second largest (all elements may be equal).\n");
    } else {
        printf("Second largest element is: %d\n", second);
    }
    return 0;
}
