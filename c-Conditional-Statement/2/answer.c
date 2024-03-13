#include <stdio.h>

int main(void) {

	int n;

	printf("Input a number: ");
	scanf("%d", &n);

	if(n % 2 != 0)
		printf("%d is an odd integer!\n", n);
	else
		printf("%d is an even integer1\n", n);

	return 0;
}
