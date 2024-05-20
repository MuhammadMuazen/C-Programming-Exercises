#include <stdio.h>

int main() {

	int num_of_terms = 0;

	printf("Input the number of terms: ");
	scanf("%d", &num_of_terms);

	int even_nums[num_of_terms];

	printf("The even numbers are: ");

	for(int i = 2, j = 0; i < num_of_terms * 2, j < num_of_terms; i += 2, j++) {
		printf("%d ", i);
		even_nums[j] = i;
	}

	int sum = 0;

	for(int k = 0; k < num_of_terms; k++)
		sum += even_nums[k];

	printf("\nThe Sum of even Natural Number upto %d terms: %d\n", num_of_terms, sum);

	return 0;
}
