#include <stdio.h>

int main(void) {

	int input_num;
	int arr[5];

	printf("Input the first number of the array: ");
	scanf("%d", &input_num);
	
	arr[0] = input_num;

	register int i;
	for(i = 1; i < 5; i++)
		arr[i] = arr[i - 1] * 3;

	for(i = 0; i < 5; i++) 
		printf("n[%d] = %d\n", i, arr[i]);

	return 0;
}
