#include <stdio.h>

int main() {

	int num;
	double avg = 0, sum = 0;

	printf("Input the 10 numbers:\n");

	for(int i = 0; i < 10; i++) {
		scanf("%d", &num);
		sum += num;
	}

	printf("The sum of 10 no is: %d\n", sum);

	avg = (double)(sum / 10);

	printf("The Average is: %lf\n", avg);

	return 0;
}
