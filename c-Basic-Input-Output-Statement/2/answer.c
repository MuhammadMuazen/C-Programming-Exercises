#include <stdio.h>

#define PI 3.14159265358979323846

int main(void) {

	double radius;

	printf("Input the radius of the sphere: ");
	scanf("%lf", &radius);

	double volume = 4 / 3 *PI * (radius * radius * radius);

	printf("The volume of sphere is %lf\n", volume);

	return 0;
}
