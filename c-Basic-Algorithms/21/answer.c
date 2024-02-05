#include <stdio.h>

int main(void) {

	int n;

	printf("Input a number: ");
	scanf("%d", &n);

	if(n % 10 <= 2 || n % 10 >= 8)
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}
