#include <stdio.h>

int main(void) {

	int num;

	printf("Input an positive integer: ");
	scanf("%d", &num);

	if(num < 0) {
		printf("The input must be a positive integer!\n");
		return 1;
	}

	if(num % 13 == 0 || (num - 1) % 13 == 0)
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}
