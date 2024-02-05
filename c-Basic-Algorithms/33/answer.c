#include <stdio.h>

int main(void) {

	int nums[3];

	printf("Input three numbers:\n");
	scanf("%d%d%d", &nums[0], &nums[1], &nums[2]);

	int min = nums[0], min_index = 0;
	int max = nums[0], max_index = 0;
	int mid = 0;
	//check the max and the min in the input
	for(int i = 0; i < 3; i++) {
		if(max < nums[i]) {
			max = nums[i];
			max_index = i;
		}
		
		if(min > nums[i]) {
			min = nums[i];
			min_index = i;
		}
	}

	//find the mid value
	for(int i = 0; i < 3; i++) {
		if(i != max_index && i != min_index)
			mid = nums[i];
	}

	//check the conditions
	if(mid - min == max - mid)
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}
