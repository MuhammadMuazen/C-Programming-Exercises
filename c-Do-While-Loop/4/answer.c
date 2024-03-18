#include <stdio.h>

int main() {
	
	int num;
	int sum = 0;

	do {
		printf("Input a number (negative to exit): ");
		scanf("%d", &num);

		if(num < 0)
			break;
		
		sum += num;
	} while(1);

	printf("The sum is: %d", sum);

	return 0;
}

