#include <stdio.h>

int main() {

	int prod = 1, count = 1;

	while(count <= 5)
		prod *= count++;

	printf("The product is: %d", prod);

	return 0;
}
