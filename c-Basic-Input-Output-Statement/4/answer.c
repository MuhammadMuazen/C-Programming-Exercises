#include <stdio.h>

int main(void) {

	double kilometer; 

	printf("Input kilometers per hour: ");
	scanf("%lf", &kilometer);

	double miles = kilometer / 1.6093445;

	printf("%lf miles per hour\n", miles);

	return 0;
}
