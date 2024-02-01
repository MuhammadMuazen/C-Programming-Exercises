#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n;

	printf("Input a number: ");
	scanf("%d", &n);

	int abs_value = abs(n - 51);

	if(n > 51)
		printf("%d\n", abs_value * abs_value * abs_value);
	else
		printf("%d\n", abs_value);

	return 0;
}
