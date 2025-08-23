#include <stdio.h>

int main() {
    int m1, m2, m3, total;
    float average;

    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    
    if (m1 < 35 || m2 < 35 || m3 < 35) {
        printf("Result: Fail (less than 35 in a subject)\n");
    } else {
        total = m1 + m2 + m3;
        average = total / 3.0;

        printf("Total = %d\n", total);
        printf("Average = %.2f\n", average);

        if (average >= 70)
            printf("Grade: Distinction\n");
        else if (average >= 60)
            printf("Grade: First Class\n");
        else if (average >= 50)
            printf("Grade: Second Class\n");
        else if (average >= 35)
            printf("Grade: Third Class\n");
        else
            printf("Result: Fail\n");
    }

    return 0;
}
    