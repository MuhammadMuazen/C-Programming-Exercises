#include <stdio.h>

int main(void) {

	int input_arr[5];

	printf("Input the array elements:\n");

	register int i;
	for(i = 0; i < 5; i++)
		scanf("%d", &input_arr[i]);

	int min = input_arr[0], index = 0;

	for(i = 0; i < 5; i++) {
		if(min > input_arr[i]) {
			min = input_arr[i];
			index = i;
		}
	}

	printf("Smallest Value: %d\n", min);
	printf("Position of the element: %d\n", index);

	return 0;
}
