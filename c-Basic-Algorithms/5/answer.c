#include <stdio.h>

int main(void) {

	int n;

	printf("Input a positive integer: ");
	scanf("%d", &n);

	if(n < 0) {
		printf("Input must be bigger than zero!\n");
		return 1;
	}

	if(n % 3 == 0 || n % 7 == 0)
		printf("%d", 1);
	else 
		printf("%d", 0);

	return 0;
}
