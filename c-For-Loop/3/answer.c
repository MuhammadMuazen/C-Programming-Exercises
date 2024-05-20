#include <stdio.h>

int main() {

	int sum = 0;
	int num;

	printf("Input a number: ");
	scanf("%d", &num);

	printf("The first %d natural number is:\n", num);
	
	for(int i = 1; i <= num; i++) {
		printf("%d ", i);
		sum += i;
	}

	printf("\nThe Sum of Natural Number upto %d terms: %d", num, sum);

	return 0;
}
