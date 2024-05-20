#include <stdio.h>
#include <math.h>

int main() {

	int terms = 0, sum = 0;

	printf("Input the number of terms: ");
	scanf("%d", &terms);
	printf("The square natural upto 5 terms are: ");

	for(int i = 1; i <= terms; i++) {
		double square_i = pow(i, 2);
		printf("%d ", (int)square_i);
		sum += (int)square_i;
	}

	printf("\nThe Sum of Square Natural Number upto %d = %d\n", terms, sum);
	
	return 0;
}
		
