#include <stdio.h>

int main(void) {

	int min; 

	printf("Input minutes: ");
	scanf("%d", &min);

	int h = min / 60;
	min = min % h;

	printf("%d Hours, %d Minutes\n", h, min);

	return 0;
}
