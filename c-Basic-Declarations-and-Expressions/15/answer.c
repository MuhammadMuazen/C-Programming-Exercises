#include <stdio.h>
#include <math.h>

int main(void){
	double x1, y1, x2, y2;

	printf("Input x1: ");
	scanf("%lf", &x1);
	printf("Input y1: ");
	scanf("%lf", &y1);
	printf("Input x2: ");
	scanf("%lf", &x2);
	printf("Input y2: ");
	scanf("%lf", &y2);

	double x_axis = pow(x2 - x1, 2);
	double y_axis = pow(y2 - y1, 2);
	double distance = sqrt(x_axis + y_axis);
	
	printf("Distance between the said points: %lf\n", distance);

	return 0;
}
