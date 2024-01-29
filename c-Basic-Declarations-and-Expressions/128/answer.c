#include <stdio.h>

int main(void) {

	int array_nums[10], in_num;

	printf("Input an integer (2-10): ");
	scanf("%d", &in_num);

	if(in_num < 2 || in_num > 10) {
		printf("input should be 2 <= input <= 10\n");
		return 1;
	}

	int cond_val = 0;
	for(register int i = 0; i < 10; i++) {
		if(cond_val == in_num)
			cond_val = 0;
		
		printf("array_num[%d] = %d\n", i, cond_val);
		cond_val++;
	}

	return 0;
}