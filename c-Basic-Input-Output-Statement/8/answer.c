#include <stdio.h>

int main(void) {

	int a, b, c;

	printf("Input three numbers separated by comma: ");
	scanf("%d,%d,%d", &a, &b, &c);

	printf("The sum of three numbers: %d\n", a + b + c);

	return 0;
}
