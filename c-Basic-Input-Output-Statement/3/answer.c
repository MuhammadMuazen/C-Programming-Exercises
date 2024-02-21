#include <stdio.h>

int main(void) {

	double height, width;

	printf("Input the height of the Rectangle: ");
	scanf("%lf", &height);
	printf("Input the width of the Rectangle: ");
	scanf("%lf", &width);

	double perimeter = 2 * (height + width);

	printf("Perimeter of the Rectangle is: %lf\n", perimeter);

	return 0;
}
