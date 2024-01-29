#include <stdio.h>

int main(void) {

	int in_arr[7];

	printf("Input 7 array elements:\n");
	for(register int i = 0; i < 7; i++) 
		scanf("%d", &in_arr[i]);
	
	printf("Array positions that store a value less or equal to 0:\n");
	for(register int i = 0; i < 7; i++)
		if(in_arr[i] <= 0)
			printf("array_nums[%d] = %d\n", i, in_arr[i]);

	return 0;
}
