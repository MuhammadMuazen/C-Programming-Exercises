#include <stdio.h>

int main(void) {

	int in_one, in_two, sum = 0;

	printf("Input two numbers(integer):\n");
	scanf("%d%d", &in_one, &in_two);

	if(in_one > in_two) {
		for(register int i = in_two; i <= in_one; i++) {
			if(i % 7 != 0) {
				sum += i;
			}
		}
	}
	else if(in_two > in_one) {
		for(register int i = in_one; i <= in_two; i++) {
			if(i % 7 != 0) {
				sum += i;
			}
		}
	}

	printf("Sum of all numbers between said numbers (inclusive) not divisible by 7:\n");
	printf("%d\n", sum);

	return 0;
}
