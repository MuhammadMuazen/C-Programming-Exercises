#include <stdio.h>

int main(void) {

	int a, b;

	printf("Input any two numbers separated by comma: ");
	scanf("%d,%d", &a, &b);

	printf("The sum of the given numbers: %d\n", a + b);
	printf("The difference of the given numbers: %d\n", a - b);
	printf("The product of the given numbers: %d\n", a * b);
	printf("The quotient of the given numbers: %lf\n", (double)a / b);

	return 0;
}
