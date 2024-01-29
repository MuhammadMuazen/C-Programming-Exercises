#include <stdio.h>

int main(void) {

	float s = 0;

	register int i;
	for(i = 1; i <= 50; i++)
		s +=  (float)1 / i;

	printf("Value of S: %.2f\n", s);

	return 0;
}
