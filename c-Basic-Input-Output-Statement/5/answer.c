#include <stdio.h>

int main(void) {

	int h, m;

	printf("Input hours: ");
	scanf("%d", &h);
	printf("Input minutes: ");
	scanf("%d", &m);

	int full_min = (h * 60) + m;

	printf("Total: %d minutes.\n", full_min);

	return 0;
}
