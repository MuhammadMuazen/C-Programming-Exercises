#include <stdio.h>

int main(void) {

	int input_value;

	printf("Input a value (negative): ");
	scanf("%d", &input_value);

	if(input_value >= 0) 
		printf("Please enter a negative value\n");
	else {
		printf("Original value = %d\n", input_value);
		printf("Absolute value = %d\n", -1 * input_value);
	}

	return 0;
}
