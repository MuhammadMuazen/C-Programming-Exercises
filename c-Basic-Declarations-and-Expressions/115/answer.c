#include <stdio.h>

int main(void) {

	int in_one, in_two, sum = 0;

	printf("Input two pairs values (integer values):\n");
	scanf("%d%d", &in_one, &in_two);

	int count = in_two - in_one + 1;
	float avg = 0;
	
	printf("Sequence from the lowest to highest number:\n");
	for(register int i = in_one; i <= in_two; i++) {
		printf("%d ", i);
		sum += i;
	}

	avg = (float)sum / count;

	printf("\nAverage value of the said sequence %.2f", avg);

	return 0;
}

