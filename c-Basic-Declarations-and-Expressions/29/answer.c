#include <stdio.h>

int main(void) {

	int input_nums[5], odd_sum = 0;

	printf("Input the first number: ");
	scanf("%d", &input_nums[0]);
	printf("Input the second number: ");
	scanf("%d", &input_nums[1]);
	printf("Input the third number: ");
	scanf("%d", &input_nums[2]);
	printf("Input the fourth number: ");
	scanf("%d", &input_nums[3]);
	printf("Input the fifth number: ");
	scanf("%d", &input_nums[4]);

	register int i = 0;
	for(i = 0; i < 5; i++) {
		if(input_nums[i] % 2 != 0) 
			odd_sum += input_nums[i];
	}
	
	printf("Sum of all odd values: %d\n", odd_sum);

	return 0;
}
