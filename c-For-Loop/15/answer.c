#include <stdio.h>

int main() {

	int num = 0;

	printf("Input a number: ");
	scanf("%d", &num);

	int fact = 1;

	for(int i = num; i > 0; i--)
		fact *= i;

	printf("The Factorial of %d is: %d", num, fact);

	return 0;
}
