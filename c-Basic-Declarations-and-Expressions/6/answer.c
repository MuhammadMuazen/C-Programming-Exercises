#include <stdio.h>
#include <math.h>

int main(void){
	float radius;
	printf("Enter the radius of the circle: ");
	scanf("%f", &radius);
	float perimeter = 2 * M_PI * radius;
	float area = M_PI * radius * radius;
	printf("Perimeter of the Circle: %f\n", perimeter);
	printf("Area of the Circle: %f\n", area);
	return 0;
}
