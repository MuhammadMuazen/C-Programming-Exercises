#include <stdio.h>
#include <stdlib.h>

int evaluateExpression(char expression[]) {
    int result = 0;
    int i = 0;
    int sign = 1;
    int num = 0;

    while (expression[i] != '\0') {
        if (expression[i] >= '0' && expression[i] <= '9') {
            // Handle digits
            num = num * 10 + (expression[i] - '0');
        } else if (expression[i] == '+' || expression[i] == '-') {
            // Apply the previous number to the result
            result += sign * num;
            num = 0;
            sign = (expression[i] == '+') ? 1 : -1;
        } else if (expression[i] == '*' || expression[i] == '/') {
            // Handle multiplication and division
            int nextNum = 0;
            int j = i + 1;

            while (expression[j] >= '0' && expression[j] <= '9') {
                nextNum = nextNum * 10 + (expression[j] - '0');
                j++;
            }

            if (expression[i] == '*') {
                num *= nextNum;
            } else if (expression[i] == '/') {
                if (nextNum != 0) {
                    num /= nextNum;
                } else {
                    printf("Error: Division by zero\n");
                    exit(1);
                }
            }
            i = j - 1;
        }

        i++;
    }

    // Apply the final number to the result
    result += sign * num;

    return result;
}

int main() {
    char expression[100];

    printf("Input an expression using +, -, *, / operators:\n");
    fgets(expression, sizeof(expression), stdin);

    int result = evaluateExpression(expression);
    printf("%d\n", result);

    return 0;
}