#include <stdio.h>

int main() {
    int number, digit;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The digits are: ");
    
    
    if (number == 0) {
        printf("0");
    }

    
    if (number < 0) {
        number = -number; 
    }

    
    int reversed_number = 0;
    while (number != 0) {
        digit = number % 10;
        reversed_number = reversed_number * 10 + digit;
        number /= 10;
    }
    
    
    while (reversed_number != 0) {
        digit = reversed_number % 10;
        printf("%d ", digit);
        reversed_number /= 10;
    }

    printf("\n");

    return 0;
}
