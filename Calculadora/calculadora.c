#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void Addition(int X, int Y) {
    int sum = X + Y;
    printf("Result: %d + %d = %d\n", X, Y, sum);
}

void Subtraction(int X, int Y) {
    int diference = X - Y;
    printf("Result: %d - %d = %d\n", X, Y, diference);
}

void Multiplication(int X, int Y) {
    int multiply = X * Y;
    printf("Result: %d * %d = %d\n", X, Y, multiply);
}

void Division(int X, int Y) {
    if (Y == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return;
    }
    float divide = (float)X / Y;
    printf("Result: %d / %d = %.2f\n", X, Y, divide);
}

int main() {
    while (true) {
        printf("\n===============================\n");
        printf("       Simple Calculator\n");
        printf("===============================\n");
        printf("Select an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        int Option;
        printf("Option: ");
        if (scanf("%d", &Option) != 1) {
            break;
        }

        if (Option == 5) {
            printf("Thank you for using the calculator! See you next time.\n");
            break;
        }

        if (Option < 1 || Option > 5) {
            printf("Invalid option! Please try again.\n");
            continue;
        }

        int first_number, second_number;
        printf("Enter the first number: ");
        scanf("%d", &first_number);

        printf("Enter the second number: ");
        scanf("%d", &second_number);

        switch (Option) {
            case 1:
                Addition(first_number, second_number);
                break;
            case 2:
                Subtraction(first_number, second_number);
                break;
            case 3:
                Multiplication(first_number, second_number);
                break;
            case 4:
                Division(first_number, second_number);
                break;
        }

        char Operation;
        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &Operation);

        if (Operation != 'y' && Operation != 'Y') {
            printf("Thank you for using the calculator! See you next time.\n");
            break;
        }
    }

    return 0;
}