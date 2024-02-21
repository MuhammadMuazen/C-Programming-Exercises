#include <stdio.h>

int main(void) {

	double a1, a2;

	printf("Input two angles of triangle separated by comma: ");
	scanf("%lf,%lf", &a1, &a2);

	double third_angle = 180 - (a1 + a2);

	if(third_angle > 0)
		printf("Third angle of the triangle: %.0lf", third_angle);
	else
		printf("Error\n");

	return 0;
}
