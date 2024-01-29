#include <stdio.h>

int main(void){

	int nums[5];
	int sum = 0;

	printf("Input the first number: ");
	scanf("%d", &nums[0]);
	printf("Input the second number: ");
	scanf("%d", &nums[1]);
	printf("Input the third number: ");
	scanf("%d", &nums[2]);
	printf("Input the fourth number: ");
	scanf("%d", &nums[3]);
	printf("Input the fifth number: ");
	scanf("%d", &nums[4]);
	
	register int i;
	for(i = 0; i < 5; i++)
		if(nums[i] % 2 != 0)
			sum += nums[i];

	printf("Sum of all odd values: %d\n", sum);

	return 0;
}
