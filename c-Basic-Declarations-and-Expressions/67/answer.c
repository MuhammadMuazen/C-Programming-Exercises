#include <stdio.h>
#include <math.h>

int main(void) {
	
	double x, n, y;

	printf("Input the values of x and n: ");
	scanf("%lf%lf", &x, &n);
	
	if(n >= 0) {
		printf("x = %lf\n", x);
		printf("n = %lf\n", n);
		
		y = pow(x, n);

		printf("x to powen n = %lf\n", y);
	}
	else 
		printf("Please enter a vlaid values!\n");

	return 0;
}
