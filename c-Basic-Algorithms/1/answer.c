#include <stdio.h>

int main(void) {

	int n1, n2;

	printf("Input the first number: ");
	scanf("%d", &n1);
	printf("Input the second number: ");
	scanf("%d", &n2);

	int sum = n1 + n2;

	if(n1 == n2)
		printf("%d\n", sum * sum * sum);
	else
		printf("%d\n", sum);

	return 0;
}
