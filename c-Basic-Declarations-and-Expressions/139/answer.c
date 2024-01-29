#include <stdio.h>

int main(void) {

	int n, num, sum = 0;

	printf("Input number of terms in the sequence: ");
	scanf("%d", &n);

	printf("Input the terms of the said sequence:\n");
	for(int i = 0; i < n; i++) {
		scanf("%d", &num);
		sum += num;
	}

	printf("Maximum sum of a contiguous subsequence: %d\n", sum);

	return 0;
}

