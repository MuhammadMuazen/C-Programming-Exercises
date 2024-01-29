#include <stdio.h>

int main(void) {

	int input_nums[5], pos_nums = 0, neg_nums = 0;

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
		if(input_nums[i] >= 0)
			pos_nums++;
		else
			neg_nums++;
	}

	printf("Number of positive numbers: %d\n", pos_nums);
	printf("Number of negative numbers: %d\n", neg_nums);
	
	return 0;
}
