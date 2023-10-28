#include <stdio.h>
int main() {

    int num1, num2;
    float result;
    char operator;

    printf("Operator [+,-,*,/]: ");
    scanf("%c", &operator);
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (operator) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / (float)num2;
        break;
    default:
        printf("invalid operation\n");
    }
    printf("Result: %d %c %d = %.2f \n", num1, operator, num2, result);

    return 0;
}