// matrix_multiply.c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, p, q;
    printf("Enter rows and cols of matrix A (m n): ");
    if (scanf("%d %d", &m, &n) != 2 || m <= 0 || n <= 0) {
        printf("Invalid dimensions for A.\n");
        return 1;
    }
    printf("Enter rows and cols of matrix B (p q): ");
    if (scanf("%d %d", &p, &q) != 2 || p <= 0 || q <= 0) {
        printf("Invalid dimensions for B.\n");
        return 1;
    }

    if (n != p) {
        printf("Incompatible matrices for multiplication (A is %dx%d, B is %dx%d). Need n == p.\n", m, n, p, q);
        return 0;
    }

    // allocate matrices
    int **A = malloc(m * sizeof(int*));
    int **B = malloc(p * sizeof(int*));
    int **C = malloc(m * sizeof(int*));
    for (int i = 0; i < m; ++i) A[i] = malloc(n * sizeof(int));
    for (int i = 0; i < p; ++i) B[i] = malloc(q * sizeof(int));
    for (int i = 0; i < m; ++i) C[i] = malloc(q * sizeof(int));

    printf("Enter elements of A (row major) - %d elements:\n", m*n);
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &A[i][j]);

    printf("Enter elements of B (row major) - %d elements:\n", p*q);
    for (int i = 0; i < p; ++i)
        for (int j = 0; j < q; ++j)
            scanf("%d", &B[i][j]);

    // initialize C to 0
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < q; ++j)
            C[i][j] = 0;

    // multiply: C = A x B
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < q; ++j) {
            for (int k = 0; k < n; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // print A
    printf("\nMatrix A (%dx%d):\n", m, n);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) printf("%d\t", A[i][j]);
        printf("\n");
    }

    // print B
    printf("\nMatrix B (%dx%d):\n", p, q);
    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < q; ++j) printf("%d\t", B[i][j]);
        printf("\n");
    }

    // print C
    printf("\nProduct Matrix C = A x B (%dx%d):\n", m, q);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < q; ++j) printf("%d\t", C[i][j]);
        printf("\n");
    }

    // free memory
    for (int i = 0; i < m; ++i) free(A[i]);
    for (int i = 0; i < p; ++i) free(B[i]);
    for (int i = 0; i < m; ++i) free(C[i]);
    free(A); free(B); free(C);

    return 0;
}
