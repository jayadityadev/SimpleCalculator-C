#include <stdio.h>

int main() {
    char operator;
    int num1, num2;

    printf("\nSimple Calculator Program!\n\n");
    printf("Addition: +\n");
    printf("Subtraction: -\n");
    printf("Multiplication: *\n");
    printf("Division: /\n");
    printf("Exit: q");

    while (1) {
        printf("\n\nTask: ");
        scanf(" %c", &operator);

        if (operator == 'q') {
            printf("\nExiting the program.\n\n");
            break;
        }

        if (operator == '+' || operator == '-' || operator == '*' || operator == '/') {
            printf("\nEnter first number: ");
            scanf("%d", &num1);
            printf("Enter second number: ");
            scanf("%d", &num2);

            if (operator == '+') {
                int sum = num1 + num2;
                printf("\nThe sum of %d and %d is %d.", num1, num2, sum);
            }
            else if (operator == '-') {
                int diff = num1 - num2;
                printf("\nThe difference of %d and %d is %d.", num1, num2, diff);
            }
            else if (operator == '*') {
                int product = num1 * num2;
                printf("\nThe product of %d and %d is %d.", num1, num2, product);
            }
            else if (operator == '/') {
                if (num2 != 0) {
                    float quotient = (float)num1 / num2;
                    printf("\nThe quotient of %d and %d is %.3f.", num1, num2, quotient);
                } else {
                    printf("\nError: Division by zero is not allowed.");
                }
            }
        } else {
            printf("\nError: Invalid operator '%c'. Please enter one of '+', '-', '*', '/', or 'q' to exit.", operator);
        }
    }

    return 0;
}
