#include <stdio.h>

int main(void) {

	int input_nums[5], pos_nums = 0, pos_sum = 0;

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
		if(input_nums[i] >= 0) {
			pos_nums++;
			pos_sum += input_nums[i];
		}
	}

	float average_pos = pos_sum / pos_nums;
	
	printf("Number of positive numbers: %d\n", pos_nums);
	printf("Average value of the said positive numbers: %.2f\n", average_pos);
	
	return 0;
}
