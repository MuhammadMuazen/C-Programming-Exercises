#include <stdio.h>

int main() {

	int num;
	int sum = 0, count = 0;

	do {
		printf("Input a number: ");
		scanf("%d", &num);
		
		sum += num;
		count++;
		
		double avg = (double)(sum / count);

		printf("The average is now: %.2lf\n", avg);
	} while(1);

	return 0;
}
