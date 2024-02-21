#include <stdio.h>

int main(void) {

	int centigrade;

	printf("Input a temperature (in Centigrade): ");
	scanf("%d", &centigrade);

	double fahrenheit = (double)(centigrade * 9 / 5) + 32;

	printf("%lf degrees Fahrenheit.", fahrenheit);

	return 0;
}
