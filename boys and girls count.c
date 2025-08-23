#include <stdio.h>

int main() {
    char gender_code;
    int boys_count = 0;
    int girls_count = 0;
    printf("Enter gender code for 50 students (M for male, F for female):\n");
    for (int i = 0; i < 50; i++) {
        scanf(" %c", &gender_code);
        if (gender_code == 'M' || gender_code == 'm') {
            boys_count++;
        } else if (gender_code == 'F' || gender_code == 'f') {
            girls_count++;
        }
    }
    printf("Number of boys: %d\n", boys_count);
    printf("Number of girls: %d\n", girls_count);
    return 0;
}
