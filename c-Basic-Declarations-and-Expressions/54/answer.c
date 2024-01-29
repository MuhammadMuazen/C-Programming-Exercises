#include <stdio.h>

#define INCH_TO_CM 2.54

int main(void) {

	double input_cm;

	printf("Input the data in cm: ");
	scanf("%lf", &input_cm);

	double inch = input_cm / INCH_TO_CM;

	printf("Distance of %.2lf cms is = %.2lf inches", input_cm, inch);

	return 0;
}

