#include <stdio.h>

int main() {
    int subject1, subject2, subject3;
    float attendance;
    printf("Enter marks for Subject 1: ");
    scanf("%d", &subject1);
    printf("Enter marks for Subject 2: ");
    scanf("%d", &subject2);
    printf("Enter marks for Subject 3: ");
    scanf("%d", &subject3);
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);
    if (attendance >= 75) {
        if (subject1 >= 40 && subject2 >= 40 && subject3 >= 40) {
            printf("Result: Passed\n");
        } else {
            printf("Result: Failed due to low marks.\n");
        }
    } else {
        printf("Result: Failed due to low attendance.\n");
    }

    return 0;
}
