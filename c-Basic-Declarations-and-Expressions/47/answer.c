#include <stdio.h>

int main(void) {

	int input_number;

	printf("Input an integer: ");
	scanf("%d", &input_number);

	register int i;
	for(i = 1; i <= input_number; i++) 
		if(input_number % i == 0) 
			printf("%d\n", i);

	return 0;
}
