#include <stdio.h>

int main() {
    float num1, num2, result;

    
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    
    if (num2 != 0) {
        result = num1 / num2;
        printf("Quotient = %.2f\n", result);  // prints result up to 2 decimal places
    } else {
        printf("Error! Division by zero is not allowed.\n");
    }

    return 0;
}
