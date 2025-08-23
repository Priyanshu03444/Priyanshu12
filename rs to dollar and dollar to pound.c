#include <stdio.h>

int main() {
    float dollar, rupees, pounds;

    printf("Enter amount in dollars: ");
    scanf("%f", &dollar);
    rupees = dollar * 48;

    pounds = rupees / 70;

    printf("%.2f Dollar = %.2f Pounds\n", dollar, pounds);

    return 0;
}
