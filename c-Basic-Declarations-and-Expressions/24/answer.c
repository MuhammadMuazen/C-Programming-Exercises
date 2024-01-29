#include <stdio.h>

int main(void) {

	int num1, num2;

	printf("Input the first number: ");
	scanf("%d", &num1);
	printf("Input the second number: ");
	scanf("%d", &num2);

	if(num2 % num1 == 0)
		printf("Multiplied!");

	return 0;
}
