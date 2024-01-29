#include <stdio.h>

int main(void) {
	
	int hour, min;
	double degree;

	printf("Input hour(h) and minute(m) (separated by a space): ");
	scanf("%d %d", &hour, &min);

	//every hour is 30 degree --> 60 min == 30 degree 
	//min = 0.5 degree
	
	int def_min = 12 * 60;
	min += hour * 60;

	if(def_min >= min) {
		degree = (def_min - min) * 0.5; 
		printf("At 12:00 the angle is %.1lf degree", degree);
	}

	return 0;
}
