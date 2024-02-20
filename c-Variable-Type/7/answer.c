#include <stdio.h>

int main(void) {

	int numerator, denominator;

	printf("Input numerator: ");
	scanf("%d", &numerator);
	printf("Input denominator: ");
	scanf("%d", &denominator);

	int quotient = numerator / denominator;
	int remainder = numerator % denominator;

	printf("quotient = %d\n", quotient);
	printf("remainder = %d\n", remainder);

	return 0;
}
