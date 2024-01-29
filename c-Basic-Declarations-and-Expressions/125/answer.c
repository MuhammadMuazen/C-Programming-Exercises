#include <stdio.h>

int main(void) {

	int in_arr[7];

	printf("Input the first element of the array: ");
	scanf("%d", &in_arr[0]);

	for(register int i = 1; i < 7; i++)
		in_arr[i] = in_arr[i - 1] * 2;

	for(register int i = 0; i < 7; i++) 
		printf("array_nums[%d] = %d\n", i, in_arr[i]);

	return 0;
}
