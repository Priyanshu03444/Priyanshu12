#include <stdio.h>

int main() {
    int num, largest, smallest;
    printf("Enter 100 numbers:\n");
    scanf("%d", &num); // Read the first number to initialize largest and smallest
    largest = num;
    smallest = num;
    for (int i = 1; i < 100; i++) {
        scanf("%d", &num);
        if (num > largest) {
            largest = num;
        }
        if (num < smallest) {
            smallest = num;
        }
    }
    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);
    return 0;
}
