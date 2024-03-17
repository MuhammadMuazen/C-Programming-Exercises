#include <stdio.h>

int main() {

	int limit;

	printf("Input the limit: ");
	scanf("%d", &limit);
	
	int sum_even_cubes = 0;

	while(limit > 0) {

		if(limit % 2 == 0)
			sum_even_cubes += limit * limit * limit;

		limit--;
	}
	
	printf("The Sum of even cubes is: %d", sum_even_cubes);

	return 0;
}
