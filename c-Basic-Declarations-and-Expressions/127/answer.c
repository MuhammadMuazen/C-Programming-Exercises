#include <stdio.h>

int main(void) {

	int in_arr[8];

	printf("Input 8 array elements:\n");
	
	for(register int i = 7; i >= 0; i--)
		scanf("%d", &in_arr[i]);

	for(register int i = 0; i < 8; i++)
		printf("array_nums[%d] = %d\n", i, in_arr[i]);

	return 0;
}
