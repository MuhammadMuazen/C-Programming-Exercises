#include <stdio.h>

int main() {

	int sum = 0;
	
	printf("The first 10 natural number is:\n");

	for(int i = 1; i <= 10; i++) {
		printf("%d ", i);
		sum += i;
	}

	printf("\nThe Sum is: %d\n", sum);

	return 0;
}


	
