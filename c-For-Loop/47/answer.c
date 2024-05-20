#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int is_strong_number(int number) {
    int original_number = number;
    int sum = 0;
    int digit;

    for (; number != 0; number /= 10) {
        digit = number % 10;
        sum += factorial(digit);
    }

    return (sum == original_number);
}


int main() {

	int num = 0;

	printf("Input a number: ");
	scanf("%d", &num);

	if(is_strong_number(num))
		printf("%d is a Strong number\n");
	else
		printf("%d is not a strong number\n");

	return 0;
}
