#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n1, n2;

	printf("Input 1st number (positive or negative): ");
	scanf("%d", &n1);
	printf("Input 2nd number (positive or negative): ");
	scanf("%d", &n2);

	n1 = abs(n1);
	n2 = abs(n2);

	printf("The absolute value of 1st number is: %d\n", n1);
	printf("The absolute value of 2nd number is: %d\n", n2);

	return 0;
}
