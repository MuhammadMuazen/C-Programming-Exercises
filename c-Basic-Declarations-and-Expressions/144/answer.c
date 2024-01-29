#include <stdio.h>

int main(void) {

	int n; 
	
	printf("Input number of straight lines ");
	scanf("%d", &n);

	if(n < 1 || n > 10000) {
		printf("input must be 1 <= n <= 10,000\n");
		return 1;
	}

	printf("Maximum number of regions obtained by drawing %d given straight lines:", n);
	printf("\n%d\n", (n*n+n+2)/2);

	return 0;
}
