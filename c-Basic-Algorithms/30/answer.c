#include <stdio.h>

int main(void) {

	int nums[3];

	printf("Input three elements:\n");
	for(int i = 0; i < 3; i++)
		scanf("%d", &nums[i]);

	int sum = 0;

	for(int i = 0; i < 3; i++)
		if(nums[i] == 13)
			continue;
		else
			sum += nums[i];

	printf("%d", sum);

	return 0;
}
