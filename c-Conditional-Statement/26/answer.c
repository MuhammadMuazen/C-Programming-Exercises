#include <stdio.h>

int main() {

	int op, fn, sn;
	double result = 0;

	printf("Input 1 for adding\n");
	printf("Input 2 for subtraction\n");
	printf("Input 3 for Multiplication\n");
	printf("Input 4 for Division\n");
	printf("Input the opertation Number: ");
	scanf("%d", &op);
	printf("Input the first number: ");
	scanf("%d", &fn);
	printf("Input the second number: ");
	scanf("%d", &sn);

	if(op == 1) {
		result = fn + sn;
		printf("The Adding of %d and %d is: %.0f", fn, sn, result);
	}
	else if(op == 2) {
		result = fn - sn;
		printf("The Substraction of %d and %d is %.0f", fn, sn, result);
	}
	else if(op == 3) {
		result = fn * sn;
		printf("The Multiplication of %d and %d is %0.f", fn, sn, result);
	}
	else if(op == 4) {
		if(sn == 0) {
			printf("Division with zero!!!!\n");
			return -1;
		}

		result = (double)fn/sn;
		printf("The Division of %d and %d is %0.2f", fn, sn, result);
	}

	return 0;
}
