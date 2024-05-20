#include <stdio.h>

int main() {

	int num;

	printf("Input the nunber: ");
	scanf("%d", &num);

	int sum = 0;

	printf("The positive divisor: ");

	for(int i = 1; i < num; i++) {
		if(num % i == 0) {
			printf("%d ", i);
			sum += i;
		}
	}

	printf("\nThe sum of the divisor is: %d\n", sum);

	if(sum == num)
		printf("So, the number is perfect.\n");
	else
		printf("So, the number is not perfect.\n");

	return 0;
}
