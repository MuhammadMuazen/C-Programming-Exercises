#include <stdio.h>
#include <math.h>

int main(void) {

	register int i; 

	printf("=======================================\n");
	printf("n 2 to power n 2 to power -n\n");
	printf("=======================================\n");
	
	for(i = 0; i <= 10; i++)
		printf("%d %.0lf %lf\n", i, pow(2, i), 1/pow(2, i));
	
	printf("=======================================\n");

	return 0;
}
