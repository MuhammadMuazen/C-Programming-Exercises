#include <stdio.h>

int main(void) {

	int m, n;

	printf("Input two integes (m, n):\n");
	scanf("%d%d", &m, &n);

	if(n < m) {
		printf("input should be m < n\n");
		return 1;
	}
	
	int even_sum = 0;

	for(register int i = m; n > 0; i++) {
		if(i % 2 == 0) {
			even_sum += i;
			n--;
		}
	}
	
	printf("Sum of %d even numbers starting from %d: \n%d\n", n, m, even_sum);

	return 0;
}
