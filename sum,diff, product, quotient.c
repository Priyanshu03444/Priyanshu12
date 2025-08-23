#include <stdio.h>

int main() {
    float num1, num2;  
    float sum, diff, product, quotient;

    
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;

    
    if (num2 != 0) {
        quotient = num1 / num2;
        printf("\nResults:\n");
        printf("Addition = %.2f\n", sum);
        printf("Subtraction = %.2f\n", diff);
        printf("Multiplication = %.2f\n", product);
        printf("Division = %.2f\n", quotient);
    } else {
        printf("\nResults:\n");
        printf("Addition = %.2f\n", sum);
        printf("Subtraction = %.2f\n", diff);
        printf("Multiplication = %.2f\n", product);
        printf("Division = Error! Division by zero.\n");
    }

    return 0;
}
