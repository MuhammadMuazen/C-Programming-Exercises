#include <stdio.h>

int main(void) {

	int nums[3];

	printf("Input three numbers:\n");
	for(int i = 0; i < 3; i++)
		scanf("%d", &nums[i]);

	int sum = 0;
	
	for(int i = 0; i < 3; i++) {
		if(nums[i] >= 10 && nums[i] <= 20) {
			if(nums[i] == 13 || nums[i] == 17)
				sum += nums[i];
			else
				sum += 0;
		}
		else
			sum += nums[i];
	}

	printf("%d", sum);

	return 0;
}
