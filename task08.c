
#include <stdio.h>

int main() {

    // Id: 42260203340

    double num1, num2, result;
    char op;

    printf("Enter calculation: ");
    scanf("%lf %c %lf", &num1, &op, &num2);

    printf("============ Output =============\n");
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            }
            else {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
 