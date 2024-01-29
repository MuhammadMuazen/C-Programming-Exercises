#include <stdio.h>

int main(void) {

	int inp_nums[6];

	printf("Input 6 numbers (integer values):\n");

	for(register int i = 0; i < 6; i++)
		scanf("%d", &inp_nums[i]);

	int max = inp_nums[0], max_index = 0;

	for(register int i = 0; i < 6; i++) {
		if(max < inp_nums[i]) {
		max = inp_nums[i];
			max_index = i + 1;
		}
	}

	printf("\nMaximum value: %d\n", max);
	printf("Position: %d\n", max_index);

	return 0;
}
