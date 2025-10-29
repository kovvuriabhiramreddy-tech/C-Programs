#include <stdio.h>

int main() {
    int choice, n;

    printf("Please select your destination:\n");
    printf("1. Kakinada\n2. Hyderabad\n3. Vizag\n4. Kurnool\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter number of tickets: ");
    scanf("%d", &n);

    switch (choice) {
        case 1:
            printf("\nYour destination is Kakinada\n");
            printf("Number of tickets: %d\n", n);
            printf("One ticket costs 60 rupees\n");
            printf("Total amount: %d rupees\n", n * 60);
            break;

        case 2:
            printf("\nYour destination is Hyderabad\n");
            printf("Number of tickets: %d\n", n);
            printf("One ticket costs 200 rupees\n");
            printf("Total amount: %d rupees\n", n * 200);
            break;

        case 3:
            printf("\nYour destination is Vizag\n");
            printf("Number of tickets: %d\n", n);
            printf("One ticket costs 150 rupees\n");
            printf("Total amount: %d rupees\n", n * 150);
            break;

        case 4:
            printf("\nYour destination is Kurnool\n");
            printf("Number of tickets: %d\n", n);
            printf("One ticket costs 180 rupees\n");
            printf("Total amount: %d rupees\n", n * 180);
            break;

        default:
            printf("\nInvalid choice. Please select a number between 1 and 4.\n");
            break;
    }

    return 0;
}
