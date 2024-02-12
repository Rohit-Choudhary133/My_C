#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is negative
    if (number < 0) {
        printf("Error: Negative number entered.\n");
        goto end_program;  // Jump to the end_program label
    }

    // Check if the number is zero
    if (number == 0) {
        printf("Error: Zero entered.\n");
        goto end_program;  // Jump to the end_program label
    }

    // Display the reciprocal of the positive number
    printf("Reciprocal: %f\n", 1.0 / number);

    // The end_program label
    end_program:
    printf("Program ended.\n");

    return 0;
}
