#include <stdio.h>

int main(void) {

	float s = 0;
	float k = 1;

	for(float i = 1; i <= 7; i += 2) {
		float t = i / k;
		s += t;
		k *= 2;
	}

	printf("Value of series: %.2f\n", s);

	return 0;
}
	
	
