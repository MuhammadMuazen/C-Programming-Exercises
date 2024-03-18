#include <stdio.h>

int main() {

	int num;
	int sum = 0;

	printf("Input a number: ");
	scanf("%d", &num);
	
	if(num < 0) {
		printf("The number must be positive!\n");
		return -1;
	}

	do {
		sum += num % 10;
		num = num / 10;
	} while(num > 0);

	printf("The sum of the digits is %d\n", sum);

	return 0;
}
