#include <stdio.h>

int main(void) {

	float x, y;

	printf("x: ");
	scanf("%f", &x);
	printf("y: ");
	scanf("%f", &y);

	if(!y)
		printf("Division is not possible");
	else
		printf("%f", x / y);

	return 0;
}
