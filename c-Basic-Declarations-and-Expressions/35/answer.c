#include <stdio.h>

int main(void) {

	int num1, num2;
	
	printf("Input a pair of numbers (for example 10,2 : 2,10): \n");
	printf("Input first number of the pair: ");
	scanf("%d", &num1);
	printf("Input second number of the pair: ");
	scanf("%d", &num2);

	if(num1 > num2)
		printf("The pair is in descending order!\n");
	else
		printf("The pair is in ascending order!\n");

	return 0;
}
