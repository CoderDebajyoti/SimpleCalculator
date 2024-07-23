#include <stdio.h>

int main() {
    char operator;
    double firstNumber, secondNumber, result;

    // User input for the first number
    printf("Enter first number: ");
    scanf("%lf", &firstNumber);

    while (1) {
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
                    continue; // Skip updating firstNumber and repeat the loop
                }
                break;
            default:
                printf("Error: Invalid operator. Exiting.\n");
                return 1; // Exit the program if an invalid operator is entered
        }

        // Store the result in firstNumber for the next calculation
        firstNumber = result;
    }

    return 0;
}

