#include <stdio.h>

int main() {

	int num, fact = 1;

	printf("Input a number: ");
	scanf("%d", &num);

	while(num > 0)
		fact *= (num--);
	
	printf("The Factorial is %d", fact);

	return 0;
}
