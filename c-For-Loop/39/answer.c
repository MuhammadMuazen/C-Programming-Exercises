#include <stdio.h>

int main() {

	int sum = 0;

	printf("Numbers between 100 and 200, divisible by 9:\n");

	for(int i = 100; i <= 200; i++)
		if(i % 9 == 0) {
			printf("%d ", i);
			sum += i;
		}

	printf("\nThe sum: %d\n", sum);

	return 0;
}
