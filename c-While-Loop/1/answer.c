#include <stdio.h>

int main() {

	int first_count = 0, second_count = 10;

	while(first_count <= 10)
		printf("%d ", first_count++);
	
	printf("\n");

	while(second_count >= 0)
		printf("%d ", second_count--); 

	return 0;
}
