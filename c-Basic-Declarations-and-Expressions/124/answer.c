#include <stdio.h>

int main(void) {

	int in_arr[7];

	printf("Input 7 array elements:\n");
	
	for(register int i = 0; i < 7; i++)
		scanf("%d", &in_arr[i]);

	for(register int i = 0; i < 7; i++) 
		printf("array_nums[%d] = %d\n", i, in_arr[i]);

	return 0;
}
