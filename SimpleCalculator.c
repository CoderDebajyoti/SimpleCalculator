#include <stdio.h>

int main() {
    char operator;
    double firstNumber, secondNumber, result;

    // User input
    printf("Enter first number: ");
    scanf("%lf", &firstNumber);
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

    return 0;
}

