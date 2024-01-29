#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num1, num2, number_of_odds = 0, sum_of_odds = 0;

	printf("Input a pair of numbers (for example 10,2): \n");
	printf("Input first number of the pair: ");
	scanf("%d", &num1);
	printf("Input second number of the pair: ");
	scanf("%d", &num2);
	
	int *odd_numbers = malloc((num1 - num2 + 1) * sizeof(int));

	register int i;
	int odd_index = 0;
	for(i = num2; i <= num1; i++) {
		if(i % 2 != 0) {
			number_of_odds++;
			sum_of_odds += i;
			odd_numbers[odd_index] = i;
			odd_index++;
		}
	}

	printf("List of odd number: %d\n", number_of_odds);
	
	register int j;
	for(j = 0; j < number_of_odds; j++)
		printf("%d\n", odd_numbers[j]);

	printf("Sum=%d\n", sum_of_odds);
	
	free(odd_numbers);

	return 0;
}
