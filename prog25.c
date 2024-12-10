Simple calculator
#include <stdio.h>

int main() {
    float num1, num2;
    char operator;
    printf("Simple Calculator\n");
    printf("Enter an operation in the format: number1 operator number2\n");
    printf("Example: 5.5 + 3.2\n\n");
    printf("Enter your calculation: ");
    scanf("%f %c %f", &num1, &operator, &num2);
    switch (operator) {
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %.2f\n", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator. Please use +, -, *, or /.\n");
    }

    return 0;
}
