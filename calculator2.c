#include <stdio.h>

int main() {
    char operator;
    double firstNumber, secondNumber, result;
    char choice;

    // User input for the first number
    printf("Enter first number: ");
    scanf("%lf", &firstNumber);

    do {
        // User input for operator and second number
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator); // Note the space before %c to consume any leftover whitespace
        printf("Enter second number: ");
        scanf("%lf", &secondNumber);

        // Perform the operation
        switch (operator) {
            case '+':
                result = firstNumber + secondNumber;
                printf("Result: %.2lf + %.2lf = %.2lf\n", firstNumber, secondNumber, result);
                break;
            case '-':
                result = firstNumber - secondNumber;
                printf("Result: %.2lf - %.2lf = %.2lf\n", firstNumber, secondNumber, result);
                break;
            case '*':
                result = firstNumber * secondNumber;
                printf("Result: %.2lf * %.2lf = %.2lf\n", firstNumber, secondNumber, result);
                break;
            case '/':
                if (secondNumber != 0) {
                    result = firstNumber / secondNumber;
                    printf("Result: %.2lf / %.2lf = %.2lf\n", firstNumber, secondNumber, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Error: Invalid operator.\n");
                break;
        }

        // Store the result in firstNumber for the next calculation
        firstNumber = result;

        // Ask if the user wants to perform another calculation
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice); // Note the space before %c to consume any leftover whitespace

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

