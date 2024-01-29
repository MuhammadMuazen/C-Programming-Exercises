#include <stdio.h>

int main(void) {

	int p, r, t, simple_interest;

	printf("Input the principle: ");
	scanf("%d", &p);
	printf("Input the rate of interest: ");
	scanf("%d", &r);
	printf("Input the time (years): ");
	scanf("%d", &t);

	simple_interest = (p * r * t) / 100;

	printf("Simple interest = %d", simple_interest);

	return 0;
}
