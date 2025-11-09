#include <stdio.h>

struct Employee {
    char name[50];
    float basicPay;
    float grossSalary;
};

int main() {
    struct Employee e[100];
    int n, i;
    float da;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("\nEnter name of employee %d: ", i+1);
        scanf("%s", e[i].name);
        printf("Enter basic pay: ");
        scanf("%f", &e[i].basicPay);

        da = 0.52 * e[i].basicPay;
        e[i].grossSalary = e[i].basicPay + da;
    }

    printf("\nEmployee Name\tGross Salary\n");
    for(i=0; i<n; i++) {
        printf("%s\t\t%.2f\n", e[i].name, e[i].grossSalary);
    }

    return 0;
}
