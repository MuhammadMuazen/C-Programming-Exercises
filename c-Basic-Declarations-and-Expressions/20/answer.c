#include <stdio.h>
#include <math.h>

int main(void){

	float a, b, c;

	printf("Input the first number(a): ");
	scanf("%f", &a);
	printf("Input the second number(b): ");
	scanf("%f", &b);
	printf("Input the third number(c): ");
	scanf("%f", &c);

	float x1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
	float x2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

	printf("Root1 = %f\n", x1);
	printf("Root2 = %f\n", x2);

	return 0;
}

