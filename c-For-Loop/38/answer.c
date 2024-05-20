#include <stdio.h>

int main() {

	int num = 0, r = 0, sum = 0;

	printf("Input a number: ");
	scanf("%d", &num);

	int temp = num;

	for(int i = num; num != 0; num /= 10) {
		r = num % 10;
		sum = sum * 10 + r;
	}

	if(temp == sum)
		printf("%d is a palindrome number.\n", temp);
	else
		printf("%d is not a palindrome number.\n", temp);

	return 0;
}



