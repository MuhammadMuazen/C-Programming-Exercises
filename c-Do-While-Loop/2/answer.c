#include <stdio.h>

int main() {

	int num;
	int sum = 0;

	do {
		printf("Input a number (0 to exit): ");
		scanf("%d", &num);
		if(num > 0)
			sum += num;

		if(num == 0)
			break;
	} while(1);
	
	printf("The sum of all the positive integers is: %d", sum);

	return 0;
}
