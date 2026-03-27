#include <stdio.h>
#include <ctype.h>

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
void displayMenu();

// Addition function
double add(double a, double b) {
    return a + b;
}

// Subtraction function
double subtract(double a, double b) {
    return a - b;
}

// Multiplication function
double multiply(double a, double b) {
    return a * b;
}

// Division function
double divide(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

// Display menu function
void displayMenu() {
    printf("\n========== CALCULATOR ==========\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Exit\n");
    printf("================================\n");
}

int main() {
    double num1, num2, result;
    int choice;
    char continueCalc;

    printf("Welcome to the Simple Calculator!\n");

    while (1) {
        displayMenu();
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        // Check for exit option
        if (choice == 5) {
            printf("Thank you for using the calculator. Goodbye!\n");
            break;
        }

        // Validate choice
        if (choice < 1 || choice > 5) {
            printf("Invalid choice! Please select 1-5.\n");
            continue;
        }

        // Get input numbers
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        // Perform calculation based on choice
        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                result = divide(num1, num2);
                if (num2 != 0) {
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                }
                break;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
