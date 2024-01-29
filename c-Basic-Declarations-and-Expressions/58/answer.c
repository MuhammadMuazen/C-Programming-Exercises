#include <stdio.h>

int main(void) {

	double nums[4];

	printf("Input the numbers: \n");
	scanf("%lf%lf%lf%lf", &nums[0], &nums[1], &nums[2], &nums[3]);
	
	double max = nums[0], min = nums[0];

	register int i;
	for(i = 0; i < 4; i++) {
		if(max < nums[i])
			max = nums[i];
		if(min > nums[i])
			min = nums[i];
	}

	double diff = max - min;

	printf("Difference is %lf\n", diff);

	return 0;
}
