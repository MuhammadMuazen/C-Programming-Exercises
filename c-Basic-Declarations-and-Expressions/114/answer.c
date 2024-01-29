#include <stdio.h>

int main(void) {

	int in_one, in_two, even_sum = 0;

	printf("Input two numbers (integer values):\n");
	scanf("%d%d", &in_one, &in_two);

	for(register int i = in_one; i <= in_two; i++) 
		if(i % 2 == 0)
			even_sum += i;

	printf("Sum of all even values between %d and %d\n%d", in_one, in_two, even_sum);

	return 0;
}
