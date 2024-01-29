#include <stdio.h>

int main(void) {

	int x, y;

	printf("Input two integer values:\n");
	scanf("%d%d", &x, &y);

	int sum = x + y, count = 0;

	while(sum > 0) {
		sum = sum / 10;
		count++;
	}

	printf("Number of digits of the sum value of the said numbers: %d\n", count);

	return 0;
}
