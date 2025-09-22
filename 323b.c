#include <stdio.h>

int fact(int n) {
    int f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}
int nCr(int n, int r) {
    return fact(n)/(fact(r)*fact(n-r));
}

int main() {
    for(int i=0;i<5;i++) {
        for(int j=0;j<=i;j++) {
            printf("%d ", nCr(i,j));
        }
        printf("\n");
    }
    return 0;
}
