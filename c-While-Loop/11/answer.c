#include <stdio.h>

int main() {

	int num;

	printf("Input a positive integer: ");
	scanf("%d", &num);

	if(num < 0) {
		printf("The input must be positive\n");
		return -1;
	}

	int i = 0;

	while(i <= 10) {
		printf("%d * %d = %d\n", num, i, num * i);
		i++;
	}

	return 0;
}
