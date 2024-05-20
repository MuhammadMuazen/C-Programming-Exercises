#include <stdio.h>

int main() {

	int num = 0;
	int r = 0 , sum = 0;

	printf("Input a number :");
	scanf("%d", &num);

	printf("The number in reverse is: ");

	for(int i = num; num != 0; num /= 10) {
		r = num % 10;
		sum = sum * 10 + r;
	}

	printf("%d\n", sum);

	return 0;
}
