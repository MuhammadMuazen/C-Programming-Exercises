#include <stdio.h> 

int main(void) {

	int nums[5];

	printf("Input 5 integers: \n");
	scanf("%d%d%d%d%d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);

	int max = nums[0];
	int position = 0;

	register int i;
	for(i = 0; i < 5; i++) {
		if(nums[i] > max) {
			max = nums[i];
			position = i + 1;
		}
	}

	printf("Highest value: %d\n", max);
	printf("Position %d\n", position);

	return 0;
}
