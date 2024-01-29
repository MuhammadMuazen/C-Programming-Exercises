#include <stdio.h>

int main(void) {

	int input;

	printf("Read the integer from keyboard: ");
	scanf("%d", &input);

	printf("Integer value: %d\n", input);

	input <<= 2;

	printf("The left shifted data is = %d", input);

	return 0;
}
