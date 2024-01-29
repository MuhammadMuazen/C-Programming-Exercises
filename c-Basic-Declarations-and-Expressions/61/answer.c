#include <stdio.h>
#include <math.h>

int main(void) {

	double x;

	printf("Input the value of x: ");
	scanf("%lf", &x);

	double sin_x = sin(1/x);

	printf("Value of sin(1/x) is %.4lf\n", sin_x);

	return 0;
}
