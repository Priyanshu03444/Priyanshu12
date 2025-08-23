#include <stdio.h>
int main() {
    int n, num, sum = 0;
    float mean;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }
    mean = sum / (float)n;
    printf("Sum = %d, Mean = %.2f\n", sum, mean);
    return 0;
}
