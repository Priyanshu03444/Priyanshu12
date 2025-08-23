#include <stdio.h>

int main() {
    float gross, allowance, deduction, net;

    printf("Enter gross salary: ");
    scanf("%f", &gross);

    if (gross > 10000) {
        allowance = 0.10 * gross;   
        deduction = 0.03 * gross;  
    } else if (gross > 5000) {
        allowance = 0.07 * gross;   
        deduction = 0.02 * gross;   
    } else {
        allowance = 0.05 * gross;   
        deduction = 0.01 * gross;   
    }

    net = gross + allowance - deduction;

    printf("Gross Salary = %.2f\n", gross);
    printf("Allowance = %.2f\n", allowance);
    printf("Deduction = %.2f\n", deduction);
    printf("Net Salary = %.2f\n", net);

    return 0;
}
