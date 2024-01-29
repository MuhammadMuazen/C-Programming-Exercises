#include <stdio.h>

int main(void) {

	int x,y;

	printf("Input two integer values:\n");
	scanf("%d%d", &x, &y);

	if(y == 0) {
		printf("Division is not possible..!\n");
		return 1;
	}

	float div = (float)x/y;

	printf("Result: %.2f\n", div);

	return 0;
}
