#include <stdio.h>
#include <math.h>

int main(void) {
	
	double a, b, c;

	printf("Input a: ");
	scanf("%lf", &a);
	printf("Input b: ");
	scanf("%lf", &b);
	printf("Input c: ");
	scanf("%lf", &c);

	if((b * b) - 4 * a * c < 0)
		printf("Root are imaginary!\nNo Solution.\n");
	else {
		double x1 = -b + sqrt((b * b) - 4 * a * c);
		double x2 = -b - sqrt((b * b) - 4 * a * c);
		
		printf("The first solution is %lf\n", x1);
		printf("The second solution is %lf\n", x2);
	}

	return 0;
}
