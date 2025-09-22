#include <stdio.h>
int main() {
    int L;
    printf("Enter limit: ");
    scanf("%d",&L);

    for(int a=1;a<=L;a++) {
        for(int b=a;b<=L;b++) {
            int sum1 = a*a*a + b*b*b;
            for(int c=a+1;c<=L;c++) {
                for(int d=c;d<=L;d++) {
                    int sum2 = c*c*c + d*d*d;
                    if(sum1 == sum2) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sum1,a,b,c,d);
                    }
                }
            }
        }
    }
    return 0;
}
